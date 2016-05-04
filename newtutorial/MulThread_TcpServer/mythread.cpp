#include "mythread.h"

MyThread::MyThread(qintptr ID,QObject *parent)
{
    this->socketDescriptor=ID;

}

void MyThread::run()
{
    qDebug()<<"Thread started";

    socket=new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        //emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
     connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    qDebug() << socketDescriptor << " Client connected";

    // make this thread a loop,
        // thread will stay alive so that signal/slot to function properly
        // not dropped out in the middle when thread dies

    exec();
}

void MyThread::readyRead()
{
    QByteArray Data=socket->readAll();
    qDebug()<<socketDescriptor<<"Data in:"<<Data;

    socket->write(Data);

}

void MyThread::disconnect()
{
    qDebug()<<socketDescriptor<<"Disconnected";

    socket->deleteLater();
    exit(0);

}

