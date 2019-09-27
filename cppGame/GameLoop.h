#pragma once
#include "Input.h"
#include "Renderer.h"
#include "Player.h"

struct GameInfo
{
	Player Position;
};
class Game
{
public:
	Game(Input& input, Renderer& renderer) : _input(input), _renderer(renderer) {}
	void SimulateGame();
private:
	Input& _input;
	Renderer& _renderer;
	GameInfo _gameInfo;
};
