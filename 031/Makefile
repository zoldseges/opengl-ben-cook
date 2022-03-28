CC := g++

PKGS := glfw3 glew assimp

FLAGS := -Wall -pedantic

LIBS := $(shell pkg-config --libs $(PKGS))
FLAGS := $(shell pkg-config --cflags $(PKGS)) $(FLAGS)

SRC := $(wildcard *cpp)
OBJ := $(patsubst %.cpp,build/%.o,$(SRC))
PREQ_GEN := $(patsubst build/%.o,build/%.d,$(OBJ))

all: main $(PREQ_GEN)

main: $(OBJ) 
	@echo "build" $@
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

build/%.o: %.cpp
	@echo "build" $@
	$(CC) -o $@ -c $<

build/%.d: %.cpp
	@echo "build" $@
	$(CC) -MM -MT $(patsubst build/%.d,build/%.o,$@) $< > $@

include $(PREQ_GEN)
