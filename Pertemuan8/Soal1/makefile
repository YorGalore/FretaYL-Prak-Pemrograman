
#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = fibonacci
SRC = fibonacci.cpp

#Default target: compile the program
all: fibonacci

#Compile 
fizzbuzz: fibonacci.cpp
	g++ -Wall -o fibonacci fibonacci.cpp

#Run
test: fibonacci
	./fibonacci test

#Clean
clean:
	rm -f fibonacci

#Phony
.PHONY: all clean test
