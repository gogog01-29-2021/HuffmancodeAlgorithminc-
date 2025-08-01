// HuffmanCodeTree.cpp
// C++ version of HuffmanCodeTree and HNode
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct HNode {
    char character;
    HNode *left, *right, *parent;
    string encode;
    HNode(char character = '\0', HNode* left = nullptr, HNode* right = nullptr, HNode* parent = nullptr)
        : character(character), left(left), right(right), parent(parent), encode("") {}
    void encoding() {
        if (character == '\0') return;
        string code;
        for (HNode* p = this; p->parent != nullptr; p = p->parent) {
            if (p == p->parent->left) code += '0';
            else code += '1';
        }
        reverse(code.begin(), code.end());
        encode = code;
    }
};

class HuffmanCodeTree {
public:
    HNode* root;
    HuffmanCodeTree() { root = new HNode(); }
    void encoding() { encodeNodes(root); }
    void encodeNodes(HNode* node) {
        if (!node) return;
        if (node->character != '\0') node->encoding();
        encodeNodes(node->left);
        encodeNodes(node->right);
    }
    string toString() const {
        stringstream out;
        buildEncoding(root, out);
        return out.str();
    }
    void buildEncoding(HNode* node, stringstream& out) const {
        if (!node) return;
        if (node->character != '\0') out << node->character << ": " << node->encode << "\n";
        buildEncoding(node->left, out);
        buildEncoding(node->right, out);
    }
};

int main() {
    cout << "HuffmanCodeTree C++ version." << endl;

    // Example usage
    HuffmanCodeTree tree;
    tree.root->character = '\0'; // Set root character
    tree.root->left = new HNode('a');
    tree.root->right = new HNode('b');
    tree.root->left->parent = tree.root;
    tree.root->right->parent = tree.root;

    tree.encoding();
    cout << tree.toString();

    return 0;
}
