#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "main.h"
#include "Random.h"



bool init();
bool loadMedia();
void close();

int
main(int argc, char **argv)
{
  bool quit_flag = false;
  SDL_Event e;

  // pseudo-random number generator
  srand((unsigned)time(NULL));

  // if (!init())
  //   return 1;

  // if (!loadMedia())
  //   return 1;

  while(!quit_flag)
    {
      printf("haha\n");
    }

  // close();

  return 0;
}
