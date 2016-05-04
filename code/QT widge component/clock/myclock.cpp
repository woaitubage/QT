#include "myclock.h"
#include <QTimer>  //计时器
#include <QTime>  //操作时间函数
#include <QPalette>

myclock::myclock(QWidget *parent):QLCDNumber(parent)
{
    QPalette p=palette();//The QPalette class contains color groups for each widget state
    p.setColor(QPalette::Window,Qt::blue);
    setPalette(p);

    //颜色
    setWindowFlags(Qt::FramelessWindowHint);  //隐藏标题，关闭按钮
    setWindowOpacity(0.5);  //设置透明度

    QTimer *timer=new QTimer(this);

    connect (timer,SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start(1000);
    showtime();
    resize(300,120);
}

void myclock::showtime()
{
    QTime time=QTime::currentTime();//当前时间
    QString str=time.toString("hh:mm");
    this->display(str);

}
