#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sl=new QStringList();
    sl->append("text天朝任命");
    slm=new QStringListModel(this);
    slm->setStringList(*sl);
    ui->listView->setModel(slm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ifstream input("D:\\dangdangwang.txt");
    if(!input)
    {
        qDebug()<<"open fail";

    }
    else
    {
        qDebug()<<"open success";
    }
    QString qstr=ui->lineEdit->text();
     QByteArray ba=qstr.toLatin1();//转化为二进制
    char *name=ba.data();//转为char *

    while(!input.eof())
    {
        char strpos[500]={0};
        input.getline(strpos,500);
        string str=strpos;
        int pos=str.find(name,0);


        if(pos!=-1)
        {
            sl->append( strpos);

        }
    }

    slm->setStringList(*sl);
    ui->listView->setModel(slm);



    input.close();
}
