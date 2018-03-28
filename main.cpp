// A simple program that computes the square root of a number
#include "SDL.h"

int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL Failed to initialize");
        SDL_Quit();
        return -1;
    }
    SDL_Window *sdlWindow;
    SDL_Renderer *sdlRenderer;

    // SDL_Window *window = SDL_CreateWindow(
    //     "SDL2Test",
    //     SDL_WINDOWPOS_UNDEFINED,
    //     SDL_WINDOWPOS_UNDEFINED,
    //     0,
    //     0,
    //     SDL_WINDOW_FULLSCREEN_DESKTOP);

    // SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    SDL_CreateWindowAndRenderer(0, 0, SDL_WINDOW_FULLSCREEN_DESKTOP, &sdlWindow, &sdlRenderer);

    SDL_SetRenderDrawColor(sdlRenderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(sdlRenderer);
    SDL_RenderPresent(sdlRenderer);

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear"); // make the scaled rendering look smoother.
    SDL_RenderSetLogicalSize(sdlRenderer, 800, 600);

    sdlTexture = SDL_CreateTexture(sdlRenderer,
                               SDL_PIXELFORMAT_ARGB8888,
                               SDL_TEXTUREACCESS_STREAMING,
                               800, 600);

    // SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    // SDL_RenderClear(renderer);
    // SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(sdlWindow);
    SDL_Quit();

    return 0;
}