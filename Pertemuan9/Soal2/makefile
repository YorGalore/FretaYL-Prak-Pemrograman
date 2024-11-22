#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = sortingNilai
SRC = sortingNilai.cpp

#Defaulttarget:compile the program
all: sortingNilai

#CompilethesortingNilai.cpp
sortingNilai: sortingNilai.cpp
	g++ -Wall -o sortingNilai sortingNilai.cpp

#Runtheprogramintestmode(using test.txt)
test: sortingNilai
	./sortingNilai test

#Cleanupthecompiledfiles
clean:
	rm -f sortingNilai

# Phony targets to avoid conflicts
.PHONY: all clean test
