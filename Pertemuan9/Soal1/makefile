#Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal1
SRC = Soal1.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) Soal1

#Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

#Phony targets
.PHONY: all clean
