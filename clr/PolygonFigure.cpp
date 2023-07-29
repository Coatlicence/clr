#include "PolygonFigure.h"

PolygonFigure::PolygonFigure(Position^ position, array<Position^>^ Vertices)
{
	this->VertexCount = Vertices->Length;

	this->position = gcnew Figure::Position(position->x, position->y);

	this->Vertices = Vertices;

	for (int i = 0; i < VertexCount; i++)
	{
		auto p = this->Vertices[i];

		p->x = p->x + position->x;
		p->y = p->y + position->y;

		if ((p->x < 0) || (p->y < 0))
		{
			String^ w = "Один из вершин вышел за границы экрана в отрицательные значения";
			String^ r = "Измените координату вершины или фигуры";

			throw gcnew FigureException(w, r);
		}
	}
}
