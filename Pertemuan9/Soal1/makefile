#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = sortingNisn
SRC = sortingNisn.cpp

#Default target: compile the program
all: sortingNisn

#Compile the sortingNisn.cpp
sortingNisn: sortingNisn.cpp
	g++ -Wall -o sortingNisn sortingNisn.cpp

#Run the program in test mode (using test.txt)
test: sortingNisn
	./sortingNisn test

# Clean up the compiled files
clean:
	rm -f sortingNisn

# Phony targets to avoid conflicts
.PHONY: all clean test
