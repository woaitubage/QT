#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextEdit *tp=new QTextEdit(this);
    tp->setText("this is haihua1");
    tp->setAlignment(Qt::AlignHCenter);
    setCentralWidget(tp);//设置当前窗体为中央窗体

    {

        QDockWidget *dock1=new QDockWidget("QDockWidget1");
        dock1->setFeatures(QDockWidget::DockWidgetMovable); //可以移动
        dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

        QTextEdit *tp1=new QTextEdit(this);
        tp1->setText("this is haihua2");
        tp1->setAlignment(Qt::AlignHCenter);
        dock1->setWidget(tp1);//从属关系
        addDockWidget(Qt::RightDockWidgetArea,dock1);
    }

    {

        QDockWidget *dock1=new QDockWidget("QDockWidget2");
        dock1->setFeatures(QDockWidget::DockWidgetMovable); //可以移动
        dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

        QTextEdit *tp1=new QTextEdit(this);
        tp1->setText("this is haihua2");
        tp1->setAlignment(Qt::AlignHCenter);
        dock1->setWidget(tp1);//从属关系
        addDockWidget(Qt::RightDockWidgetArea,dock1);
    }

    {

        QDockWidget *dock1=new QDockWidget("QDockWidget3");
        dock1->setFeatures(QDockWidget::DockWidgetMovable); //可以移动
        dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

        QTextEdit *tp1=new QTextEdit(this);
        tp1->setText("this is haihua3");
        tp1->setAlignment(Qt::AlignHCenter);
        dock1->setWidget(tp1);//从属关系
        addDockWidget(Qt::RightDockWidgetArea,dock1);
    }




}

MainWindow::~MainWindow()
{
    delete ui;
}
