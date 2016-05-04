#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pedit=new QTextEdit;
    setCentralWidget(pedit);
    pedit->installEventFilter(this);//过滤
}


MainWindow::~MainWindow()
{
    delete ui;
}


//下面的代码是消息过滤
bool MainWindow::eventFilter(QObject *o, QEvent *e)  //通用的对象指针，通用的事件指针
{

        QKeyEvent *pe=static_cast<QKeyEvent *>(e);

        if(e->type()==QEvent::KeyPress)
        {
            qDebug()<<pe->key();//转化为ASII打印出来
        }

       // return false;  //处理完中断


    if(e->type()==QEvent::KeyPress)
    {
        QKeyEvent *pe=static_cast<QKeyEvent *>(e);

        if(pe->key()==Qt::Key_K &&(Qt::ControlModifier & pe->modifiers()))
        {
            qDebug()<<"control + k";

        }
    }

    return QMainWindow::eventFilter(o,e);  //消息链表
}
