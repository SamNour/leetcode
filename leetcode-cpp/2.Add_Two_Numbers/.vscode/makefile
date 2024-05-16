# Variables
CXX = /usr/bin/g++
CXXFLAGS = -fdiagnostics-color=always -g -ggdb -pedantic-errors -Werror -std=c++23
SRC = $(wildcard *.cpp) # Get all .cpp files in the current directory

# Default target
all: $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o main

clean:
	rm -f myprogram
