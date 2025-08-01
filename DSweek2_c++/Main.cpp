// Main.cpp
// C++ version of Main for DSweek2
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Itm.cpp" // Assuming Itm and Student are in the same directory
using namespace std;

int main() {
    Itm itm;
    vector<Student> students = {
        {2020, "Allice"},
        {2021, "Bob"},
        {2022, "Cathy"},
        {2023, "David"},
        {2024, "Eva"}
    };
    sort(students.begin(), students.end(), itm);
    cout << "1. Sorted students by years of admission:" << endl;
    for (const auto& student : students) {
        cout << student.year << " " << student.name << endl;
    }
    int uniqueNamesCount = itm.countNames(students);
    cout << "2. Number of unique names: " << uniqueNamesCount << endl;
    cout << "\n4. Balanced Brackets test results: "
         << (itm.isBracketBalanced("{[()]}") ? "Balanced" : "Unbalanced") << endl;
    return 0;
}
