#pragma once

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
private:
	RenderState& _state;
};

