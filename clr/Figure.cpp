#include "Figure.h"

Figure::Position::Position()
{
    x = 0;
    y = 0;
}

Figure::Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}

array<Point>^ Figure::ConvertPosition()
{
	array<Point>^ points = gcnew array<Point>(VertexCount);

	//array<Point>^ f = gcnew array<Point>(3);


	for (int i = 0; i < VertexCount; i++)
	{
		points[i] = Point(Vertices[i]->x, Vertices[i]->y);
	}

	return points;
}

Figure::Position^ Figure::GetPosition()
{
    return gcnew Figure::Position(position->x, position->y);
}

inline bool Figure::GetVisible()
{
	return visible;
}

void Figure::SetContext(Graphics^ context)
{
	this->context = context;
}

void Figure::Move(Position^ _pos)
{
	bool vis = visible;

	if (vis) Hide();

	int offsetx = _pos->x - position->x;
	int offsety = _pos->y - position->y;

	position->x = _pos->x; position->y = _pos->y;

	for (int i = 0; i < Vertices->Length; i++)
	{
		if ((Vertices[i]->x + offsetx < 0) || (Vertices[i]->y + offsety < 0))
		{
			String^ w = "Один из вершин вышел за границы экрана в отрицательные значения";
			String^ r = "Измените координату вершины или фигуры";

			throw gcnew FigureException(w, r);
		}
	}

	for (int i = 0; i < Vertices->Length; i++)
	{
		Vertices[i]->x += offsetx;
		Vertices[i]->y += offsety;
	}


	if (vis) Show();
}

void Figure::Show()
{
	if (visible) return;

	if (!context) throw gcnew FigureException("Контекст в фигуре не должен быть равен nullptr", "Используйте SetContext для установки контекста");

	array<System::Drawing::Point>^ points = ConvertPosition();

	context->FillPolygon(brush, points);

	visible = true;
}

void Figure::Hide()
{
	if (!visible) return;

	if (!context) throw gcnew FigureException("Контекст в фигуре не должен быть равен nullptr", "Используйте SetContext для установки контекста");

	SolidBrush^ _black = gcnew SolidBrush(Color::Black);

	context->FillPolygon(_black, ConvertPosition());

	visible = false;
}

Figure::~Figure()
{
	Hide();
}

FigureException::FigureException(String^ what, String^ recommendation) : Exception(what)
{
	this->_what = what;
	this->recommendation = recommendation;
}

String^ FigureException::whatHappened()
{
	return _what + "\n" + recommendation;
}


Figure::Position^ pos(int x, int y)
{
	return gcnew Figure::Position(x, y);
}
