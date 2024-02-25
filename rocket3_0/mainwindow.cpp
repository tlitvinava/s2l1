#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rocket.h"
//#include <QMessageBox>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *)// отрисовка обьекта
{
   /* QPainter painter;
    painter.begin(this);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(5);
    painter.setPen(pen);

    QBrush brush;
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    QPolygon pol;
    pol<<QPoint(100,500)<<QPoint(100,300)<<QPoint(150,250)<<QPoint(200,300)<<QPoint(200,500)<<QPoint(220,520)<<QPoint(80,520)<<QPoint(100,500);
    painter.drawPolygon(pol);

    QPolygon pol1;
    pol1<<QPoint(100,500)<<QPoint(200,500);
    painter.drawPolygon(pol1);

    QPolygon pol2;
    pol2<<QPoint(100,300)<<QPoint(200,300);
    painter.drawPolygon(pol2);

    QBrush brush1;
    brush1.setColor(Qt::blue);
    brush1.setStyle(Qt::SolidPattern);
    painter.setBrush(brush1);

    painter.drawEllipse(125, 325, 50,50);

    painter.drawLine(0,520,1000,520);

    painter.end();*/


}

void MainWindow::on_pushButton_clicked()
{

}

