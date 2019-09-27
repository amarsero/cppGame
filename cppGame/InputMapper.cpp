#include "InputMapper.h"

std::map<UINT32, Buttons::Button> InputMapper::_map;
Buttons::Button InputMapper::MapWindows(UINT32 key)
{
	if (_map.empty()) InitWindows();
	return  _map[key];
}

void InputMapper::InitWindows()
{
	_map[VK_UP] = Buttons::Up;
	_map[VK_DOWN] = Buttons::Down;
	_map[VK_LEFT] = Buttons::Left;
	_map[VK_RIGHT] = Buttons::Right;
	_map['W'] = Buttons::Up;
	_map['S'] = Buttons::Down;
	_map['A'] = Buttons::Left;
	_map['D'] = Buttons::Right;
}
