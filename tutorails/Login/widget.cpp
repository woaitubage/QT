#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text()==tr("qt") && ui->pwdLineEdit->text()== tr("123456"))
    {
        acceptDrops();
    }
    else
    {
        QMessageBox::warning(this,tr("Warning"),tr("user name or password error"),
                             QMessageBox::Yes);
    }


}
