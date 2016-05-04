#include "myclient.h"

MyClient::MyClient(QObject *parent) : QObject(parent)
{
    QThreadPool::globalInstance()->setMaxThreadCount(5);
}

void MyClient::setSocket(qintptr descriptor)
{
    socket=new QTcpSocket(this);

    qDebug()<<"A new socket created!";

    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
       connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
       connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

       socket->setSocketDescriptor(descriptor);

       qDebug() << " Client connected at " << descriptor;

}

// asynchronous - runs separately from the thread we created
void MyClient::connected()
{
    qDebug() << "Client connected event";
}

// asynchronous
void MyClient::disconnected()
{
    qDebug() << "Client disconnected";
}

void MyClient::readyRead()
{
    qDebug()<<"MyClient::readyRead()";
    qDebug()<<socket->readAll();

    MyTask  *mytask=new MyTask();
    mytask->setAutoDelete(true);

     connect(mytask, SIGNAL(Result(int)), this, SLOT(TaskResult(int)), Qt::QueuedConnection);
    qDebug() << "Starting a new task using a thread from the QThreadPool";

    QThreadPool::globalInstance()->start(mytask);
}


void MyClient::TaskResult(int Number)
{
    QByteArray Buffer;
    Buffer.append("\r\nTask result = ");
    Buffer.append(QString::number(Number));

    socket->write(Buffer);
}
