#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "SDL2/SDL.h"
#include "shader.h"
#include "mesh.h"
#include "glm/glm.hpp"

int main(int argc, char *argv[])
{
	Display display(800,600, "my window");
	Shader shader("../res/basicShader");
	Vertex vertices[] = {
		Vertex(glm::vec3(-0.5, -0.5, 0)),
		Vertex(glm::vec3(0, 0.5, 0)),
		Vertex(glm::vec3(0.5, -0.5, 0))
	};

	Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));


	while(!display.isClosed()){
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);
		shader.Bind();
		mesh.Draw();
		display.Update();
	}


	return 0;
}

