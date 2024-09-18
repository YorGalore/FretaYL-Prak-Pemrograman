CXX = g++

CXXFLAGS = -Wall -std=c++11

TARGET = program

SRC = PaySlip

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
  $(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
  $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
  rm -f $(OBJ) $(TARGET)
