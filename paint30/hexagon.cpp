#include "hexagon.h"

Hexagon::Hexagon(FigureModel *parent) : FigureModel(parent){
    centerX = 0;
    centerY = 0;
    mouseX = 0;
    mouseY = 0;
}

void Hexagon::draw(QPainter *painter){
    QPolygon polygon;
    int sideLength = qMax(mouseX, mouseY);
    for (int i = 0; i < 6; ++i) {
        double angle = 60 * i - 30;  // Угол в градусах
        double radian = qDegreesToRadians(angle);  // Угол в радианах
        int dx = sideLength * cos(radian);
        int dy = sideLength * sin(radian);
        polygon << QPoint(centerX + dx, centerY + dy);
    }
    painter->drawPolygon(polygon);
}

void Hexagon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    draw(painter);
}
