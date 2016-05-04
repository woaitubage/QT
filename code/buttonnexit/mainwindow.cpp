#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMinimumSize(200,100);
    this->setMaximumSize(400,300);

    QPushButton *push=new QPushButton("quit",this);
    push->setGeometry(64,40,76,33);
    push->setFont(QFont("Times",25,QFont::Bold));
    connect(push,SIGNAL(clicked(bool)),qApp,SLOT(quit()));   //程序结构


}

MainWindow::~MainWindow()
{
    delete ui;
}
