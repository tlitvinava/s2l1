#include "mainwindow.h"
//#include "rocket1.h"
#include <QApplication>
//#include <QPushButton>
//#include <QVBoxLayout>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*Rocket window;
    window.resize(120, 200);
    window.show();

    Rocket window1;
    QPushButton *button = new QPushButton("Моя кнопка", &window1);
    window1.show();*/


    return a.exec();
}
