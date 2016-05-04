#ifndef LINES_H
#define LINES_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class Lines;
}

class Lines : public QWidget
{
    Q_OBJECT

public:
    explicit Lines(QWidget *parent = 0);
    ~Lines();

private:
    Ui::Lines *ui;
    void paintEvent(QPaintEvent *e);
    void drawLines(QPainter *op);

};

#endif // LINES_H
