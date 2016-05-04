#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QString>
#include <QMap>
#include <QDebug>

void Save()
{
    QString filename="D:/Qt/1.txt";
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"Could not open"<<filename;
        return ;

    }

    int MyPass=999;
    QMap<int,QString> map;
    map.insert(1,"uno");
    map.insert(2,"duo");
    map[3]="tres";

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_6);

    out<<MyPass<<map;  //写入的是map中的value, not key and values
                        //并且是以二进制的形式写入到里面的
    file.flush();
    file.close();

}

void Load()
{
    QString filename="D:/Qt/1.txt";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Could not open1"<<filename;
        return;
    }
    int MyPass;
    QMap<int,QString> map;

    QDataStream in(&file);
    in.setVersion((QDataStream::Qt_5_6));

    in>>MyPass >>map;

    file.close();
    qDebug()<<"MyPass"<<MyPass;
    foreach(QString item,map.values())
    {
        qDebug()<<item;
    }




}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Save();
    Load();



    return a.exec();
}
