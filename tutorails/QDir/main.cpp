#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path="D:/Qt";
    QDir dir(path);
 /*   if(!dir.exists())
    {
        qDebug()<<"D;/Qt1 directory is not exit";
        dir.mkpath(path);
    }
    else
    {
        qDebug()<<"D;/Qt1 directory is exit";
    }
*/
    QDir dir3(path);
    foreach(QFileInfo item,dir3.entryInfoList())
    {
        if(item.isDir())
        {
            qDebug()<<"Dir:"<<item.absoluteFilePath();

        }
        if(item.isFile())
        {
            qDebug()<<"File"<<item.absoluteFilePath();
        }
    }

    return a.exec();
}
