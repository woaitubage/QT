#ifndef TRANSPARENTRECTANGLES_H
#define TRANSPARENTRECTANGLES_H

#include <QWidget>

namespace Ui {
class TransparentRectangles;
}

class TransparentRectangles : public QWidget
{
    Q_OBJECT

public:
    explicit TransparentRectangles(QWidget *parent = 0);
    ~TransparentRectangles();

private:
    Ui::TransparentRectangles *ui;

protected:
    void paintEvent(QPaintEvent *e);
    void doPainting();

};

#endif // TRANSPARENTRECTANGLES_H
