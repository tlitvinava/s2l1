#ifndef ROCKET1_H
#define ROCKET1_H

#include <QWidget>

class Rocket : public QWidget {
    Q_OBJECT

public:
    Rocket(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // ROCKET1_H
