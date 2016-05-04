#ifndef DONUT_H
#define DONUT_H

#include <QWidget>

namespace Ui {
class Donut;
}

class Donut : public QWidget
{
    Q_OBJECT

public:
    explicit Donut(QWidget *parent = 0);
    ~Donut();

private:
    Ui::Donut *ui;

private:
    void doPainting();

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // DONUT_H
