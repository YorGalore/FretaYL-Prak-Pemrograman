#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = gantiJoko
SRC = gantiJoko.cpp

#Defaulttarget:compile the program
all: gantiJoko

#CompilethesortingNilai.cpp
gantiJoko: gantiJoko.cpp
	g++ -Wall -o gantiJoko gantiJoko.cpp

#Runtheprogramintestmode(using test.txt)
test: gantiJoko
	./gantiJoko test

#Cleanupthecompiledfiles
clean:
	rm -f gantiJoko

# Phony targets to avoid conflicts
.PHONY: all clean test
