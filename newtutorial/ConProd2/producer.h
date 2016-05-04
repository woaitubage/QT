#ifndef PRODUCER_H
#define PRODUCER_H

#include <QThread>

class Producer : public QThread
{
    Q_OBJECT

public:
    Producer(QObject *parent=0);
    void run();

signals:
    void bufferFillCountChanged(int bCout);
    void producerCountChanged(int count);

};

#endif // PRODUCER_H
