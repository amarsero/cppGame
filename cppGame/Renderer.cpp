#include "Renderer.h"
#include "Font.h"

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
	int maxHeight = height + y;
	int maxWidth = width + x;
	for (int i = y; i < maxHeight; i++)
	{
		if (i < 0 || i >= _state.Height) continue;
		int muli = i * _state.Width;
		for (int j = x; j < maxWidth; j++)
		{
			if (j < 0 || j >= _state.Width) continue;
			unsigned int* pixel = static_cast<unsigned int*>(_state.Memory) + muli + j;
			*pixel = color;
		}
	}
}

void Renderer::Rect(Vector3 position, Vector3 size, Color color) const
{
	Rect(static_cast<int>(position.X), static_cast<int>(position.Y), static_cast<int>(size.X), static_cast<int>(size.Y), color);
}

void Renderer::Write(const char* string, int length, Vector3 position, Color color, int scale)
{
	int offset = 0;
	int x = static_cast<int>(position.X);
	int y = static_cast<int>(position.Y);

	int maxSize = _state.Height * _state.Width;

	for (int i = 0; i < length; ++i) //char
	{
		char* arr = Font::GetChar(string[i]);
		for (int j = 0; j < 8; ++j) //char byte
		{
			for (int k = 0; k < 8; ++k) //char bit
			{
				if (((arr[7 - j] >> k) & 1) == 1)
				{
					for (int sx = 0; sx < scale; ++sx) //scaleX
					{
						int xOffset = x + k * scale + sx;
						if (xOffset < 0 || xOffset >= _state.Width)
						{
							continue;
						}
						for (int sy = 0; sy < scale; ++sy) //scaleY
						{
							int yOffset = j * scale + y + sy;
							if (yOffset < 0 || yOffset >= _state.Height)
							{
								continue;
							}
							unsigned int* pixel = static_cast<unsigned int*>(_state.Memory) + yOffset * _state.Width + xOffset;
							*pixel = color;
						}
					}
				}
			}
		}
		x += 8 * scale;
	}
}

