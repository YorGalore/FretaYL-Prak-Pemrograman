# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = dataBarang
SRC = dataBarang.cpp

# Default target: compile the program
all: dataBarang

# Compile the dataBarang.cpp
fizzbuzz: fizzbuzz.cpp
	g++ -Wall -o dataBarang dataBarang.cpp

# Run the program in test mode (using test.txt)
test: dataBarang
	./dataBarang test

# Clean up the compiled files
clean:
	rm -f dataBarang

# Phony targets to avoid conflicts
.PHONY: all clean test
