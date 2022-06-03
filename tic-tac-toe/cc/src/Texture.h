#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL2/SDL.h>
#include <string>

class Texture
{
  SDL_Texture *texture;
  int width;
  int height;

 public:
  Texture();
  ~Texture();
  void free();
  bool loadFromFile(std::string, bool = false);
  bool loadFromRenderedText(std::string, SDL_Color);
  void setColor(uint8_t, uint8_t, uint8_t);
  void renderer(int, int,
		SDL_Rect* = NULL,
		double = 0.0,
		SDL_Point* = NULL,
		SDL_RendererFlip flip = SDL_FLIP_NONE);
  int getWidth();
  int getHeight();
}

#endif
