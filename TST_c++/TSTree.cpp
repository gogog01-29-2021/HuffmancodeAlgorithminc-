// TSTree.cpp
// C++ version of TSTree
#include <iostream>
#include <string>
#include "Node.cpp"
using namespace std;

class TSTree {
public:
    Node* root;
    TSTree() { root = new Node(' '); }
    Node* insert(const string& word) { return insert(root, word); }
private:
    Node* insert(Node* node, const string& word) {
        if (!node) node = new Node(word[0]);
        if (word[0] < node->data) node->left = insert(node->left, word);
        else if (word[0] > node->data) node->right = insert(node->right, word);
        else {
            if (word.length() > 1) node->eq = insert(node->eq, word.substr(1));
            else node->isEndOfString = true;
        }
        return node;
    }
    void traverseTSTUtil(Node* node, char* buffer, int depth) {
        if (node) {
            traverseTSTUtil(node->left, buffer, depth);
            buffer[depth] = node->data;
            if (node->isEndOfString) cout << string(buffer, buffer + depth + 1) << endl;
            traverseTSTUtil(node->eq, buffer, depth + 1);
            traverseTSTUtil(node->right, buffer, depth);
        }
    }
public:
    void traverseTST() {
        char buffer[50];
        traverseTSTUtil(root, buffer, 0);
    }
};
