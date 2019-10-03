#include "Game.h"

void Game::SimulateFrame()
{
	_renderer.RenderBackground();
	_renderer.ClearScreen();
	_renderer.Rect(100, 100, 250, 250, 0xFF0000);

	if (_input.IsDown(Buttons::Right))
	{
		_gameInfo.Player.Position += Vector3(1, 0, 0);
	}
	if (_input.IsDown(Buttons::Left))
	{
		_gameInfo.Player.Position += Vector3(-1, 0, 0);
	}
	if (_input.IsDown(Buttons::Up))
	{
		_gameInfo.Player.Position += Vector3(0, 1, 0);
	}
	if (_input.IsDown(Buttons::Down))
	{
		_gameInfo.Player.Position += Vector3(0, -1, 0);
	}
	_renderer.Rect(_gameInfo.Player.Position, _gameInfo.Player.Size, 0x0000FF);

	_renderer.Write("hola", 4, Vector3(-10, 000), 0xFF00FF, 4);
	_renderer.Write("hola", 4, Vector3(2000, 100), 0xFF00FF, 2);
	_renderer.Write("hola", 4, Vector3(600, -20), 0xFF00FF, 3);
	_renderer.Write("hola", 4, Vector3(600, 2000), 0xFF00FF, 4);
}
