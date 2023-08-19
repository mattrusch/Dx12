// D3d12Context.h

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdint.h>

void Init(HWND hwnd);
void InitAssets();
void Update(float elapsedSeconds);
void Render();
void Destroy();
void InitTexture(char* dst, uint32_t width, uint32_t height, uint32_t bpp);
