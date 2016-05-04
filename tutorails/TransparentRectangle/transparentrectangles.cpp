#include "transparentrectangles.h"
#include "ui_transparentrectangles.h"
#include <QPainter>

TransparentRectangles::TransparentRectangles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransparentRectangles)
{
    ui->setupUi(this);

}

void TransparentRectangles::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    doPainting();
}

void TransparentRectangles::doPainting()
{
    QPainter painter(this);
    for(int i=1;i<=11;i++)
    {
        painter.setOpacity(i*0.1);
        painter.fillRect(50*i,20,40,40,Qt::darkGray);

    }
}

TransparentRectangles::~TransparentRectangles()
{
    delete ui;
}
