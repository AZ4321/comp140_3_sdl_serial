#pragma once
#include "SDL.h"
#include <serial\serial.h>


class Game
{
public:
	Game();
	~Game();

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();

	bool initSerialConnection();
	bool running() { return isRunning; };

private:
	SDL_Window* mainWindow;
	SDL_Renderer* mainRenderer;

	bool isRunning;

	SDL_Rect playerPosition;
};

