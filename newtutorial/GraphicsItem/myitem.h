#ifndef MYITEM_H
#define MYITEM_H
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QRect>

class MyItem : public QGraphicsItem
{
public:
    MyItem();

    QRectF boundingRect() const;

    //overriding paint()
 /* void paint(QPainter *painter,
              const QStyleOptionGraphicsItem *option,
              QWidget *widget);
*/
   //item state
   bool Pressed;
protected:
   //overriding mouse events
   // void mousePressEvent(QGraphicsSceneMouseEvent *e);
   // void mouseReleaseEvent(QGraphicsSceneMouseEvent *e);
   void advance(int phase);
private:
   qreal angle,speed;
   void doCollision();

};

#endif // MYITEM_H
