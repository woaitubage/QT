#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void write(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug()<<"Could you open file for writing";
        return ;
    }

    QTextStream out(&file);  //QTextStream可以自由的read and write
    out<<"QFile Tutorial";
    file.flush();
    file.close();

}

void read(QString filename)
{
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug()<<"could not open the file for reading";
        return;
    }
    QTextStream in(&file);
    QString myText=in.readAll();
    qDebug()<<myText;
    file.close();

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename="D:/Users/tubage/Documents/QT/QT/1.txt";
    write(filename);
    read(filename);




    return a.exec();
}
