// Itm.cpp
// C++ version of Itm for TSTree search
#include <iostream>
#include <string>
#include "TSTree.cpp"
using namespace std;

class Itm {
public:
    bool searchTST(TSTree& tree, const string& word) {
        if (!tree.root) return false;
        if (!tree.root->right) return false;
        Node* current = tree.root->right;
        Node* last = tree.root->right;
        int i = 0;
        while (i < word.length()) {
            if (!current) return false;
            if (current->data == word[i]) {
                last = current;
                current = current->eq;
                i++;
            } else if (current->data < word[i]) {
                last = current;
                current = current->right;
                last = last->right;
            } else if (current->data > word[i]) {
                last = current;
                current = current->left;
            } else {
                return false;
            }
        }
        if (!last->isEndOfString) return false;
        return true;
    }
};

int main() {
    cout << "Itm C++ version for TSTree search." << endl;
    return 0;
}
