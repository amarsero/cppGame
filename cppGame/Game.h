#pragma once
#include "Input.h"
#include "Renderer.h"
#include "Player.h"

struct GameInfo
{
	SquarePawn Position;
};
class Game
{
public:
	Game(Input& input, Renderer& renderer) : _input(input), _renderer(renderer) {}
	void SimulateFrame();
private:
	Input& _input;
	Renderer& _renderer;
	GameInfo _gameInfo;
};
