#ifndef STAR5_H
#define STAR5_H

#include "figuremodel.h"

class Star5 : public FigureModel{
public:
    explicit Star5(FigureModel *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // STAR5_H
