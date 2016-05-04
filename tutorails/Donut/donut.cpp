#include "donut.h"
#include "ui_donut.h"
#include <QPainter>

Donut::Donut(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Donut)
{
    ui->setupUi(this);
}


void Donut::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    doPainting();
}

void Donut::doPainting()
{
    QPainter painter(this);

    painter.setPen(QPen(QBrush("#535353"),0.5));
    painter.setRenderHint(QPainter::Antialiasing);  //The rendering will be of higher quality.

    int h=height();
    int w=width();

    painter.translate(QPoint(w/2,h/2));
    for(qreal rot=0;rot<360.0;rot+=5.0)
    {
        painter.drawEllipse(-125,-40,250,80);
        painter.rotate(5.0);

    }

}



Donut::~Donut()
{
    delete ui;
}
