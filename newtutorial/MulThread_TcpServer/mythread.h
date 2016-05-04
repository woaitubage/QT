#ifndef MYTHREAD_H
#define MYTHREAD_H


#include <QThread>
#include <QTcpSocket>
#include <QObject>


class MyThread : public QObject,public QThread
{
    Q_OBJECT
public:
    MyThread(qintptr ID,QObject *parent=0);
    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;

public slots:
    void readyRead();
    void disconnect();

};

#endif // MYTHREAD_H
