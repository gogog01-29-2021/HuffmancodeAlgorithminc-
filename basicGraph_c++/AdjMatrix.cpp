// AdjMatrix.cpp
// C++ version of AdjMatrix class
#include "Graph.h"
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>

class AdjMatrix : public Graph {
    std::vector<std::vector<double>> matrix;
    int numVertices;
public:
    AdjMatrix(int numVertices) : matrix(numVertices, std::vector<double>(numVertices, 0.0)), numVertices(numVertices) {}
    void addEdge(int u, int v, double weight) override {
        if (u < 0 || u >= numVertices || v < 0 || v >= numVertices)
            throw std::invalid_argument("Vertex number out of bounds");
        matrix[u][v] = weight;
    }
    bool hasEdge(int u, int v) const { return matrix[u][v] != 0; }
    double getEdgeWeight(int u, int v) const { return matrix[u][v]; }
    std::string toString() const override {
        std::ostringstream sb;
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                sb << std::setw(8) << std::fixed << std::setprecision(2) << matrix[i][j] << " ";
            }
            sb << "\n";
        }
        return sb.str();
    }
};
