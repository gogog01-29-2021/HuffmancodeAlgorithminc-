// Student.cpp
// C++ version of Student and Node classes
#include <iostream>
#include <string>
using namespace std;

class Student {
  public:
    int year;
    string name;
    Student(int year, const string& name) : year(year), name(name) {}
};

class Node {
  public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node* next) : data(data), next(next) {}
};

int main() {
    Student s(2025, "Alice");
    cout << "Student: " << s.name << ", Year: " << s.year << endl;
    Node n1(10);
    Node n2(20, &n1);
    cout << "Node2 data: " << n2.data << ", Next Node data: " << n2.next->data << endl;
    return 0;
}
