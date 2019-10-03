#pragma once

class Font
{
	static char** _fonts;
public:
	static char* GetChar(char c);
	static void Init();
};
