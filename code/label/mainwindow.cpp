#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"is run";
    QString qstr1 = ui->lineEdit->text();
    QString qstr2 = ui->lineEdit_2->text() ;
    QString qstr3;
   // qstr3.sprintf("%s+%s",qstr1,qstr2);
    qstr3=qstr2+qstr1;
    ui->textEdit->setText(qstr3);

}

void MainWindow::on_commandLinkButton_clicked()
{
    QString qstr3;
    qstr3=QString("%1 is %2 ").arg("haihua").arg("gav");
    ui->textEdit->setText(qstr3);
}
