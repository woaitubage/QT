#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

#include <QDebug>
#include <QTextCodec>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    QString allstr="";
    QFile file("D:\\Users\\tubage\\Documents\\QT\\code\\QT widge component\\qtfile\\file\\1.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        char buf[2048]={0};
        while(file.readLine(buf,2048)!=-1)
        {

            allstr+=buf;
        }

    }
    else
    {
        qDebug()<<"open fail";
    }
    ui->textEdit->setText(allstr);
    */

     QFile file("D:\\Users\\tubage\\Documents\\QT\\code\\QT widge component\\qtfile\\file\\1.txt");
     if(file.open(QFile::WriteOnly | QFile::Truncate))//这个是文件流的作用
     {
        QTextStream out(&file);//创建文件流
        out<<"12345"<<678<<123.3;
     }








}

MainWindow::~MainWindow()
{
    delete ui;
}
