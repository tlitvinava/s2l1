/*#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)//сделать все по кодстайлу
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <triangle.h>
#include <circle.h>
#include <line.h>
#include <square.h>
#include <rectangle.h>
#include <romb.h>
#include <hexagon.h>
#include <star5.h>
#include <star6.h>
#include <star8.h>
#include <star.h>

#include <QGraphicsProxyWidget>
#include <QGraphicsSceneMouseEvent>
#include <QMessageBox>
#include <QGraphicsView>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);


    // QVBoxLayout *layout = new QVBoxLayout;
    // layout->addWidget(label);
    // this->setLayout(layout);
    // ui->statusbar->addWidget(label);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    // label = new QLabel(this);
    // QGraphicsProxyWidget *proxy = scene->addWidget(label);
    // proxy->setPos(0, 25);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// void MainWindow::mouseMoveEvent(QMouseEvent *event){
//     ui->labelX->setText("X: " + QString::number(event->x())/* + "; Y: " + QString::number(event->y())*/);
//     QMainWindow::mouseMoveEvent(event);
// }
// void MainWindow::mouseMoveEvent(QMouseEvent *event){
//     ui->labelX->setText("X: " + QString::number(event->pos().x()));
//     QMainWindow::mouseMoveEvent(event);
// }

/*void MainWindow::on_StarButton_clicked(){
    QMessageBox message;
    message.setText("Choose star: ");

    QAbstractButton* button1 = message.addButton("5", QMessageBox::YesRole);
    QAbstractButton* button2 = message.addButton("6", QMessageBox::NoRole);
    QAbstractButton* button3 = message.addButton("8", QMessageBox::RejectRole);

    message.exec();

    if(message.clickedButton() == button1){
        Star *st5 = new Star(5);
        scene->addItem(st5);
    } else if(message.clickedButton() == button2){
        Star *st6 = new Star(6);
        scene->addItem(st6);
    } else if(message.clickedButton() == button3){
        Star *st8 = new Star(8);
        scene->addItem(st8);
    }
}*/

/*void MainWindow::on_TriangleButton_clicked(){
    Triangle *tr = new Triangle();
    scene->addItem(tr);
}

void MainWindow::on_CircleButton_clicked(){
    Circle *cr = new Circle();
    scene->addItem(cr);
}

void MainWindow::on_LineButton_clicked(){
    Line *ln = new Line();
    scene->addItem(ln);
}

void MainWindow::on_SquareButton_clicked(){
    Square *sq = new Square();
    scene->addItem(sq);
}

void MainWindow::on_RectangleButton_clicked(){
    Rectangle *rec = new Rectangle();
    scene->addItem(rec);
}

void MainWindow::on_RhombusButton_clicked(){
    Romb *rh = new Romb();
    scene->addItem(rh);
}

void MainWindow::on_HexagonButton_clicked(){
    Hexagon *hg = new Hexagon();
    scene->addItem(hg);
}


void MainWindow::on_ClearButton_clicked(){
    scene->clear();
}
*/
//////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButton_clicked()
{
    Triangle *tr = new Triangle();
    scene->addItem(tr);
}


void MainWindow::on_pushButton_2_clicked()
{
    Circle *cr = new Circle();
    scene->addItem(cr);
}


void MainWindow::on_pushButton_3_clicked()
{
    Square *sq = new Square();
    scene->addItem(sq);
}


void MainWindow::on_pushButton_4_clicked()
{
    Rectangle *rec = new Rectangle();
    scene->addItem(rec);
}


void MainWindow::on_pushButton_5_clicked()
{
    Line *ln = new Line();
    scene->addItem(ln);
}


void MainWindow::on_pushButton_6_clicked()
{
    Romb *rh = new Romb();
    scene->addItem(rh);
}


void MainWindow::on_pushButton_7_clicked()
{
    Hexagon *hg = new Hexagon();
    scene->addItem(hg);
}


void MainWindow::on_pushButton_8_clicked()
{
    Star *st8 = new Star(8);
    scene->addItem(st8);
}


void MainWindow::on_pushButton_9_clicked()
{
    Star *st5 = new Star(5);
    scene->addItem(st5);
}


void MainWindow::on_pushButton_10_clicked()
{
    Star *st6 = new Star(6);
    scene->addItem(st6);
}

