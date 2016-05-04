#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "op.h"
#include "QDebug"

//了解界面的输入输出，
//数据类型转换
//封装
//写类.
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
    go();
}

void MainWindow::go()
{

    op ops;
    QObject *pobject=&ops;

    bool isok;
    QString str1=ui->lineEdit->text();
    QString str2=ui->lineEdit_2->text();
    QString str3=ui->lineEdit_3->text();
    QString str4;//保存结果
    int a=str1.toInt(&isok,10);
    qDebug()<<isok;
    int b=str2.toInt(&isok,10);
    qDebug()<<isok;
    qDebug()<<a<<" "<<b;
    ops.seta(a);
    ops.setb(b);


    if(str3==op1)
    {
        str4.sprintf("%d",ops.add());
    }
    else if(str3==op2)
    {
        str4.sprintf("%d",ops.sub());
    }
    else if(str3==op3)
    {
         str4.sprintf("%d",ops.mul());
    }
    else if(str3==op4)
    {
         str4.sprintf("%d",ops.divv());
    }

    ui->textEdit->setText(str4);
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    bool isok;
    QString str1=ui->lineEdit->text();
    int a=str1.toInt(&isok,10);
    if(!isok)
    {
        ui->lineEdit->clear();
    }
}
