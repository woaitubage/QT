#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "producer.h"
#include "consumer.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void onBufferValueChanged(int);
    void onProducerValueChanged(int);
    void onConsumerValueChanged(int);


private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    Producer *mProducer;
    consumer *mConsumer;

};

#endif // DIALOG_H
