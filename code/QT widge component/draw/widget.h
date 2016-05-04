#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QEvent>
#include <QBrush>
#include <QMouseEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void mouseMoveEvent(QMouseEvent *e);


    void paintEvent(QPaintEvent * e);  //重写函数
    QPainter *painter;
    QPoint startPos;
    QPoint endPos;
    int style;
    QPixmap *pix;
    void resizeEvent(QResizeEvent *e);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
