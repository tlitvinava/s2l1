#include "Line.h"//вроде все
#include <QPainter>


void Line::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    drawR(&painter);
}

void Line::drawR(QPainter *painter)
{
    QPen pen;
    pen.setColor(Qt::white);
    pen.setStyle(Qt::SolidLine);
    painter->setPen(pen);
    painter->drawLine(100,700-y,100,500-y);
}

void Line::move()
{
    y+=1;

    /*if(x>600||x<10)
    {
        m*=-1;
        x+=10*m;
    }
    if(x==200)
        s--;
*/
}

/*bool Line::dr(int sch)//если включить это запускается бесконечный цикл
{
    if(s<=0&&!be)
        s=sch,be=true;
    if(s==0&&be)
        be=false;
    //return s==0;
    return true;//теперь бесконечный цикл не запускается

}*/


