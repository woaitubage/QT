#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class MyTcpSocket : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpSocket(QObject *parent = 0);

    void doConnect();

signals:

public slots:
    void connected();
    void disconnect();
    void bytesWritten(qint64 bytes);
    void readyRead();

private:
    QTcpSocket  *socket;


};

#endif // MYTCPSOCKET_H
