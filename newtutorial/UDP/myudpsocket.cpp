#include "myudpsocket.h"

MyUdpSocket::MyUdpSocket(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost,1234);

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

}

void MyUdpSocket::HelloUDP()
{
    QByteArray Data;
    Data.append("Hello from UDP");

    socket->writeDatagram(Data,QHostAddress::LocalHost,1234);//Sends the Data to the host address host and at port port.

}

void MyUdpSocket::readyRead()
{
    QByteArray buffer;
    buffer.resize(socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;

    socket->readDatagram(buffer.data(),buffer.size(),&sender,
                         &senderPort);

    qDebug()<<"Message form"<<sender.toString();
    qDebug()<<"Message port"<<senderPort;
    qDebug()<<"Message:"<<buffer;


}
