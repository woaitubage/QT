#include "lineargradients.h"
#include "ui_lineargradients.h"
#include <QPainter>
#include <QLinearGradient>

LinearGradients::LinearGradients(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinearGradients)
{
    ui->setupUi(this);
}

void LinearGradients::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    doPainting();
}

void LinearGradients::doPainting()
{
    QPainter painter(this);

    QLinearGradient gradl(0,20,0,50);

    gradl.setColorAt(0.1,Qt::black);
    gradl.setColorAt(0.3, Qt::yellow);
    gradl.setColorAt(0.9, Qt::red);

    painter.fillRect(20, 20, 300, 200, gradl);

}

LinearGradients::~LinearGradients()
{
    delete ui;
}
