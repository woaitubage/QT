#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QNetworkReply>
#include <QDateTime>
#include <QFile>
#include <QDebug>

class Download : public QObject
{
    Q_OBJECT
public:
    explicit Download(QObject *parent = 0);

    void doDownlaod();

signals:

public slots:
    void replyFunished(QNetworkReply *reply);


public:
    QNetworkAccessManager *manager;
};

#endif // DOWNLOAD_H
