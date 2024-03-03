#include "square.h"
#include <QPoint>

Square::Square()
{
    this->coords = new QPoint[4];
    this->angleNum = 4;
}

long double Square::Area()
{
    long double side = sqrt(pow(coords[0].x()-coords[1].x(),2) + pow(coords[1].y()-coords[1].y(),2));

    return side*side;
}

void Square::ChangePoints(QPoint start, QPoint end)
{
    long double side = sqrt(pow(end.x()-start.x(),2) + pow(end.y()-start.y(),2));
    long double halfSide = side/2;

    coords[0] = QPoint(start.x()-halfSide,start.y());
    coords[1] = QPoint(start.x()+halfSide,start.y());
    coords[2] = QPoint(start.x()+halfSide,start.y()-side);
    coords[3] = QPoint(start.x()-halfSide,start.y()-side);
}

