// Itm.cpp
// C++ version of Itm class with Student comparator, countNames, and isBracketBalanced
#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Student {
public:
    int year;
    string name;
    Student(int year, const string& name) : year(year), name(name) {}
};

struct Itm {
    // Comparator for Student
    bool operator()(const Student& s1, const Student& s2) const {
        if (s1.year != s2.year) return s1.year < s2.year;
        return s1.name < s2.name;
    }
    // Count unique names
    int countNames(const vector<Student>& students) {
        set<string> names;
        for (const auto& student : students) {
            names.insert(student.name);
        }
        return names.size();
    }
    // Check if brackets are balanced
    bool isBracketBalanced(const string& s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (st.empty()) return false;
                char top = st.top(); st.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
                    return false;
            }
        }
        return st.empty();
    }
};

int main() {
    vector<Student> students = { {2025, "Alice"}, {2024, "Bob"}, {2025, "Alice"} };
    Itm itm;
    cout << "Unique names: " << itm.countNames(students) << endl;
    cout << "Balanced ({}[]): " << itm.isBracketBalanced("({[]})") << endl;
    cout << "Balanced ({}[)): " << itm.isBracketBalanced("({[)})") << endl;
    return 0;
}
