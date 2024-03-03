#ifndef POLYGON_H
#define POLYGON_H
#include <QPoint>

class Polygon
{
public:

    QPoint* coords;
    int angleNum;

    Polygon();
    long double virtual Area() = 0;
    void virtual ChangePoints(QPoint start, QPoint end) = 0;
};

#endif // POLYGON_H
