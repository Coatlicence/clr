#pragma once

#include "Figure.h"

ref class PolygonFigure : public Figure
{
public:
	PolygonFigure(Position^ position, array<Position^>^ Vertices);
};