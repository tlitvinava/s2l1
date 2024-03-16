#ifndef LINE_H
#define LINE_H

#include "figuremodel.h"

class Line : public FigureModel{
public:
    explicit Line(FigureModel *parent = nullptr);

    void draw(QPainter *painter) override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
};

#endif // LINE_H
