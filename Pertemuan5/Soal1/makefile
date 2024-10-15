# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = fizzbuzz
SRC = fizzbuzz.cpp

# Default target: compile the program
all: fizzbuzz

# Compile the fizzbuzz.cpp
jmlbil: fizzbuzz.cpp
	g++ -Wall -o fizzbuzz fizzbuzz.cpp

# Run the program in test mode (using test.txt)
test: fizzbuzz
	./fizzbuzz test

# Clean up the compiled files
clean:
	rm -f fizzbuzz

# Phony targets to avoid conflicts
.PHONY: all clean test
