#include "consumer.h"
#include "common.h"

consumer::consumer(QObject *parent):QThread(parent)
{

}

void consumer::run()
{
    for(int i=0;i<DataSize;++i)
    {
        usedBytes.acquire();
        fprintf(stderr,"%c",buffer[i%BufferSize]);
        freeBytes.release();
        emit bufferFillCountChanged(usedBytes.available());
        emit consumerCountChanged(i);
    }

    fprintf(stderr,"\n");
}


