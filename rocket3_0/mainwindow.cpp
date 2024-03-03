#include "mainwindow.h"//вроде все
#include "ui_mainwindow.h"
#include "Rocket.h"
//#include "Line.h"
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
    QPainter painter(this);
    R->drawRocket(&painter);

}

void MainWindow::on_pushButton_clicked()
{
    R->move();
    repaint();

    for(int i=0;i<1000;i++){
        R->move();
        repaint();
    }

}

/*MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    T->drawCar(&painter);
    //r->drawR();
}

void MainWindow::on_pushButton_clicked()
{
    T->move();
    while (!T->dr(2)) {
        repaint();
        T->move();
        for (int i = 0; i < (int) 1e7; i++)
            ;
    }
}*/

