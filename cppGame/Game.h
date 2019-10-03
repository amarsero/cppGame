#pragma once
#include "Input.h"
#include "Renderer.h"
#include "Player.h"

struct GameInfo
{
	Player Player;
};
class Game
{
public:
	Game(Input& input, Renderer& renderer) : _input(input), _renderer(renderer)
	{
		_gameInfo.Player.Size = Vector3(100, 100);
	}
	void SimulateFrame();
private:
	Input& _input;
	Renderer& _renderer;
	GameInfo _gameInfo;
};
