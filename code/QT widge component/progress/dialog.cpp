#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    progress =new QProgressBar(this);
    progress->resize(300,100);
    progress->move(50,50);


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    progress->setRange(0,100);
    for(int i=0;i<10000;i++)
    {
        progress->setValue(i%100);
        if(i==2899)
        {
            break;
        }
    }
}

void Dialog::on_pushButton_2_clicked()
{
    Dialog *p=new Dialog;
    p->show();
}
