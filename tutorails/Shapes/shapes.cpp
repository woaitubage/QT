#include "shapes.h"
#include "ui_shapes.h"
#include <QPainter>
#include <QPainterPath>


Shapes::Shapes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shapes)
{
    ui->setupUi(this);
}

void Shapes::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    doPainting();

}

void Shapes::doPainting()
{
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QBrush("#888"),1));
    painter.setBrush(QBrush(QColor("#888")));

    QPainterPath path1;

    path1.moveTo(5,5);
    path1.cubicTo(40,5,50,50,99,99);
    path1.cubicTo(5, 99,  50, 50,  5, 5);
    painter.drawPath(path1);

    painter.drawPie(130, 20, 90, 60, 30*16, 120*16);
    painter.drawChord(240, 30, 90, 60, 0, 16*180);
    painter.drawRoundRect(20, 120, 80, 50);

    QPolygon polygon({QPoint(130, 140), QPoint(180, 170), QPoint(180, 140),
    QPoint(220, 110),QPoint(140, 100)});   //多边形，有五个点然后连城直线

    painter.drawPolygon(polygon);

    painter.drawRect(250, 110, 60, 60);

    QPointF baseline(20, 250);
    QFont font(tr("zhege"), 55);
    QPainterPath path2;
    path2.addText(baseline, font, tr("Qt大"));
    painter.drawPath(path2);

    painter.drawEllipse(140, 200, 60, 60);
    painter.drawEllipse(240, 200, 90, 60);

}

Shapes::~Shapes()
{
    delete ui;
}
