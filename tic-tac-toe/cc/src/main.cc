#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <SDL2/SDL.h>
#include "Random.h"

bool init();
bool loadMedia();

int
main(int argc, char **argv)
{
  bool quit_flag = false;
  SDL_Event e;

  // pseudo-random number generator
  srand((unsigned)time(NULL));

  return 0;
}
