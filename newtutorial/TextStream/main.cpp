#include <QCoreApplication>
#include<QTextStream>
#include<QFile>
#include <QDebug>

void write()
{
    QFile file("D:/Qt/1.txt");
    if(file.open(QIODevice::WriteOnly |QIODevice::Text))
    {
        QTextStream stream(&file);
        stream<<"Debug\n";
        stream<<"Rabel\n";

        file.close();
        qDebug()<<"Writing finished";

    }
}

void read()
{
    QFile file("D:/Qt/1.txt");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
       QTextStream stream(&file);

       QString line;
       do
       {
           line=stream.readLine();
           qDebug()<<line;

       }while(!line.isNull());
       file.close();
       qDebug()<<"Reading finished";

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    write();
    read();


    return a.exec();
}
