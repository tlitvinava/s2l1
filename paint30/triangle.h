#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figuremodel.h"

class Triangle : public FigureModel {
public:
    explicit Triangle(FigureModel *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    // double Square();
    // double Perimeter();
    // std::pair<double, double> CenterOfMass();
};


#endif // TRIANGLE_H
