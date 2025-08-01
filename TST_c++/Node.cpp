// Node.cpp
// C++ version of Node for TST
#include <iostream>
using namespace std;

class Node {
public:
    char data;
    bool isEndOfString;
    Node *left, *eq, *right;
    Node(char data) : data(data), isEndOfString(false), left(nullptr), eq(nullptr), right(nullptr) {}
};

int main() {
    cout << "Node C++ version for TST." << endl;
    return 0;
}
