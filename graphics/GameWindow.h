#ifndef _GAMEWINDOW_H_
#define _GAMEWINDOW_H_

#include "graphics.h"

class GameWindow
{

private:
	char* _title;
	int _width;
    int _height;
    int _handle;
	int init();

	static GameWindow singleton;

public:
	GameWindow(char* title, int width, int height) 
		: _title(title), _width(width), _height(height) { }

	void resize(int width, int height);
	void render();

	static GameWindow getInstance() { return singleton; }

};

void _resize(int width, int height)
{
	GameWindow::getInstance().resize(width, height);
}

void _render()
{
	GameWindow::getInstance().render();
}

#endif