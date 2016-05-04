#include "dialog.h"
#include "ui_dialog.h"
#define PI 3.1415926535

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

void Dialog::on_pushButton_clicked()
{
    bool isok;
    QString vstr=ui->lineEdit->text();//获取文本输入
    int value=vstr.toInt(&isok);//表示一下转换是否成功
    double area=value*value*PI;
    QString tempstr;
    ui->lineEdit_2->setText(tempstr.setNum(area));


}

void Dialog::on_lineEdit_textChanged(const QString &arg1)
{
    this->on_pushButton_clicked();
}
