#ifndef ROCKET_H//вроде все
#define ROCKET_H

#include "line.h"

class rocket : public line {
public:
    //rocket();
    void paintEvent(QPaintEvent *event);
    void drawRocket(QPainter *painter);
};

#endif // ROCKET_H
