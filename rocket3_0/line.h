#ifndef LINE_H//вроде все
#define LINE_H

#include <QWidget>

class Rock:public QWidget{
public:
    int x=200;
    void paintEvent(QPaintEvent *event);
    void drawR(QPainter *painter);
    void move();
    bool dr(int sch);
private:
    int m=1;
    int s=-1;
    bool be=false;
};


/*class Rocket : public QWidget {
    Q_OBJECT

public:
    Rocket(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};*/

#endif // LINE_H
