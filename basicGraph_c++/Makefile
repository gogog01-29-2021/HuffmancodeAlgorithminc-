CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = GraphTest
SRC = CompleteGraphTest.cpp AdjList.cpp AdjMatrix.cpp IncMatrix.cpp Edge.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
