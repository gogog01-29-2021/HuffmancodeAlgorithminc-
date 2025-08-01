CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = GraphTest
SRC = Main.cpp Graph.cpp BFSPathFinder.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
