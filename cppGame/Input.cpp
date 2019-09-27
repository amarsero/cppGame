#include "Input.h"

Input::Input(sigslot::signal<float>* newFrameEvent)
{
	_connection = newFrameEvent->connect(&Input::NewFrame, this);
}

void Input::SetButtonState(Buttons::Button button, bool isDown)
{
	_buttons[button].Changed = true;
	_buttons[button].IsDown += isDown * 2 - 1;
}

Input::~Input()
{
	_connection.disconnect();
}

bool Input::IsDown(Buttons::Button button) const
{
	return _buttons[button].IsDown;
}

bool Input::ButtonDown(Buttons::Button button) const
{
	return _buttons[button].IsDown && _buttons[button].Changed;
}

bool Input::ButtonUp(Buttons::Button button) const
{
	return !_buttons[button].IsDown && _buttons[button].Changed;
}

void Input::NewFrame(float deltaTime)
{
	ClearInputs();
}

void Input::ClearInputs()
{
	for (int i = 0; i < Buttons::Count; ++i)
	{
		_buttons[i].Changed = false;
	}
}