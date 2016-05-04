#include "myitem.h"
#include "dialog.h"
/*
MyItem::MyItem()
{
    //Pressed=false;
    //setFlag(ItemIsMovable);


}

QRectF MyItem::boundingRect() const
{
    //outer most edges
    return QRectF(0,0,100,100);

}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect=boundingRect();

    if(Pressed)
    {
        QPen pen(Qt::red ,3);
        painter->setPen(pen);
        painter->drawEllipse(rect);

    }
    else
    {
        QPen pen(Qt::black,3); //the pen is used for drawing frame
        painter->setPen(pen);
        painter->drawRect(rect);

    }


}

void MyItem::mousePressEvent(QGraphicsSceneMouseEvent *e)
{
    Pressed =true;
    update();
    QGraphicsItem::mousePressEvent(e);
}

void MyItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *e)
{
    Pressed=false;
    update();
    QGraphicsItem::mouseReleaseEvent(e);

}
*/

#include "myitem.h"

MyItem::MyItem()
{
    // random start rotation
    angle = (qrand() % 360);  //qrand() is equalize to srand on C++
    setRotation(angle);  //设置旋转角度

    // set the speed
    speed = 5;  // 5 pixels

    // random start position
    int startX = 0;
    int startY = 0;

    //set initial position
    if(qrand() % 1)
    {
        startX = qrand() % 200;
        startY = qrand() % 200;
    }
    else
    {
        startX = qrand() % -100;
        startY = qrand() % -100;
    }
    //mapToParent means map the point position to parent coordinate
    setPos(mapToParent(startX, startY)); //Sets the position of the item to pos
}

QRectF MyItem::boundingRect() const
{
    return QRect(0,0,20,20);
}


void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();

    // basic collision detection

    if(scene()->collidingItems(this).isEmpty())
    {
        // no collision
        QPen pen(Qt::green, 5);
        painter->setPen(pen);
    }
    else
    {
        // collision !!!
        QPen pen(Qt::red, 5);
        painter->setPen(pen);

        // set the position
        doCollision();
    }

    painter->drawEllipse(rect);
}


void MyItem::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();

    setPos(mapToParent(0, -speed));
}

void MyItem::doCollision()
{
    // get a new position

    // change the angle with randomness
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    // check if the new position is in bounds
    QPointF newPoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if(!scene()->sceneRect().contains((newPoint)))
    {
        // move back in bounds
        newPoint = mapToParent(0,0);
    }
    else
    {
        // set the new position
        setPos(newPoint);
    }
}


