#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QFileInfo>
#include <QDateTime>

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
    QString str=QFileDialog::getOpenFileName(this,"openfile","/","*.*");
    ui->lineEdit->setText(str);

    QFileInfo info(str);//根据路径初始化
    qint64 size=info.size();
    QDateTime created=info.created();
    QDateTime lastchange=info.lastModified();//最后一次修改时间
    QDateTime lastread=info.lastRead();//最后一次读取时间获取文件时间

    qDebug()<<size<<created<<lastchange<<lastread;

    bool isdir=info.isDir();
    bool isexe=info.isExecutable();
    info.isHidden();
    info.isFile();
    info.isReadable();
    info.isBundle();


}
