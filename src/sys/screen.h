#ifndef SCREEN_H_
#define SCREEN_H_

#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 240

struct SDL_PixelFormat;
SDL_PixelFormat *get_render_surface_format();
void set_render_surface_format(SDL_PixelFormat *format);

#endif
