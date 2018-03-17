#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "SDL2/SDL.h"
#include "shader.h"

int main(int argc, char *argv[])
{
	Display display(800,600, "my window");
	Shader shader("../res/basicShader");

	while(!display.isClosed()){
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);
		shader.Bind();

		display.Update();
	}


	return 0;
}

