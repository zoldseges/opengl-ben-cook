CC := g++

PKGS := glfw3 glew opengl

FLAGS := -Wall -pedantic

LIBS := $(shell pkg-config --libs $(PKGS))
FLAGS := $(shell pkg-config --cflags $(PKGS)) $(FLAGS)

all: 003/main 005/main 007/main 010/main 011/main 012/main 014/main 017/main 019/main 021/main 023/main 025/main

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

012/main: 012/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

014/main: 014/main.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

017/main: 017/main.cpp 017/Mesh.cpp 017/Shader.cpp 017/Window.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

019/main: 019/main.cpp 019/Mesh.cpp 019/Shader.cpp 019/Window.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

021/main: 021/main.cpp 021/Mesh.cpp 021/Shader.cpp 021/Window.cpp 021/Camera.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

023/main: 023/main.cpp 023/Mesh.cpp 023/Shader.cpp 023/Window.cpp 023/Camera.cpp 023/Texture.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)

025/main: 025/main.cpp 025/Mesh.cpp 025/Shader.cpp 025/Window.cpp 025/Camera.cpp 025/Texture.cpp 025/Light.cpp
	$(CC) -o $@ $^ $(LIBS) $(FLAGS)
