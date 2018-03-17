#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#include <SDL2/SDL.h>


class Display
{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();

private:
	Display(const Display& other){}
	Display& operator=(const Display& other){}
	void SwapBuffers();

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
};



#endif