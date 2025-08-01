// Itm.cpp
// C++ version of Itm decoder for HuffmanCodeTree
#include <iostream>
#include <string>
#include "HuffmanCodeTree.cpp"
using namespace std;

class Itm {
public:
    string decoder(HuffmanCodeTree& huffmanCodeTree, const string& encodedString) {
        string output;
        HNode* current = huffmanCodeTree.root;
        for (char c : encodedString) {
            if (!current) return "";
            if (c == '0') current = current->left;
            else if (c == '1') current = current->right;
            if (current && !current->left && !current->right) {
                output += current->character;
                current = huffmanCodeTree.root;
            }
        }
        return output;
    }
};

int main() {
    cout << "Itm C++ version decoder for HuffmanCodeTree." << endl;
    // Example usage:
    // HuffmanCodeTree huffmanTree;
    // string encoded = "101100101";
    // Itm itm;
    // string decoded = itm.decoder(huffmanTree, encoded);
    // cout << "Decoded string: " << decoded << endl;
    return 0;
}
