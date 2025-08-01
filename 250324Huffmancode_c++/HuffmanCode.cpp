// HuffmanCode.cpp
// Improved bottom-up Huffman coding implementation in C++
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

// Node structure for Huffman tree
struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
    Node(Node* l, Node* r) : ch('\0'), freq(l->freq + r->freq), left(l), right(r) {}
    ~Node() { delete left; delete right; }
};

// Comparator for priority queue (min-heap)
struct Compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

class HuffmanCode {
public:
    unordered_map<char, string> codes;      // Char to code
    unordered_map<string, char> decodeMap;  // Code to char
    Node* root;

    HuffmanCode() : root(nullptr) {}
    ~HuffmanCode() { delete root; }

    // Build Huffman tree from input text (bottom-up)
    void build(const string& text) {
        unordered_map<char, int> freq;
        for (char c : text) freq[c]++;
        priority_queue<Node*, vector<Node*>, Compare> pq;
        for (auto& p : freq) pq.push(new Node(p.first, p.second));
        while (pq.size() > 1) {
            Node* l = pq.top(); pq.pop();
            Node* r = pq.top(); pq.pop();
            pq.push(new Node(l, r));
        }
        root = pq.top();
        buildCodes(root, "");
    }

    // Recursively assign codes to each character
    void buildCodes(Node* node, string str) {
        if (!node) return;
        if (!node->left && !node->right) {
            codes[node->ch] = str;
            decodeMap[str] = node->ch;
        }
        buildCodes(node->left, str + "0");
        buildCodes(node->right, str + "1");
    }

    // Encode input text to Huffman binary string
    string encode(const string& text) {
        build(text);
        string res;
        for (char c : text) res += codes[c];
        return res;
    }

    // Decode Huffman binary string to original text
    string decode(const string& encoded) {
        string res, curr;
        for (char bit : encoded) {
            curr += bit;
            if (decodeMap.count(curr)) {
                res += decodeMap[curr];
                curr = "";
            }
        }
        return res;
    }

    // Print all Huffman codes
    void printCodes() const {
        cout << "Huffman Codes:\n";
        for (const auto& p : codes) {
            cout << p.first << ": " << p.second << endl;
        }
    }
};

// Example usage and test
int main() {
    HuffmanCode hc;
    string input = "example";
    string encoded = hc.encode(input);
    string decoded = hc.decode(encoded);
    cout << "Original: " << input << endl;
    cout << "Encoded:  " << encoded << endl;
    cout << "Decoded:  " << decoded << endl;
    hc.printCodes();
    assert(decoded == input);
    cout << "Test passed!" << endl;
    return 0;
}
