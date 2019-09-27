#pragma once
#include <windows.h>
#include "Input.h"
#include <map>

class InputMapper
{
private:
	static std::map<UINT32, Buttons::Button> _map;
public:
	static Buttons::Button MapWindows(UINT32 key);
	static void InitWindows();
};