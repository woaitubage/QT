#include "dialog.h"
#include "ui_dialog.h"
#include <QGridLayout>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QGridLayout *main1=new QGridLayout(this);


   for(int i=0;i<5;i++)
   {
       for(int j=0;j<4;j++)
       {
           pp[i][j]=new QPushButton(this);
           pp[i][j]->resize(50,50);
           QString str;
           str.sprintf("%d%d",i,j);//打印
           pp[i][j]->setWindowTitle(str);//显示
           pp[i][j]->setText(str);
           qDebug()<<str;
           main1->addWidget(pp[i][j],i,j);
       }
   }
}

Dialog::~Dialog()
{
    delete ui;
}


