# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = quadraticequations
SRC = quadraticequations.cpp

# Default target: compile the program
all: quadraticequations

# Compile the quadraticequations.cpp
nilaideterminan: quadraticequations.cpp
	g++ -Wall -o quadraticequations quadraticequations.cpp

# Run the program in test mode (using test.txt)
test: quadraticequations
	./quadraticequations test

# Clean up the compiled files
clean:
	rm -f quadraticequations

# Phony targets to avoid conflicts
.PHONY: all clean test
