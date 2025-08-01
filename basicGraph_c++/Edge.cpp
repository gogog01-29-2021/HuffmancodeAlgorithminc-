// Edge.cpp
// C++ version of Edge class
#include <iostream>
using namespace std;

class Edge {
    int u, v;
    double weight;
public:
    Edge* next;
    Edge(int x, int y, double w, Edge* next = nullptr) : u(x), v(y), weight(w), next(next) {}
    int getTail() const { return u; }
    int getHead() const { return v; }
    double getWeight() const { return weight; }
    bool operator<(const Edge& e) const { return weight < e.weight; }
    friend ostream& operator<<(ostream& os, const Edge& e) {
        os << "(" << e.u << "->" << e.v << "): " << e.weight;
        return os;
    }
};
