CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = MainTST
SRC = MainTST.cpp TSTree.cpp Itm.cpp Node.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
