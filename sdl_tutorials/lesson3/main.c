#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

const int SCREEN_WIDTH  = 640;
const int SCREEN_HEIGHT = 480;
const int SECOND        = 1000;

SDL_Window*  gameWindow        = NULL;
SDL_Surface* gameScreenSurface = NULL;
SDL_Surface* gamePicture           = NULL;

bool init();
bool loadMedia();
void close();

int
main(int argc, char* args[])
{
  if (!init())
    return 1;

  if (!loadMedia())
    return 1;

  SDL_BlitSurface(gamePicture, NULL, gameScreenSurface, NULL);
  SDL_UpdateWindowSurface(gameWindow);
  SDL_Delay(10 * SECOND);

  close();

  return 0;
}

bool
init(void)
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
      printf("Cannot initialize SDL: %s\n", SDL_GetError());
      return false;
    }

  gameWindow = SDL_CreateWindow("SDL Tutorial 02",
				SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED,
				SCREEN_WIDTH, SCREEN_HEIGHT,
				SDL_WINDOW_SHOWN);
  if (gameWindow == NULL)
    {
      printf("Cannot create a window: %s\n", SDL_GetError());
      return false;
    }

  gameScreenSurface = SDL_GetWindowSurface(gameWindow);

  return true;
}

bool loadMedia(void)
{
  gamePicture = SDL_LoadBMP("./pic.bmp");
  if (gamePicture == NULL)
    {
      printf("Unable to load the image %s: %s",
	     "./pic.bmp",
	     SDL_GetError());
      return false;
    }

  return true;
}

void close()
{
  SDL_FreeSurface(gamePicture);
  gamePicture = NULL;

  SDL_DestroyWindow(gameWindow);
  gameWindow = NULL;

  SDL_Quit();
}
