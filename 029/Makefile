CC := g++

PKGS := glfw3 glew opengl

FLAGS := -Wall -pedantic

LIBS := $(shell pkg-config --libs $(PKGS))
FLAGS := $(shell pkg-config --cflags $(PKGS)) $(FLAGS)

SRC = $(wildcard *cpp)
OBJ = $(SRC:.cpp=.o)

main: $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(LIBS) $(FLAGS)
