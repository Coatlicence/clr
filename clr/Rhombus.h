#pragma once
#include "Figure.h"
ref class Rhombus : public Figure
{
	int width, height;

public:
	Rhombus(Position^ position, int width, int height);

	int GetWidth();

	int GetHeight();

	void SetSize(int, int);
};
