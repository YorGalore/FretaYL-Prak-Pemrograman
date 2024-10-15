# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = PaySlip
SRC = PaySlip.cpp

# Default target: compile the program
all: PaySlip

# Compile the PlaySlip.cpp
PaySlip: PlaySlip.cpp
	g++ -Wall -o PaySlip PlaySlip.cpp

# Run the program in test mode (using test.txt)
test: PlaySlip
	./PlaySlip test

# Clean up the compiled files
clean:
	rm -f PlaySlip

# Phony targets to avoid conflicts
.PHONY: all clean test
