#include "figuremodel.h"

//figuremodel::figuremodel() {}

#include <QPainter>
#include <QPolygon>

FigureModel::FigureModel(QGraphicsItem *parent) : QGraphicsItem(parent) {
    setCenter = false;
}

void FigureModel::move(int dx, int dy) {
    int newX = centerX + dx, newY = centerY + dy;

    //update();
}

void FigureModel::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if (!setCenter) {
        centerX = event->scenePos().x();
        centerY = event->scenePos().y();
        setCenter = true;
    }
}

void FigureModel::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    mouseX = event->scenePos().x() - centerX;
    mouseY = event->scenePos().y() - centerY;

    update();
}
