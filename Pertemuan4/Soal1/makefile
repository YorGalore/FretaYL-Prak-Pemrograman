# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = jmlbil
SRC = jmlbil.cpp

# Default target: compile the program
all: jmlbil

# Compile the jmlbil.cpp
jmlbil: jmlbil.cpp
	g++ -Wall -o jmlbil jmlbil.cpp

# Run the program in test mode (using test.txt)
test: jmlbil
	./jmlbil test

# Clean up the compiled files
clean:
	rm -f jmlbil

# Phony targets to avoid conflicts
.PHONY: all clean test
