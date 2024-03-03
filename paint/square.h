#ifndef SQUARE_H
#define SQUARE_H
#include "Polygon.h"

class Square : public Polygon
{
public:
    Square();
    long double Area() override;
    void ChangePoints(QPoint start, QPoint end) override;
};

#endif // SQUARE_H
