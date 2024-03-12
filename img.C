#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char* args[]) {
    // Inicializar o SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erro ao inicializar o SDL: %s\n", SDL_GetError());
        return 1;
    }

    // Criar uma janela temporária para a superfície da imagem
    SDL_Window* window = SDL_CreateWindow("Temp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Erro ao criar janela: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Criar uma superfície preta de 640x480 pixels
    SDL_Surface* surface = SDL_CreateRGBSurface(0, 640, 480, 32, 0, 0, 0, 0);
    if (surface == NULL) {
        printf("Erro ao criar superfície: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Preencher a superfície com a cor preta
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0, 0, 0));

    // Salvar a superfície como imagem.bmp
    if (SDL_SaveBMP(surface, "imagem.bmp") != 0) {
        printf("Erro ao salvar imagem: %s\n", SDL_GetError());
        SDL_FreeSurface(surface);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Liberar recursos e finalizar o SDL
    SDL_FreeSurface(surface);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    printf("Imagem criada com sucesso como imagem.bmp\n");
    return 0;
}
#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char* args[]) {
    // Inicializar o SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erro ao inicializar o SDL: %s\n", SDL_GetError());
        return 1;
    }

    // Criar uma janela temporária para a superfície da imagem
    SDL_Window* window = SDL_CreateWindow("Temp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Erro ao criar janela: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Criar uma superfície preta de 640x480 pixels
    SDL_Surface* surface = SDL_CreateRGBSurface(0, 640, 480, 32, 0, 0, 0, 0);
    if (surface == NULL) {
        printf("Erro ao criar superfície: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Preencher a superfície com a cor preta
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0, 0, 0));

    // Salvar a superfície como imagem.bmp
    if (SDL_SaveBMP(surface, "imagem.bmp") != 0) {
        printf("Erro ao salvar imagem: %s\n", SDL_GetError());
        SDL_FreeSurface(surface);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Liberar recursos e finalizar o SDL
    SDL_FreeSurface(surface);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    printf("Imagem criada com sucesso como imagem.bmp\n");
    return 0;
}
