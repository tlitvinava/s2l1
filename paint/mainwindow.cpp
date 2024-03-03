#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "square.h"

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

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(this->polygon!=nullptr){
        R->mouse_press(event);
        qDebug() << "Pressed";
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(this->polygon!=nullptr){
        R->mouse_move(event);
        qDebug() << "Moved";
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(this->polygon!=nullptr){
        R->mouse_release(event);
        qDebug() << "Released";
    }
    this->polygon=nullptr;
}

void MainWindow::on_pushButton_pressed()
{
    polygon = new Square();
    R = new Drawer(polygon);
}

