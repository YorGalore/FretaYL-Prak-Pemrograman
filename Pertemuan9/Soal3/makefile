#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = cariNisn
SRC = cariNisn.cpp

#Defaulttarget:compile the program
all: cariNisn

#CompilethesortingNilai.cpp
cariNisn: cariNisn.cpp
	g++ -Wall -o cariNisn cariNisn.cpp

#Runtheprogramintestmode(using test.txt)
test: cariNisn
	./cariNisn test

#Cleanupthecompiledfiles
clean:
	rm -f cariNisn

# Phony targets to avoid conflicts
.PHONY: all clean test
