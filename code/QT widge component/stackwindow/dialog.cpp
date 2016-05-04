#include "dialog.h"
#include "ui_dialog.h"
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    list =new QListWidget(this);
    list->insertItem(0,"win1");
    list->insertItem(1,"win2");
    list->insertItem(2,"win3");
      list->insertItem(3,"win4");

    label1=new QLabel("win1");
    label2=new QLabel("win2");
    label3=new QLabel("win3");
      label4=new QLabel("win4");

    stack =new QStackedWidget(this);
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
     stack->addWidget(label4);

    QHBoxLayout *qh1=new QHBoxLayout(this);
    qh1->setMargin(5);  //最多5个数量
    qh1->setSpacing(5);  //最多5个内存
    qh1->addWidget(list);
    qh1->addWidget(stack,0,Qt::AlignHCenter);
    qh1->setStretchFactor(list,1);
    qh1->setStretchFactor(stack,4);//第二个参数表示数量

    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

}

Dialog::~Dialog()
{
    delete ui;
}
