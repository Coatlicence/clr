#include "Rhombus.h"

Rhombus::Rhombus(Position^ position, int width, int height)
{
    if (width <= 0)
    {
        String^ w = "Выход вершины в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    if (height <= 0)
    {
        String^ w = "Выход вершины в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    this->position = gcnew Figure::Position(position->x, position->y);

    this->width = width;
    this->height = height;

    VertexCount = 4;

    Vertices = gcnew array<Position^>(VertexCount);

    Position^ top = gcnew Position();
    top->x = position->x;
    top->y = position->y - height;

    if ((top->x < 0) || (top->y < 0))
    {
        String^ w = "Верхняя вершина ромба вышла за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    Position^ down = gcnew Position();
    down->x = position->x;
    down->y = position->y + height;

    if ((down->x < 0) || (down->y < 0))
    {
        String^ w = "Нижняя вершина вышла за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    Position^ left = gcnew Position;
    left->x = position->x - width;
    left->y = position->y;

    if ((left->x < 0) || (left->y < 0))
    {
        String^ w = "Левая вершина вышла за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    Position^ right = gcnew Position();
    right->x = position->x + width;
    right->y = position->y;

    if ((right->x < 0) || (right->y < 0))
    {
        String^ w = "Правая вершина вышла за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    Vertices[0] = top;
    Vertices[1] = left;
    Vertices[2] = down;
    Vertices[3] = right;
}

int Rhombus::GetWidth()
{
    return width;
}

int Rhombus::GetHeight() 
{
    return height;
}

void Rhombus::SetSize(int width, int height)
{
    if (width <= 0)
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    if (height <= 0)
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    bool vis = visible;

    if (vis) Hide();

    this->width = width;
    this->height = height;

    auto top = Vertices[0];
    top->y = position->y - height;

    if (top->y < 0)
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    auto left = Vertices[1];
    left->x = position->x - width;

    if (left->x < 0)
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    auto down = Vertices[2];
    down->y = position->y + height;

    if (down->y < 0)
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }


    auto right = Vertices[3];
    right->x = position->x + width;

    if (right->x < 0) 
    {
        String^ w = "Одна из вершин вышел за границы экрана в отрицательные значения";
        String^ r = "Измените координату вершины или фигуры";

        throw gcnew FigureException(w, r);
    }

    if (vis) Show();
}