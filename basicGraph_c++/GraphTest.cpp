// GraphTest.cpp
// C++ version of GraphTest
#include <iostream>
#include "AdjList.cpp"
#include "AdjMatrix.cpp"
#include "IncMatrix.cpp"
using namespace std;

int main() {
    int numVertices = 5;
    AdjList adjList(numVertices);
    AdjMatrix adjMatrix(numVertices);
    int edges[6][3] = {
        {0, 1, 10}, {0, 3, 5}, {1, 2, 1}, {2, 3, 8}, {3, 4, 2}, {4, 0, 7}
    };
    IncMatrix incMatrix(numVertices, 6);
    for (auto& edge : edges) adjList.addEdge(edge[0], edge[1], edge[2]);
    for (auto& edge : edges) adjMatrix.addEdge(edge[0], edge[1], edge[2]);
    for (auto& edge : edges) incMatrix.addEdge(edge[0], edge[1], edge[2]);
    cout << "Adjacency List Representation:" << adjList.toString() << endl;
    cout << "\nAdjacency Matrix Representation:\n" << adjMatrix.toString() << endl;
    cout << "\nIncidence Matrix Representation:\n" << incMatrix.toString() << endl;
    return 0;
}
