// MainTST.cpp
// C++ version of MainTST for TSTree
#include <iostream>
#include <string>
#include "TSTree.cpp"
#include "Itm.cpp"
using namespace std;

int main() {
    TSTree t;
    Itm itm;
    t.insert("hello");
    t.insert("world");
    t.insert("her");
    t.insert("hero");
    t.insert("cat");
    t.insert("cats");
    t.insert("up");
    t.insert("bug");
    cout << "Following is traversal of ternary search tree:" << endl;
    t.traverseTST();
    cout << "\nFollowing are search results for 'cats', 'bu', and 'up':" << endl;
    cout << "cats: " << (itm.searchTST(t, "cats") ? "Found" : "Not Found") << endl;
    cout << "bu: " << (itm.searchTST(t, "bu") ? "Found" : "Not Found") << endl;
    cout << "up: " << (itm.searchTST(t, "up") ? "Found" : "Not Found") << endl;
    cout << "Following is traversal of ternary search tree:" << endl;
    t.traverseTST();
    cout << "\nFollowing are search results" << endl;
    cout << "her: " << (itm.searchTST(t, "her") ? "Found" : "Not Found") << endl;
    cout << "hell: " << (itm.searchTST(t, "hell") ? "Found" : "Not Found") << endl;
    return 0;
}
