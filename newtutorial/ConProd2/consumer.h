#ifndef CONSUMER_H
#define CONSUMER_H

#include <QThread>

class consumer : public QThread
{
    Q_OBJECT

public:
    consumer(QObject *parent=0);
    void run();

signals:
    void bufferFillCountChanged(int cCount);
    void consumerCountChanged(int count);


};

#endif // CONSUMER_H
