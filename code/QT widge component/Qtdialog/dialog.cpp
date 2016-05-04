#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>
#include <QDialog>
#include "myinfo.h"

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
    QString qstr=QFileDialog::getOpenFileName(this,"haihua love av.mp4 cpp","/","岛国大片(*.mp4)::(*.cpp)");
    ui->lineEdit->setText(qstr);


}

void Dialog::on_pushButton_2_clicked()
{
    QColor cl=QColorDialog::getColor(Qt::yellow);
    QPalette pale(cl);//颜色载体
    this->setPalette(pale);//设置颜色

}

void Dialog::on_pushButton_3_clicked()
{
    bool isok;
    QFont qf=QFontDialog::getFont(&isok);

    if(isok)
    {
        ui->label->setFont(qf);

    }

}

void Dialog::on_pushButton_4_clicked()
{
 //   QMessageBox *cs=new QMessageBox;
  //  cs->setWindowTitle("av");
  //  cs->show();

    //QMessageBox::warning(this,"hello huahua","hello china");

    QMessageBox::question(this,"hello huahua","hello china");


}


void Dialog::on_pushButton_5_clicked()
{
    myinfo *p=new myinfo;
    p->show();
    ui->lineEdit->setText(p->str);
}
