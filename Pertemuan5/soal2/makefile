# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = reverseArray
SRC = reverseArray.cpp

# Default target: compile the program
all: reverseArray

# Compile the reverseArray.cpp
reverseArray: reverseArray.cpp
	g++ -Wall -o reverseArray reverseArray.cpp

# Run the program in test mode (using test.txt)
test: reverseArray
	./reverseArray test

# Clean up the compiled files
clean:
	rm -f reverseArray

# Phony targets to avoid conflicts
.PHONY: all clean test
