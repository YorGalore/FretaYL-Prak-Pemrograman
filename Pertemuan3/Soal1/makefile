# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = nilaideterminan
SRC = nilaideterminan.cpp

# Default target: compile the program
all: nilaideterminan

# Compile the nilaideterminan.cpp
nilaideterminan: nilaideterminan.cpp
	g++ -Wall -o nilaideterminan nilaideterminan.cpp

# Run the program in test mode (using test.txt)
test: nilaideterminan
	./nilaideterminan test

# Clean up the compiled files
clean:
	rm -f nilaideterminan

# Phony targets to avoid conflicts
.PHONY: all clean test
