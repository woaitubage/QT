#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    qDebug()<<"Qwriting...";
    QFile file("D:/QT/file.txt");
    file.open(QIODevice::WriteOnly);
    QDataStream out(&file);

    QVariant v(123);
    int x=v.toInt();
    out<<v;
    qDebug()<<v;
    v=QVariant("hello");
    v=QVariant(tr("hello"));
    int y=v.toInt();
    QString s=v.toString();
    out<<v;
    qDebug()<<v;
    file.flush();
    file.close();

    qDebug()<<"Reading";
    file.open(QIODevice::ReadOnly);
    QDataStream in(&file);
    in>>v;
    int z=v.toInt();
    qDebug()<<v;
    in>>v;

    if(v.canConvert<QStringList>())
    {
        qDebug()<<v.toStringList();

    }

    file.close();
*/
    MyClass mClass;
    QVariant v=QVariant::fromValue(mClass);





    return a.exec();
}
