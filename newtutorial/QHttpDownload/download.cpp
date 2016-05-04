#include "download.h"
#include <QFile>

Download::Download(QObject *parent) : QObject(parent)
{

}

void Download::doDownlaod()
{
    manager = new QNetworkAccessManager(this);



    connect(manager,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(replyFunished(QNetworkReply*)));

manager->get(QNetworkRequest(QUrl("http://bogotobogo.com")));



}

void Download::replyFunished(QNetworkReply *reply)
{
    if(reply->error())
    {
        qDebug()<<"ERROR";
        qDebug()<<reply->errorString();

    }
    else
    {
        qDebug()<<reply->header(QNetworkRequest::ContentTypeHeader);
        qDebug()<<reply->header(QNetworkRequest::LastModifiedHeader);
        qDebug() << reply->header(QNetworkRequest::ContentLengthHeader).toULongLong();
        qDebug() << reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << reply->attribute(QNetworkRequest::HttpReasonPhraseAttribute).toString();

        QFile *file=new QFile("D:/Qt/download.txt");
        if(file->open(QFile::Append))
        {
            file->write(reply->readAll());
            file->flush();
            file->close();
        }
        delete file;

    }

    reply->deleteLater();
}
