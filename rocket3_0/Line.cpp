#include "Line.h"
#include <QPainter>


void Line::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    drawR(&painter);
}

void Line::drawR(QPainter *painter)
{
    QPen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);
    painter->setPen(pen);
    painter->drawLine(100,700-y,100,500-y);
}

void Line::move()
{
    y+=2;
}



