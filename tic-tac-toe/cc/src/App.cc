#include <cstdio>
#include "App.h"

SDL_Window*   App::gameWindow   = NULL;
SDL_Renderer* App::gameRenderer = NULL;

App::~App()
{
    if (gameRenderer != NULL)
	{
	    SDL_DestroyRenderer(gameRenderer);
	    gameRenderer = NULL;
	}

    if (gameWindow != NULL)
	{
	    SDL_DestroyWindow(gameWindow);
	    gameWindow = NULL;
	}
}

bool
App::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
	    printf("Cannot start SDL: %s\n", SDL_GetError());
	    return false;
	}

    gameWindow = SDL_CreateWindow(
	"Tic Tac Toe",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
	SCREEN_WIDTH, SCREEN_HEIGHT,
	SDL_WINDOW_SHOWN
	);
    if (gameWindow == NULL)
	{
	    printf("Cannot create a window: %s\n", SDL_GetError());
	    return false;
	}

    gameRenderer = SDL_CreateRenderer(
	gameWindow,
	-1,
	SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
	);
    if (gameRenderer == NULL)
	{
	    printf("Cannot create a renderer: %s\n", SDL_GetError());
	    return false;
	}

    return true;
}

void
App::run()
{
    bool quit = false;

    while (!quit)
	{
	    while (SDL_PollEvent(&event))
		{
		    // if (event.type == SDL_QUIT)
		    // 	quit = true;
		}

	    // game.update(&event);
	    // game.render();
	    // game.checkWin();
	}
}

SDL_Window* App::getWindow()
{
    return gameWindow;
}

SDL_Renderer* App::getRenderer()
{
    return gameRenderer;
}
  
