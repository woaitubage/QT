#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

//只有widget可以重绘
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setGeometry(120,120,200,200);
    setAutoFillBackground(true);  //对窗体背景色的设置
    setPalette(QPalette(Qt::red));
    pix=new QPixmap(size());//此QPixmap对象用来准备随时接收绘制的内容
    pix->fill(Qt::black);//填充背景色为白色


}

Widget::~Widget()
{
    delete ui;
}
void Widget::resizeEvent(QResizeEvent *e)
{
    if(height()>pix->height() || width()>pix->width())
    {
        QPixmap *newPix=new QPixmap(size());
        newPix->fill(Qt::blue);
        QPainter p(newPix);
        p.drawPixmap(QPoint(0,0),*pix);
        pix=newPix;
    }
    QWidget::resizeEvent(e);
}

void Widget::paintEvent(QPaintEvent *e)
{
    /*
    painter=new QPainter;
    painter->begin(this);
    painter->setPen(QPen(Qt::blue,10,Qt::DashLine));
   // painter->setBrush(QBrush(Qt::red,Qt::SolidPattern));
   // painter->drawRect(20,20,180,180);
   // painter->drawEllipse(20,20,190,160);//绘制椭圆
    //painter->drawPoint(100,100);
    painter->drawArc(20,20,210,160,500,1000);
    painter->drawLine(QPoint(30,30),QPoint(60,180));
    painter->drawPixmap(150,150,QPixmap(""));

    painter->end();
    */
    QPainter painter(this);
    painter.drawPixmap(QPoint(0,0),*pix);//图像
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    qDebug()<<"mouse Move";
    QPainter *painter=new QPainter;
    QPen  pen(Qt::red,10,Qt::DashLine);
   // pen.setStyle((Qt::PenStyle)style);
    pen.setWidth(10);
    pen.setColor(Qt::red);
    painter->begin(pix);  //记住begin()要和end()一起使用
    painter->setPen(pen);
    painter->drawLine(startPos,e->pos());
    painter->end();
    startPos=e->pos();
    update();


}
