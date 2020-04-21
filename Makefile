programName = program

default: build run

run:
	./$(programName)

build:
	c++ -Wall main.cpp -o $(programName)
