#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QBitmap>
#include <QPixmap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //  ui->setupUi(this);
    QPixmap pix;
    pix.load("16.png",0,Qt::AvoidDither|Qt::ThresholdAlphaDither|Qt::ThresholdDither);
    resize(pix.size());
    setMask(QBitmap(pix.mask()));//初始化






}

void Widget::paintEngine(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("16.png"));
}


Widget::~Widget()
{
    delete ui;
}
