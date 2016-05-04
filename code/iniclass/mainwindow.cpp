#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const char *str,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}
