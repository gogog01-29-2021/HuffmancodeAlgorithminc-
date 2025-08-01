// IncMatrix.cpp
// C++ version of IncMatrix class
#include "Graph.h"
#include <vector>
#include <sstream>
#include <iomanip>

class IncMatrix : public Graph {
    std::vector<std::vector<double>> m;
    int cur;
public:
    IncMatrix(int numVertices, int numEdges) : m(numVertices, std::vector<double>(numEdges, 0.0)), cur(0) {}
    void addEdge(int u, int v, double weight) override {
        m[u][cur] = -weight;
        m[v][cur] = weight;
        cur++;
    }
    std::string toString() const override {
        std::ostringstream sb;
        for (const auto& row : m) {
            for (double value : row) {
                sb << std::setw(6) << std::fixed << std::setprecision(2) << value << " ";
            }
            sb << "\n";
        }
        return sb.str();
    }
};
