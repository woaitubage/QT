#include "mytcpsocket.h"

MyTcpSocket::MyTcpSocket(QObject *parent) : QObject(parent)
{

}

void MyTcpSocket::doConnect()
{
    socket=new QTcpSocket(this);

    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnect()));
    connect(socket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));


    socket->connectToHost("google.com",80);
    if(!socket->waitForConnected(5000))
    {
            qDebug()<<"Error:"<<socket->errorString();
    }


    /*
    socket->connectToHost("google.com",80);

    if(socket->waitForConnected(5000))
    {
        qDebug()<<"Connected!";

        socket->write("Hello serve\r\n\r\n");
        socket->waitForBytesWritten(1000);
        socket->waitForReadyRead(3000);

        qDebug()<<"Reading:"<<socket->bytesAvailable();

        qDebug()<<socket->readAll();
        socket->close();

    }
    else
    {
        qDebug()<<"not connected";

    }


    */





}

void MyTcpSocket::connected()
{
    qDebug()<<"connected ...";
    socket->write("HEAD /HTTP/1.0\r\n\r\n\r\n\r\n");

}


void MyTcpSocket::disconnect()
{
    qDebug()<<"disconnected...";

}

void MyTcpSocket::bytesWritten(qint64 bytes)
{
    qDebug()<<bytes<<"bytes written...";

}

void MyTcpSocket::readyRead()
{
    qDebug()<<"reading...";
    qDebug()<<socket->readAll();
}


