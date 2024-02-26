#ifndef MAINWINDOW_H//вроде все
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
//#include "rocket.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Rocket *R = new Rocket;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

protected:
void paintEvent (QPaintEvent*) override;

};

#endif // MAINWINDOW_H


/*QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Telega *T = new Telega;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

protected:
    void paintEvent(QPaintEvent *) override;
};*/
