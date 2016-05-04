#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    pplabel =new QLabel *[10];
    for(int i=0;i<10;i++)
    {
        QString str;
        str.sprintf("_%d",i);
        pplabel [i]=new QLabel(str);//构造初始化

    }

    hl=new QHBoxLayout(this);
    hl->setMargin(10);//表示控件与窗体的左右边距
    for(int i=0;i<10;i++)
    {
        hl->addWidget(pplabel[i]);
    }



    vl=new QVBoxLayout(this);
    vl->setMargin(10);
    for(int i=0;i<10;i++)
    {
        vl->addWidget(pplabel[i]);
    }




}

Dialog::~Dialog()
{
    delete ui;
}
