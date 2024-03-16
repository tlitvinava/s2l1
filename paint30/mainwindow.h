#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;  // Объявление scene

};
#endif // MAINWINDOW_H

/*#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // void mouseMoveEvent(QMouseEvent *event);
    void on_StarButton_clicked();
    void on_TriangleButton_clicked();
    void on_CircleButton_clicked();
    void on_LineButton_clicked();
    void on_ClearButton_clicked();
    void on_BrushButton_clicked();
    void on_SquareButton_clicked();

    void on_RectangleButton_clicked();

    void on_RhombusButton_clicked();

    void on_HexagonButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QLabel *label;
};
#endif // MAINWINDOW_H
*/
