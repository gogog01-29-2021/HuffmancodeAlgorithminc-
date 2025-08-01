// MainHuffman.cpp
// C++ version of MainHuffman for Huffman encoding/decoding
#include <iostream>
#include "HuffmanCodeTree.cpp"
#include "Itm.cpp"
using namespace std;

HuffmanCodeTree buildHuffmanTree() {
    HuffmanCodeTree ht;
    HNode* nodeA = new HNode('A', nullptr, nullptr, ht.root);
    ht.root->left = nodeA;
    HNode* nodeBCD = new HNode('\0', nullptr, nullptr, ht.root);
    ht.root->right = nodeBCD;
    HNode* nodeB = new HNode('B', nullptr, nullptr, nodeBCD);
    nodeBCD->left = nodeB;
    HNode* nodeCD = new HNode('\0', nullptr, nullptr, nodeBCD);
    nodeBCD->right = nodeCD;
    HNode* nodeC = new HNode('C', nullptr, nullptr, nodeCD);
    nodeCD->left = nodeC;
    HNode* nodeD = new HNode('D', nullptr, nullptr, nodeCD);
    nodeCD->right = nodeD;
    return ht;
}

int main() {
    HuffmanCodeTree ht = buildHuffmanTree();
    ht.encoding();
    cout << "Huffman Encoding Table:\n" << ht.toString();
    Itm itm;
    string encodedString = "011011110";
    cout << "Decoding '" << encodedString << "': " << itm.decoder(ht, encodedString) << endl;
    return 0;
}
