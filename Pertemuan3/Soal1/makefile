
# Variables
CXX = g++
CXXFLAGS = -Wall  -g
TARGET = quadraticequations
SRCS = quadraticequations.cpp

#Define the object files
OBJS = $(SRCS:.cpp=.o)

# Default target: compile the program
all: $(TARGET)

# Compile the quadraticequations.cpp
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

#compile source files into object files
%.o: %.cpp
  $(CXX) $(CXXFLAGS) -c $< -o $@


# Clean up the compiled files
clean:
  del $(TARGET_DEL) $(OBJS)

# Phony targets to avoid conflicts
.PHONY: all clean
