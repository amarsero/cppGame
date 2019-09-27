#pragma once
#include "Libraries/sigslot.h"

struct ButtonState
{
	int IsDown;
	bool Changed;
};
namespace Buttons
{
	enum Button
	{
		Up,
		Down,
		Left,
		Right,


		Count
	};
}

class Input
{
	ButtonState _buttons[Buttons::Count] = {};
	sigslot::connection _connection;

public:
	Input(sigslot::signal<float>* newFrameEvent);
	void SetButtonState(Buttons::Button button, bool isDown);
	~Input();

	bool IsDown(Buttons::Button button) const;
	bool ButtonDown(Buttons::Button button) const;
	bool ButtonUp(Buttons::Button button) const;

private:
	void NewFrame(float deltaTime);
	void ClearInputs();
};
