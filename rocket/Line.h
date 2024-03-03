#ifndef LINE_H
#define LINE_H

#include <QWidget>

class Line:public QWidget{
public:
    int y=0;
    void paintEvent(QPaintEvent *event);
    void drawR(QPainter *painter);
    void move();
    bool dr(int sch);
private:
    int m=1;// как должно все расти
    int s=-1;
    bool be=false;
};

#endif // LINE_H

