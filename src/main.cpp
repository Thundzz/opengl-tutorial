#include <iostream>
#include "Display.h"


// Example program:
// Using SDL2 to create an application window

#include "SDL2/SDL.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
	std::cout << "hello world" << std::endl;
	Display hello(800,600, "my window");
	return 0;
}

