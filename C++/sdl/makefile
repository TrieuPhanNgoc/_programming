# A simple Makefile for compiling small SDL projects

# set the compiler
CC := g++

# set the compiler flags
CFLAGS := sdl2-config --libs --cflags` -ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm

# source file
SOURCE := main.cpp

complie:
	$(CC) $(SOURCE) -o  main $(CFLAGS)

clean:
	rm -f main *.o

.PHONY: all clean