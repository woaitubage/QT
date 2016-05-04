#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file("1.bin");
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QDataStream out(&file);
    out<<"hello"<<1987<<'A';  //写入到文件中
    file.close();

    file.setFileName("1.bin");
    if(file.open(QIODevice::ReadOnly))
    {
        QDataStream in(&file);
        QString str;
        qint16 data;
        QChar ch;
        in>>str>>data>>ch;
        qDebug()<<str<<data<<ch;
    }





    MainWindow w;
    w.show();

    return a.exec();
}
