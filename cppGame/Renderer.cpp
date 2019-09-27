#include "Renderer.h"

void Renderer::RenderBackground() const
{
}

void Renderer::ClearScreen(Color color) const
{
	int length = _state.Height * _state.Width;
	unsigned int* pixel = static_cast<unsigned int*>(_state.Memory);
	while (length--)
		* pixel++ = color;
}

void Renderer::Rect(int x, int y, int width, int height, Color color) const
{
	unsigned int* pixel;
	int maxHeight = height + y;
	int maxWidth = width + x;
	for (int i = y; i < maxHeight; i++)
	{
		if (i < 0 || i >= _state.Height) continue;
		int muli = i * _state.Width;
		for (int j = x; j < maxWidth; j++)
		{
			if (j < 0 || j >= _state.Width) continue;
			pixel = static_cast<unsigned int*>(_state.Memory) + muli + j;
			*pixel = color;
		}
	}
}
