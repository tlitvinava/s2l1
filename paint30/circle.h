#ifndef CIRCLE_H
#define CIRCLE_H

#include "figuremodel.h"

class Circle : public FigureModel{
public:
    explicit Circle(FigureModel *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // CIRCLE_H
