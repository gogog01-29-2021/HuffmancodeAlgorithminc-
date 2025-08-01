// Main.cpp
// C++ version of Main for 250315
#include <iostream>
#include "Graph.cpp"
#include "BFSPathFinder.cpp"
using namespace std;

int main() {
    Graph graph;
    // Example Graph 1
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(4, 5);
    cout << "Are 1 and 3 connected? " << (BFSPathFinder::areConnected(graph, 1, 3) ? "true" : "false") << endl;
    cout << "Are 1 and 5 connected? " << (BFSPathFinder::areConnected(graph, 1, 5) ? "true" : "false") << endl;
    return 0;
}
