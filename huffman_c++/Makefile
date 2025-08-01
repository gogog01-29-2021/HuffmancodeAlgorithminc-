CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = MainHuffman
SRC = MainHuffman.cpp HuffmanCodeTree.cpp Itm.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
