# Root Makefile to build all C++ subfolder projects
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Subfolder targets
HUFFMAN = 250324Huffmancode_c++/HuffmanCode
DSWEEK2 = DSweek2_c++/DSweek2
GRAPH = 250315_c++/GraphTest
BASICGRAPH = basicGraph_c++/GraphTest
HUFFMANTREE = huffman_c++/MainHuffman
TST = TST_c++/MainTST

all: $(HUFFMAN) $(DSWEEK2) $(GRAPH) $(BASICGRAPH) $(HUFFMANTREE) $(TST)

250324Huffmancode_c++/HuffmanCode: 250324Huffmancode_c++/HuffmanCode.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

DSweek2_c++/DSweek2: DSweek2_c++/Main.cpp DSweek2_c++/Itm.cpp DSweek2_c++/Student.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

250315_c++/GraphTest: 250315_c++/Main.cpp 250315_c++/Graph.cpp 250315_c++/BFSPathFinder.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

basicGraph_c++/GraphTest: basicGraph_c++/CompleteGraphTest.cpp basicGraph_c++/AdjList.cpp basicGraph_c++/AdjMatrix.cpp basicGraph_c++/IncMatrix.cpp basicGraph_c++/Edge.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

huffman_c++/MainHuffman: huffman_c++/MainHuffman.cpp huffman_c++/HuffmanCodeTree.cpp huffman_c++/Itm.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

TST_c++/MainTST: TST_c++/MainTST.cpp TST_c++/TSTree.cpp TST_c++/Itm.cpp TST_c++/Node.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(HUFFMAN) $(DSWEEK2) $(GRAPH) $(BASICGRAPH) $(HUFFMANTREE) $(TST)
	$(RM) */*.o */*.out
