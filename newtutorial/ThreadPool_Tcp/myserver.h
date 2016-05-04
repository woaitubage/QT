#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QThreadPool>
#include <QDebug>
class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    MyServer(QObject *parent=0);
    void startServer();

protected:
    void incomingConnection(qintptr handle);

private:
    QThreadPool *pool;

};

#endif // MYSERVER_H
