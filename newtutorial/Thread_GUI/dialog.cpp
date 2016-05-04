#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mThread=new MyThread(this);

    connect(mThread,SIGNAL(valueChanged(int)),this,
            SLOT(onValueChanged(int)));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onValueChanged(int count)
{
    ui->label->setText(QString::number(count));

}

void Dialog::on_pushButton_clicked()
{
    mThread->start();  //thread is started by calling run()
}

void Dialog::on_pushButton_2_clicked()
{
    mThread->Stop=true;
}
