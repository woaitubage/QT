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

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    QRegExp reg("[A-z]");
    ui->lineEdit->setValidator(new QRegExpValidator(reg,this));
}
