#include "fly.h"

fly::fly(QObject *parent) : QObject(parent)
{
    up=true;
    pix_up.load("up.png");
    pix_down.load("down_png");

    startTimer(1000);//1s变换一次



}

QRectF fly::boundingRect()const
{
    qreal angletemp=2;
    return QRect(-pix_up.width()/2-angletemp,
                 -pix_up.height()/2-angletemp,
                 -pix_up.width()+angletemp,
                 -pix_up.height()+angletemp
                 );
}

void fly::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
{
    if(up)
    {
        painter->drawPixmap(boundingRect().topLeft(),pix_up);  //绘制一张图片
        up=!up;



    }
    else
    {
        painter->drawPixmap(boundingRect().topLeft(),pix_down);
         up=!up;
    }

}

void fly::timerEvent(QTimerEvent *e)
{
    //边界控制
    qreal edgex=scene()->sceneRect().right()+boundingRect().width()/2;
    qreal edgextop=scene()->sceneRect().top()+boundingRect().height()/2;
    qreal edgexbottom=scene()->sceneRect().bottom()+boundingRect().height()/2;

    if(pos().x>=edgex)
    {
        setPos(scene()->sceneRect().left(),pos().y());

    }
    if(pos().y<=edgetop)
    {
        setPos(pos().x(),scene()->sceneRect().bottom());

    }
    if(pos().y()>=edgexbottom)
    {

        setPos(pos().x(),scene()->sceneRect().top());
    }

#defin PI 3.14
    angle+=(qrand()%10)/20.0;
    qreal dx=fabs(sin(angle*PI)*10.0);
    qreal dy=(qrand()%20)-10.0;
    setPos(mapToParent(dx,dy));//设置位置，转换坐标



}
