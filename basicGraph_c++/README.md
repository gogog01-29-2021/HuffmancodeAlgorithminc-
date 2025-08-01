# basicGraph C++

## Description
C++ implementations of various graph representations:
- `AdjList.cpp`: Adjacency list
- `AdjMatrix.cpp`: Adjacency matrix
- `IncMatrix.cpp`: Incidence matrix
- `Edge.cpp`, `Graph.h`: Supporting classes
- `CompleteGraphTest.cpp`, `GraphTest.cpp`: Example/test programs

## How to Compile and Run

### Compile all together (recommended):
```
g++ -std=c++11 -o GraphTest CompleteGraphTest.cpp AdjList.cpp AdjMatrix.cpp IncMatrix.cpp Edge.cpp
./GraphTest
```

### Using Makefile
```
make
./GraphTest
```
