#pragma once

#include <iostream>
#include <string>

using namespace System;

using Drawing::Graphics;
using Drawing::SolidBrush;
using Drawing::Color;
using Drawing::Point;

ref class Figure
{
public:
	ref struct Position
	{
		Position();
		Position(int x, int y);

		int x, y;
	};
protected:
	Position^ position;

	bool visible = false;

	int VertexCount;

	array<Position^>^ Vertices = gcnew array<Position^>(VertexCount);

	//////////////////////////////////////////
	// Drawing
	Graphics^ context = nullptr;

	array<Point>^ ConvertPosition();

public:
	SolidBrush^ brush = gcnew SolidBrush(Color::OrangeRed);

	Position^ GetPosition();

	inline bool GetVisible();

	virtual void SetContext(Graphics^ context);

	virtual void Move(Position^ pos);

	virtual void Show();

	virtual void Hide();

	~Figure();
};

ref class FigureException : public Exception
{
	String^ recommendation = "";
	String^ _what = "";

public:
	FigureException(String^ what, String^ recommendation);

	String^ whatHappened();
};

Figure::Position^ pos(int, int);