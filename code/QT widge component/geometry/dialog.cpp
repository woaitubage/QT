#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    showit();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showit()
{
    QString infoall;
    QString x;
    x.sprintf("x()=%d",this->x());
    QString  y;
    y.sprintf("y()=%d",this->y());
    QString  width;
    width.sprintf("width()=%d",this->width());
    QString  height;
    height.sprintf("height()=%d",this->height());
    infoall+=(x+"\r\n");
    infoall+=(y+"\r\n");
    infoall+=(width+"\r\n");
    infoall+=(height+"\r\n");
    ui->textEdit->setText(infoall);

}

void Dialog::moveEvent(QMoveEvent *e)
{
    showit();
}
void Dialog::resizeEvent(QResizeEvent *e)
{
    showit();
}
