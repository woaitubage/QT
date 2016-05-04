#include "dialog.h"
#include "ui_dialog.h"
#include "mydialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    hf=new huahuafindfang(6,8);
    hf->setnoturn(3,4);
    hf->setnoturn(3,7);
    hf->setnoturn(5,7);
    hf->setnoturn(2,3);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //up
   hf->left();
}

void Dialog::on_pushButton_4_clicked()
{
    //down
   hf->right();
}

void Dialog::on_pushButton_2_clicked()
{
    //left
    hf->up();
}

void Dialog::on_pushButton_3_clicked()
{
    //right
    hf->down();
}
