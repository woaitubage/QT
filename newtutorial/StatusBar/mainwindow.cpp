#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusLabel = new QLabel(this);
    statusProgressBar=new QProgressBar(this);

    statusLabel->setText("Status Label");
    statusProgressBar->setTextVisible(false);

    ui->statusBar->addPermanentWidget(statusLabel);
    ui->statusBar->addPermanentWidget(statusProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMyMenuAction_triggered()
{
    ui->statusBar->showMessage("Status");
    statusProgressBar->setValue(51);
}
