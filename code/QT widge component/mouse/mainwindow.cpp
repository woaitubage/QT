#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        this->setWindowTitle("left press");

    }
    else if(e->button()==Qt::RightButton)
    {
        this->setWindowTitle("right press");
    }
    else if(e->button()==Qt::MidButton)
    {
        this->setWindowTitle("mid press");
    }






}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    this->setWindowTitle(QString::number(e->x())+","+QString::number(e->y()));

}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    this->setWindowTitle("Release"+QString::number(e->x())+","+QString::number(e->y()));
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *e)
{
     this->setWindowTitle("DoubleClick"+QString::number(e->x())+","+QString::number(e->y()));
}
