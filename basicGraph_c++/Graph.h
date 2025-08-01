// Graph.h
// C++ version of Graph interface (as abstract base class)
#ifndef GRAPH_H
#define GRAPH_H
#include "Edge.cpp"
#include <string>

class Graph {
public:
    virtual void addEdge(int u, int v, double w) = 0;
    virtual std::string toString() const = 0;
    virtual ~Graph() = default;
};

#endif
