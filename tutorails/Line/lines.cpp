#include "lines.h"
#include "ui_lines.h"
#include <QVector>

Lines::Lines(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lines)
{
    ui->setupUi(this);


}
void Lines::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter op(this);
    drawLines(&op);

}

Lines::~Lines()
{
    delete ui;
}

void Lines::drawLines(QPainter *op)
{
    QPen pen(Qt::black,2,Qt::SolidLine);
    op->setPen(pen);
    op->drawLine(20,40,250,40);

    pen.setStyle(Qt::DashLine);
    op->setPen(pen);
    op->drawLine(20,80,250,80);

    pen.setStyle(Qt::DashDotDotLine);
    op->setPen(pen);
    op->drawLine(20,120,250,120);

    pen.setStyle(Qt::DotLine);
    op->setPen(pen);
    op->drawLine(20, 160, 250, 160);

    pen.setStyle(Qt::DashDotDotLine);
    op->setPen(pen);
    op->drawLine(20, 200, 250, 200);

    QVector<qreal> dashes;
    qreal space = 4;

    dashes << 1 << space << 5 << space;

    pen.setStyle(Qt::DashDotDotLine);
    pen.setDashPattern(dashes);

    op->setPen(pen);
    op->drawLine(20,240,250,240);



}

