SRC_DIR := src
LDFLAGS := -Llib/ -lmingw32 -static-libgcc -static-libstdc++ -lSDL2main -lSDL2 -lglew32 -lopengl32 

all: 
	g++ -Iinclude -o bin/main.exe $(SRC_DIR)/* $(LDFLAGS)

clean:
	rm -rf obj/*
	rm -rf bin/*.exe