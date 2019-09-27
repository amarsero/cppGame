#include "Game.h"

void Game::SimulateFrame()
{
	_renderer.RenderBackground();
	_renderer.ClearScreen();
	_renderer.Rect(100, 100, 250, 250, 0xFF0000);

	if (_input.IsDown(Buttons::Right))
	{
	}

	_renderer.Rect(400, 400, 100, 100, 0x0000FF);
}
