# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = perkalian
SRC = perkalian.cpp

# Default target: compile the program
all: perkalian

# Compile the perkalian.cpp
perkalian: perkalian.cpp
	g++ -Wall -o perkalian perkalian.cpp

# Run the program in test mode (using test.txt)
test: perkalian
	./perkalian test

# Clean up the compiled files
clean:
	rm -f perkalian

# Phony targets to avoid conflicts
.PHONY: all clean test
