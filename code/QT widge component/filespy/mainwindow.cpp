#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QVBoxLayout>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList args=qApp->arguments();  //参数，获取当前目录
    QString path;
    if(args.count()>1)
    {
        path=args[1];
    }
    else
    {
        path=QDir::currentPath();
    }
    label =new QLabel(this);
    label->setText("spypath"+path);
    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->addWidget(label);
    qDebug()<<path;
    fsspy.addPath(path);
    connect(&fsspy,SIGNAL(directoryChanged(QString)),this,SLOT(directoryChanged(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::directoryChanged(QString path)   //触发监视
{
    QMessageBox::information(NULL,"changes",path);//变化

}
