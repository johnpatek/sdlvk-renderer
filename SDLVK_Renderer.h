/*
 * Copyright 2024 John R Patek Sr
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef _SDLVK_RENDERER_H_
#define _SDLVK_RENDERER_H_

#include <SDL.h>

struct SDLVK_Renderer;
typedef struct SDLVK_Renderer SDLVK_Renderer;

struct SDLVK_Textre;
typedef struct SDLVK_Texture SDLVK_Texture;

SDLVK_Renderer *SDLVK_CreateRenderer(SDL_Window *window, int index);

void SDLVK_DestroyRenderer(SDLVK_Renderer *renderer);

SDLVK_Renderer *SDLVK_GetRenderer(SDL_Window *window);

SDL_Window SDLVK_RendererGetWindow(SDLVK_Renderer *renderer);

#endif