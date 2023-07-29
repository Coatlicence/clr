#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(Position^ pos, int width, int height, array<Position^>^ Vertices)
{
	position = gcnew Position(pos->x, pos->y);

	inner = gcnew Rhombus(pos, width, height);
	
	inner->brush->Color = Color::Gold;

	outer = gcnew PolygonFigure(pos, Vertices);
}

void ComplexFigure::Show()
{
	if (outer) outer->Show();

	if (inner) inner->Show();
}

void ComplexFigure::Hide()
{
	if (outer) outer->Hide();

	if (inner) inner->Hide();
}

void ComplexFigure::Move(Position^ position)
{
	outer->Move(position);

	inner->Move(position);
}

void ComplexFigure::SetContext(Graphics^ context)
{
	inner->SetContext(context);

	outer->SetContext(context);
}

ComplexFigure::~ComplexFigure()
{
	Hide();
}

/////////////////////////////////////////
// Тестирование

bool testCompCreate1()
{
	try
	{
		array<Figure::Position^>^ points = gcnew array<Figure::Position^>(3);
		points[0] = pos(10, 15);
		points[1] = pos(20, 15);
		points[2] = pos(15, 20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(100, 100), 10, 10, points);
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return false;
	}

	return true;
}

bool testCompCreate2()
{
	try
	{
		array<Figure::Position^>^ points = gcnew array<Figure::Position^>(3);
		points[0] = pos(10, 15);
		points[1] = pos(20, 15);
		points[2] = pos(15, 20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(0, 0), 10, 10, points);
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return true;
	}

	return false;
}

bool testCompCreate3()
{
	try
	{
		array<Figure::Position^>^ points = gcnew array<Figure::Position^>(3);
		points[0] = pos(-10, -15);
		points[1] = pos(-20, -15);
		points[2] = pos(-15, -20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(0, 0), 10, 10, points);
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return true;
	}

	return false;
}

bool testCompCreate4()
{
	try
	{
		array<Figure::Position^>^ v = gcnew array<Figure::Position^>(3);
		v[0] = pos(10, 15);
		v[1] = pos(20, 15);
		v[2] = pos(15, 20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(10000, 10000), 10, 10, v);
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return false;
	}

	return true;
}

bool testCompMove1()
{
	try
	{
		array<Figure::Position^>^ points = gcnew array<Figure::Position^>(3);
		points[0] = pos(10, 15);
		points[1] = pos(20, 15);
		points[2] = pos(15, 20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(100, 100), 10, 10, points);

		r->Move(pos(10, 10));
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return false;
	}

	return true;
}

bool testCompMove2()
{
	try
	{
		array<Figure::Position^>^ points = gcnew array<Figure::Position^>(3);
		points[0] = pos(10, 15);
		points[1] = pos(20, 15);
		points[2] = pos(15, 20);

		ComplexFigure^ r = gcnew ComplexFigure(pos(100, 100), 10, 10, points);

		r->Move(pos(-100, -100));
	}
	catch (FigureException^ ex)
	{
		ex->whatHappened();

		return true;
	}

	return false;
}