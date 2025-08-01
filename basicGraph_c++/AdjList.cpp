// AdjList.cpp
// C++ version of AdjList class
#include "Graph.h"
#include <vector>
#include <sstream>

class AdjList : public Graph {
    std::vector<std::vector<Edge>> adjList;
public:
    AdjList(int numVertices) : adjList(numVertices) {}
    void addEdge(int u, int v, double w) override {
        adjList[u].emplace_back(u, v, w);
    }
    std::string toString() const override {
        std::ostringstream result;
        for (size_t i = 0; i < adjList.size(); ++i) {
            result << "\n[" << i << "]: ";
            for (const auto& edge : adjList[i]) {
                result << edge << " ";
            }
        }
        return result.str();
    }
};
