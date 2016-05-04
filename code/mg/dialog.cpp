#include "dialog.h"
#include "ui_dialog.h"
#include "mydialog.h"

extern int i;
extern int j;
extern mydialog *p[6][8];

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
    //up
    if(i-1>=0 && p[i-1][j]->id<1)
    {
        p[i][j]->id=0;
        QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        p[i][j]->setPalette(colorit);//设置背景为红色

        i-=1;
        {
            p[i][j]->id=1;
            QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            p[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}

void Dialog::on_pushButton_4_clicked()
{
    //down
    if(i+1<6 && p[i+1][j]->id<1)
    {
       p[i][j]->id=0;
        QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        p[i][j]->setPalette(colorit);//设置背景为红色

        i+=1;
        {
            p[i][j]->id=1;
            QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            p[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}

void Dialog::on_pushButton_2_clicked()
{
    //left
    if(j-1>=0 && p[i][j-1]->id<1)
    {
      p[i][j]->id=0;
        QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        p[i][j]->setPalette(colorit);//设置背景为红色

        j-=1;
        {
            p[i][j]->id=1;
            QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            p[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}

void Dialog::on_pushButton_3_clicked()
{
    //right
    if(j+1>=0 && p[i][j+1]->id<1)
    {
    p[i][j]->id=0;
        QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        p[i][j]->setPalette(colorit);//设置背景为红色

        j+=1;
        {
            p[i][j]->id=1;
            QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            p[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}
