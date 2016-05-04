#include "dialog.h"
#include "ui_dialog.h"
#include <QGridLayout>  //布局
#define PI 3.1415926535


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    button =new QPushButton(this);//添加this显示在当前窗口
    button->setText(tr("go海华"));
    button->resize(100,100);

    edit1=new QLineEdit(this);
    edit2=new QLineEdit(this);
    label1=new QLabel(this);
    label1->setText("输入半径");

    label2=new QLabel(this);
    label2->setText("求出面积");


    QGridLayout *mylayout=new QGridLayout(this);  //根据 网格布局
    mylayout->addWidget(label1,0,0);
    mylayout->addWidget(label2,1,0);
    mylayout->addWidget(edit1,0,1);
    mylayout->addWidget(edit2,1,1);
    mylayout->addWidget(button,2,0);



    //clicjed(bool)触发作用
    connect(button,SIGNAL(clicked(bool)),this,SLOT(showit()));//关联
    connect(edit1,SIGNAL(textChanged(QString)),this,SLOT(showit()));

}

Dialog::~Dialog()
{
    delete ui;
}


 void Dialog::showit()
 {
     //edit2->setText("12345");
     bool isok;
     QString vstr=edit1->text();//获取文本输入
     int value=vstr.toInt(&isok);//表示一下转换是否成功
     double area=value*value*PI;
     QString tempstr;
     edit2->setText(tempstr.setNum(area));

 }
