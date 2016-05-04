#include "simplemenu.h"
#include "ui_simplemenu.h"
#include <QAction>
#include <QMenu>

simplemenu::simplemenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::simplemenu)
{
    ui->setupUi(this);
    QAction *quit=new QAction("&Quit",this);

    QMenu *file;
    file=menuBar()->addMenu("&file");
    file->addAction(quit);

    connect(quit,&QAction::triggered,this,QApplication::quit);

}

simplemenu::~simplemenu()
{
    delete ui;
}
