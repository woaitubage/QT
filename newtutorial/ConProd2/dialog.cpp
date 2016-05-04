#include "dialog.h"
#include "ui_dialog.h"
#include "myconstants.h"
#include <QSemaphore>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->progressBar->setRange(0,DataSize);
    ui->progressBar_2->setRange(0,DataSize);
    ui->progressBar_3->setRange(0,BufferSize);


    mProducer = new Producer(this);
    mConsumer = new consumer(this);

    connect(mConsumer,SIGNAL(bufferFillCountChanged(int)),this,
            SLOT(onBufferValueChanged(int)));
    connect(mProducer,SIGNAL(bufferFillCountChanged(int)),this,
            SLOT(onBufferValueChanged(int)));

    connect(mConsumer, SIGNAL(consumerCountChanged(int)),
                 this, SLOT(onConsumerValueChanged(int)));
       connect(mProducer, SIGNAL(producerCountChanged(int)),
                 this, SLOT(onProducerValueChanged(int)));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onBufferValueChanged(int bCount)
{
    ui->progressBar_3->setValue(bCount);

}

void Dialog::onProducerValueChanged(int pCount)
{
    ui->progressBar->setValue(pCount);

}

void Dialog::onConsumerValueChanged(int oCount)
{
    ui->progressBar_2->setValue(oCount);
}

void Dialog::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(false);
    mProducer->start();
    mConsumer->start();
}
