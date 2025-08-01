// Graph.cpp
// C++ version of Graph class
#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
using namespace std;

class Graph {
    unordered_map<int, vector<int>> adjList;
public:
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<int> getNeighbors(int node) const {
        auto it = adjList.find(node);
        if (it != adjList.end()) return it->second;
        return {};
    }
    set<int> getNodes() const {
        set<int> nodes;
        for (const auto& p : adjList) nodes.insert(p.first);
        return nodes;
    }
};
