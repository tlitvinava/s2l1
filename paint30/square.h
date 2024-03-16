#ifndef SQUARE_H
#define SQUARE_H

#include "figuremodel.h"

class Square : public FigureModel{
public:
    explicit Square(FigureModel *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // SQUARE_H
