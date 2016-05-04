#ifndef FLY_H
#define FLY_H

#include <QObject>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>  //元素类
#include <QPixmap>
#include <math.h>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsWidget>
#include <QTime>
#include <QEvent>

class fly : public QObject
{
    Q_OBJECT  //用于信号槽
public:
    explicit fly(QObject *parent = 0);

    QRectF boundingRect()const;
    void timerEvent(QTimerEvent *e);


signals:

public slots:

protected:
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

public:
    bool up;
    QPixmap pix_up;
    QPixmap pix_down;

    qreal angle;//角度

};

#endif // FLY_H
