#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDir>


qint64 getitall(const QString &path)
{
    QDir dir(path);//构造初始化
    qint64 size=0;
    foreach(QFileInfo fileinfo,dir.entryInfoList(QDir::Files))
    {
        size+=fileinfo.size();
    }
    foreach(QString subdir,dir.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot)  )
    {
        size+=getitall(path+QDir::separator()+subdir);//递归遍历的作用
    }

    qDebug()<<size<<qPrintable(path);

    return size;



}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QString path="D:\\Users\\tubage\\Documents";
    getitall(path);





    return a.exec();
}
