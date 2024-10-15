# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = nilaibesar
SRC = nilaibesar.cpp

# Default target: compile the program
all: nilaibesar

# Compile the nilaibesar.cpp
nilaibesar: nilaibesar.cpp
	g++ -Wall -o nilaibesar nilaibesar.cpp

# Run the program in test mode (using test.txt)
test: nilaibesar
	./nilaibesar test

# Clean up the compiled files
clean:
	rm -f nilaibesar

# Phony targets to avoid conflicts
.PHONY: all clean test
