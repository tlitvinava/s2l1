#include "Drawer.h"//по моему вся эта хрень должна быть в сппшнике
#include <QMouseEvent>
#include <QPainter>
#include <QWidget>


Drawer::Drawer(QWidget *parent) : QWidget(parent)
    {}

Drawer::Drawer(Polygon *polygon){
    this->polygon = polygon;
}

void Drawer::mouse_press(QMouseEvent *event)
    {
        mouse_startPoint = event->pos();
        mouse_endPoint = event->pos();
        mouse_draw = true;
    }

void Drawer:: mouse_move(QMouseEvent *event)
    {
        mouse_endPoint = event->pos();
        polygon->ChangePoints(mouse_startPoint,mouse_endPoint);
        update();
    }

void Drawer:: mouse_release(QMouseEvent *event)
    {
        mouse_endPoint = event->pos();
        mouse_draw = false;
        polygon->ChangePoints(mouse_startPoint,mouse_endPoint);
        update();
    }

    void Drawer::paintEvent(QPaintEvent* event)
    {

    QPainter *painter = new QPainter(this);

        for(int i = 0; i < 4; i++)
        {
            qDebug()<< "Point[" << i << "]: " << polygon->coords[i].x() << " " << polygon->coords[i].y() << '\n';
        }

        QPen pen;
        pen.setColor(Qt::white);
        pen.setStyle(Qt::SolidLine);
        pen.setWidth(5);
        painter->setPen(pen);

        painter->drawPolygon(polygon->coords, polygon->angleNum);
    }


