#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    /*
    QPainter painter(this);
    QPen pen(Qt::black);
    pen.setWidth(20);

    QPoint st(50,50);
    QPoint end(350,50);
    pen.setCapStyle(Qt::FlatCap);
    painter.setPen(pen);
    painter.drawLine(st,end);


    st.setY(100);
    end.setY(100);
    pen.setCapStyle(Qt::SquareCap);
    painter.setPen(pen);
    painter.drawLine(st,end);

    st.setY(150);
    end.setY(150);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.drawLine(st,end);
    */
    QPainter painter(this);

    QLinearGradient linearGrad(QPointF(100,100),QPoint(150,250));
    linearGrad.setColorAt(0.5, Qt::white);
    linearGrad.setColorAt(0, Qt::green);
    linearGrad.setColorAt(1, Qt::black);
    QRect rect_linear(50,50,200,200);
    painter.fillRect(rect_linear,linearGrad);



}
