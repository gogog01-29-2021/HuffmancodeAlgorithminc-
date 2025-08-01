// CompleteGraphTest.cpp
// C++ version of CompleteGraphTest
#include <iostream>
#include "AdjList.cpp"
#include "AdjMatrix.cpp"
#include "IncMatrix.cpp"
using namespace std;

int main() {
    int numVertices = 3;
    AdjList adjList(numVertices);
    AdjMatrix adjMatrix(numVertices);
    int edges[6][3] = {
        {0, 1, 1}, {0, 2, 1}, {1, 0, 1}, {1, 2, 1}, {2, 0, 1}, {2, 1, 1}
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
