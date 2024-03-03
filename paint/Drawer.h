#ifndef DRAWER_H
#define DRAWER_H

#include <QWidget>
#include "Polygon.h"

class Drawer : public QWidget
{
    Q_OBJECT
public:
    explicit Drawer(QWidget *parent = nullptr);
    //MyWidget(QWidget *parent = 0) : QWidget(parent), mouse_draw(false) {}
    Drawer(Polygon *polygon);

    void mouse_press(QMouseEvent *event);
    void mouse_move(QMouseEvent *event);
    void mouse_release(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    Polygon* polygon;


private:
    bool mouse_draw;
    QPoint mouse_startPoint;
    QPoint mouse_endPoint;

signals:

};

#endif // DRAWER_H
