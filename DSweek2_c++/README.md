# DSweek2 C++

## Description
C++ implementations of Student, Node, and related algorithms. Includes:
- `Student.cpp`: Student and Node class demo.
- `Itm.cpp`: Student comparator, unique name counter, and bracket balance checker.
- `Main.cpp`: Main program demonstrating all features.

## How to Compile and Run

### Compile all together (recommended):
```
g++ -std=c++11 -o DSweek2 Main.cpp Itm.cpp Student.cpp
./DSweek2
```

### Or compile and run each file separately:
```
g++ -std=c++11 -o Student Student.cpp
./Student

g++ -std=c++11 -o Itm Itm.cpp
./Itm
```

### Using Makefile
```
make
./DSweek2
```
