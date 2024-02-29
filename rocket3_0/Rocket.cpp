#include <QPainter>//вроде все
#include "Rocket.h"

Rocket::Rocket() {}

/*void Line::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //drawR(&painter);
    //drawRocket(&painter);
}*/

void Rocket::drawRocket(QPainter *painter)
{
    //drawR(painter);
    QPen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(5);
    painter->setPen(pen);

    QBrush brush;
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    painter->setBrush(brush);

    QPolygon pol;
    pol<<QPoint(100,700)<<QPoint(100,500)<<QPoint(150,450)<<QPoint(200,500)<<QPoint(200,700)<<QPoint(220,720)<<QPoint(80,720)<<QPoint(100,700);
    painter->drawPolygon(pol);

    QPolygon pol1;
    pol1<<QPoint(100,700)<<QPoint(200,700);
    painter->drawPolygon(pol1);

    QPolygon pol2;
    pol2<<QPoint(100,500)<<QPoint(200,500);
    painter->drawPolygon(pol2);

    QBrush brush1;
    brush1.setColor(Qt::blue);
    brush1.setStyle(Qt::SolidPattern);
    painter->setBrush(brush1);

    painter->drawEllipse(125, 525, 50,50);


}
