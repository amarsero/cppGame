#pragma once
#include "Input.h"
#include "Renderer.h"
#include "Vector3.h"

class Game
{
public:
	Game(Input& input, Renderer& renderer, Vector3 position) : _input(input), _renderer(renderer)
	{
	}
	
	void SimulateFrame();
private:
	Input& _input;
	Renderer& _renderer;
};
