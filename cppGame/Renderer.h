#pragma once
#include "Vector3.h"

struct RenderState
{
	int Height, Width;
	void* Memory;
};

typedef unsigned int Color;

class Renderer
{
public:
	Renderer(RenderState& renderState) : _state(renderState) {};

	void RenderBackground() const;
	void ClearScreen(Color color = 0) const;
	void Rect(int x, int y, int width, int height, Color color) const;
	void Rect(Vector3 position, Vector3 size, Color color) const;
	void Write(const char* string, int length, Vector3 position, Color color = 0xFFFFFF, int scale = 1);
private:
	RenderState& _state;
};

