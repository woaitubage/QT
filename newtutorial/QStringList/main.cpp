#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str="A,B,C,D,E,F,G";
    qDebug()<<"QString str="<<str;


    QStringList List;
    qDebug()<<"split str using ',' as a delimeter";
    List=str.split(",");
    qDebug()<<"List = "<<List;
    foreach(QString item,List);
    qDebug()<<"List items = "<<item;

    qDebug()<<"Replace one of the List item";
    List.replace(2,"CCC");
    qDebug()<<"List = "<<List;

    qDebug()<<"Join all items in the List";
    QString joinedString  = List.join(",");
    qDebug()<<"joined string = "<<joinedString;




    return a.exec();
}
