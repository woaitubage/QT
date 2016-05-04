#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QLabel *label=new QLabel(&w);//(&w)父宽口
    QString str("liuhaihua");


   // std::string strstd("hello it");
   // label->setText(strstd.c_str());//转换
    str+="cocos2dx";
    label->setText(str);
    label->resize(100,400);
    label->move(50,80);
    label->show();
    return a.exec();
}
