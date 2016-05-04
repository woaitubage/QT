#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QRadioButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}


Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{
    int ret;

    if(ui->radioButton->isChecked())
    {
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        ret=msgBox.exec();
    }
    else  if(ui->radioButton_2->isChecked())
    {
        QMessageBox msgBox;
        msgBox.setText("The Document has been modified.");
        msgBox.setInformativeText("DO you want to save your changes");
        msgBox.setDefaultButton( QMessageBox::Save |
                                 QMessageBox::Discard |
                                 QMessageBox::Cancel);



        msgBox.setDefaultButton(QMessageBox::Save);
        ret=msgBox.exec();

    }
    else
    {
        ret=QMessageBox::warning(this,tr("My Application"),
                                 tr("The document has been modified.\n"),
                                 QMessageBox::Save|
                                 QMessageBox::Discard|
                                 QMessageBox::Cancel|
                                 QMessageBox::Save);

    }

    switch(ret)
    {
    case QMessageBox::Save:
        break;
    case QMessageBox::Discard:
        break;
    case QMessageBox::Cancel:
        break;
    default:
        break;

    }




}
