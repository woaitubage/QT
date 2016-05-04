#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "myclient.h"


class MyServer : public QTcpServer
{
    Q_OBJECT

public:
    MyServer(QObject *parent=0);
    void startServer();

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // MYSERVER_H
