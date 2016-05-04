#ifndef SHAPES_H
#define SHAPES_H

#include <QWidget>

namespace Ui {
class Shapes;
}

class Shapes : public QWidget
{
    Q_OBJECT

public:
    explicit Shapes(QWidget *parent = 0);
    ~Shapes();

private:
    Ui::Shapes *ui;
    void doPainting();

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // SHAPES_H
