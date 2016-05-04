#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QTcpServer>


class MyServer : public QTcpServer
{
public:
    MyServer(QObject *parent=0);
    void startServer();

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // MYSERVER_H
