#include "mybutton.h"
#include "ui_mybutton.h"
#include <QPushButton>

MyButton::MyButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyButton)
{
    ui->setupUi(this);

    QPushButton *quitBtn=new QPushButton("Quit",this);
    quitBtn->setGeometry(50,40,175,130);//前两个是参数是位置，后两个大小
    connect(quitBtn,&QPushButton::clicked,QApplication::quit);




}

MyButton::~MyButton()
{
    delete ui;
}
