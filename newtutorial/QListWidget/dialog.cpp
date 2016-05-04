#include "dialog.h"
#include "ui_dialog.h"
#include <QListWidgetItem>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for(int i=0;i<10;i++)
    {
        ui->listWidget->addItem("ITem "+QString::number(i));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QListWidgetItem *item=ui->listWidget->currentItem();
    item->setTextColor(Qt::white);
    item->setBackgroundColor(Qt::blue);
}
