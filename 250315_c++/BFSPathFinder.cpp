// BFSPathFinder.cpp
// C++ version of BFSPathFinder
#include <iostream>
#include <queue>
#include <set>
#include "Graph.cpp"

using namespace std;

class BFSPathFinder {
public:
    static bool areConnected(const Graph& graph, int start, int target) {
        if (start == target) return true;
        set<int> visited;
        queue<int> q;
        q.push(start);
        visited.insert(start);
        while (!q.empty()) {
            int current = q.front(); q.pop();
            for (int neighbor : graph.getNeighbors(current)) {
                if (neighbor == target) return true;
                if (!visited.count(neighbor)) {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
        return false;
    }
};

int main() {
    cout << "BFSPathFinder C++ version." << endl;
    // Example usage:
    Graph graph;
    // ... (code to populate the graph)
    int startNode = 1;
    int targetNode = 5;
    if (BFSPathFinder::areConnected(graph, startNode, targetNode)) {
        cout << "Path exists between " << startNode << " and " << targetNode << "." << endl;
    } else {
        cout << "No path exists between " << startNode << " and " << targetNode << "." << endl;
    }
    return 0;
}
