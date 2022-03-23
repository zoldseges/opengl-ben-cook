CC := g++

PKGS := glfw3 glew opengl

FLAGS := -Wall -pedantic

LIBS := $(shell pkg-config --libs $(PKGS))
FLAGS := $(shell pkg-config --cflags $(PKGS)) $(FLAGS)

all: 003/main 005/main 007/main 010/main 011/main

003/main: 003/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

005/main: 005/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

007/main: 007/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

010/main: 010/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

011/main: 011/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)
