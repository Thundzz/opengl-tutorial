OBJ_DIR := obj
SRC_DIR := src
INCLUDE_DIR := include

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
CXXFLAGS += -MMD
LDFLAGS := -Llib/ -lmingw32 -static-libgcc -static-libstdc++ -lSDL2main -lSDL2 -lglew32 -lopengl32 

all: 
	g++ -Iinclude -o bin/main.exe $(SRC_DIR)/* $(LDFLAGS)
main.exe: $(OBJ_FILES) 
	g++ -Iinclude -o bin/main.exe $^ $(LDFLAGS)

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	g++ $(CXXFLAGS) -Iinclude -c -o $@ $< 


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDE_DIR)/%.h
	g++ $(CXXFLAGS) -Iinclude -c -o $@ $< 
