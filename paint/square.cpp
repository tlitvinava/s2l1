#include "square.h"
#include <QPolygon>

Square::Square(FigureModel *parent) : FigureModel(parent){
    centerX = 0;
    centerY = 0;
    mouseX = 0;
    mouseY = 0;
}

void Square::draw(QPainter *painter){
    QPolygon polygon;
    int r = qMax(mouseX, mouseY) / 2;
    polygon << QPoint(centerX - r, centerY - r)
            << QPoint(centerX - r, centerY + r)
            << QPoint(centerX + r, centerY + r)
            << QPoint(centerX + r, centerY - r);
    painter->drawPolygon(polygon);
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    draw(painter);
}

double Square::calculatePerimetr(){
    return 6;
}

double Square::calculateSquare(){
    return 61;
}
