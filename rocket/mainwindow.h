#ifndef MAINWINDOW_H//вроде все
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "Rocket.h"

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
    Rocket *F = new Rocket;
    //Line *R = new Line;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_clicked();

private:

protected:
void paintEvent (QPaintEvent*) override;

};

#endif // MAINWINDOW_H



