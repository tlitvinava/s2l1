#include "line.h"

Line::Line(FigureModel *parent) : FigureModel(parent){
    centerX = 0;
    centerY = 0;
    mouseX = 0;
    mouseY = 0;
}

void Line::draw(QPainter *painter){
    painter->drawLine(QPointF(centerX, centerY), QPointF(mouseX+centerX, mouseY+centerY));
}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    draw(painter);
}

double Line::calculatePerimetr(){
    return 3;
}
double Line::calculateSquare(){
    return 31;
}


