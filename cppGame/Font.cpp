﻿#include "Font.h"
#include <cstdlib>

char** Font::_fonts;

char* Font::GetChar(char c)
{
	if (_fonts == nullptr)
		Init();
	return  _fonts[c];
}

void Font::Init()
{
	_fonts = new char*[128];
	int i = -1;
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0000 (nul)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0001
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0002
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0003
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0004
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0005
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0006
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0007
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0008
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0009
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000A
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000B
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000C
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000D
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000E
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+000F
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0010
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0011
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0012
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0013
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0014
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0015
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0016
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0017
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0018
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0019
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001A
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001B
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001C
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001D
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001E
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+001F
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0020(space)
	_fonts[i++] = new char[8]{ 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00 }; // U+0021 (!)
	_fonts[i++] = new char[8]{ 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0022 (")
	_fonts[i++] = new char[8]{ 0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00 }; // U+0023 (#)
	_fonts[i++] = new char[8]{ 0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00 }; // U+0024 ($)
	_fonts[i++] = new char[8]{ 0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00 }; // U+0025 (%)
	_fonts[i++] = new char[8]{ 0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00 }; // U+0026 (&)
	_fonts[i++] = new char[8]{ 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0027 (')
	_fonts[i++] = new char[8]{ 0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00 }; // U+0028 (()
	_fonts[i++] = new char[8]{ 0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00 }; // U+0029 ())
	_fonts[i++] = new char[8]{ 0x00, 0x66, 0x3C, static_cast<char>(0xFF), 0x3C, 0x66, 0x00, 0x00 }; // U+002A (*)
	_fonts[i++] = new char[8]{ 0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00 }; // U+002B (+)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06 }; // U+002C (,)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00 }; // U+002D (-)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00 }; // U+002E (.)
	_fonts[i++] = new char[8]{ 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 }; // U+002F (/)
	_fonts[i++] = new char[8]{ 0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00 }; // U+0030 (0)
	_fonts[i++] = new char[8]{ 0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00 }; // U+0031 (1)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00 }; // U+0032 (2)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00 }; // U+0033 (3)
	_fonts[i++] = new char[8]{ 0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00 }; // U+0034 (4)
	_fonts[i++] = new char[8]{ 0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00 }; // U+0035 (5)
	_fonts[i++] = new char[8]{ 0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00 }; // U+0036 (6)
	_fonts[i++] = new char[8]{ 0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00 }; // U+0037 (7)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00 }; // U+0038 (8)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00 }; // U+0039 (9)
	_fonts[i++] = new char[8]{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00 }; // U+003A (:)
	_fonts[i++] = new char[8]{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06 }; // U+003B (;)
	_fonts[i++] = new char[8]{ 0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00 }; // U+003C (<)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00 }; // U+003D (=)
	_fonts[i++] = new char[8]{ 0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00 }; // U+003E (>)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00 }; // U+003F (?)
	_fonts[i++] = new char[8]{ 0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00 }; // U+0040 (@)
	_fonts[i++] = new char[8]{ 0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00 }; // U+0041 (A)
	_fonts[i++] = new char[8]{ 0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00 }; // U+0042 (B)
	_fonts[i++] = new char[8]{ 0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00 }; // U+0043 (C)
	_fonts[i++] = new char[8]{ 0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00 }; // U+0044 (D)
	_fonts[i++] = new char[8]{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00 }; // U+0045 (E)
	_fonts[i++] = new char[8]{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00 }; // U+0046 (F)
	_fonts[i++] = new char[8]{ 0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00 }; // U+0047 (G)
	_fonts[i++] = new char[8]{ 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00 }; // U+0048 (H)
	_fonts[i++] = new char[8]{ 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 }; // U+0049 (I)
	_fonts[i++] = new char[8]{ 0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00 }; // U+004A (J)
	_fonts[i++] = new char[8]{ 0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00 }; // U+004B (K)
	_fonts[i++] = new char[8]{ 0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00 }; // U+004C (L)
	_fonts[i++] = new char[8]{ 0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00 }; // U+004D (M)
	_fonts[i++] = new char[8]{ 0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00 }; // U+004E (N)
	_fonts[i++] = new char[8]{ 0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00 }; // U+004F (O)
	_fonts[i++] = new char[8]{ 0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00 }; // U+0050 (P)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00 }; // U+0051 (Q)
	_fonts[i++] = new char[8]{ 0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00 }; // U+0052 (R)
	_fonts[i++] = new char[8]{ 0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00 }; // U+0053 (S)
	_fonts[i++] = new char[8]{ 0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 }; // U+0054 (T)
	_fonts[i++] = new char[8]{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00 }; // U+0055 (U)
	_fonts[i++] = new char[8]{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00 }; // U+0056 (V)
	_fonts[i++] = new char[8]{ 0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00 }; // U+0057 (W)
	_fonts[i++] = new char[8]{ 0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00 }; // U+0058 (X)
	_fonts[i++] = new char[8]{ 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00 }; // U+0059 (Y)
	_fonts[i++] = new char[8]{ 0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00 }; // U+005A (Z)
	_fonts[i++] = new char[8]{ 0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00 }; // U+005B ([)
	_fonts[i++] = new char[8]{ 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00 }; // U+005C (\)
	_fonts[i++] = new char[8]{ 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00 }; // U+005D (])
	_fonts[i++] = new char[8]{ 0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00 }; // U+005E (^)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, static_cast<char>(0xFF)}; // U+005F (_)
	_fonts[i++] = new char[8]{ 0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+0060 (`)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00 }; // U+0061 (a)
	_fonts[i++] = new char[8]{ 0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00 }; // U+0062 (b)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00 }; // U+0063 (c)
	_fonts[i++] = new char[8]{ 0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00 }; // U+0064 (d)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00 }; // U+0065 (e)
	_fonts[i++] = new char[8]{ 0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00 }; // U+0066 (f)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F }; // U+0067 (g)
	_fonts[i++] = new char[8]{ 0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00 }; // U+0068 (h)
	_fonts[i++] = new char[8]{ 0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 }; // U+0069 (i)
	_fonts[i++] = new char[8]{ 0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E }; // U+006A (j)
	_fonts[i++] = new char[8]{ 0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00 }; // U+006B (k)
	_fonts[i++] = new char[8]{ 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00 }; // U+006C (l)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00 }; // U+006D (m)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00 }; // U+006E (n)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00 }; // U+006F (o)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F }; // U+0070 (p)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78 }; // U+0071 (q)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00 }; // U+0072 (r)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00 }; // U+0073 (s)
	_fonts[i++] = new char[8]{ 0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00 }; // U+0074 (t)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00 }; // U+0075 (u)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00 }; // U+0076 (v)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00 }; // U+0077 (w)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00 }; // U+0078 (x)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F }; // U+0079 (y)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00 }; // U+007A (z)
	_fonts[i++] = new char[8]{ 0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00 }; // U+007B ({)
	_fonts[i++] = new char[8]{ 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 }; // U+007C (|)
	_fonts[i++] = new char[8]{ 0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00 }; // U+007D (})
	_fonts[i++] = new char[8]{ 0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+007E (~)
	_fonts[i++] = new char[8]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // U+007F
}