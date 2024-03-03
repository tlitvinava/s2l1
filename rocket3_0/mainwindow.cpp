#include "mainwindow.h"//если второй раз нажимаешь возникает бесконечный цикл
#include "ui_mainwindow.h"
#include "Rocket.h"
#include <QPainter>
#include <QPixmap>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    int width = 2000; // ширина в пикселях
    int height = 1000;
    ui->setupUi(this);
    //this->setStyleSheet("QWidget { background-image: url (/home/taisa/Загрузки/640px-Безмятежность.png); }");
    QPixmap bkgnd("/home/taisa/Загрузки/640px-Безмятежность.png");
    bkgnd = bkgnd.scaled(width, height, Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *)// отрисовка обьекта
{


    QPainter painter(this);
    R->drawRocket(&painter);
    R->drawFlame(&painter);


}

void MainWindow::on_pushButton_clicked()
{
    R->engineStarted=true;
    R->move();
    repaint();

    for(int i=0;i<1000;i++){
        R->move();
        repaint();
    }

}



