#include "checkable.h"
#include "ui_checkable.h"
#include <QMenu>

Checkable::Checkable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Checkable)
{
     ui->setupUi(this);
     viewst=new QAction("&View statusbar",this);
     viewst->setCheckable(true);

    viewst->setChecked(true);

    QMenu *file;
    file=menuBar()->addMenu("&File");
    file->addAction(viewst);

    statusBar();
    connect(viewst,&QAction::triggered,this,&Checkable::toggleStatusbar);


}



Checkable::~Checkable()
{
    delete ui;
}

void Checkable::toggleStatusbar()
{
    if(viewst->isChecked())
    {
        statusBar()->show();

    }
    else
    {
        statusBar()->hide();
    }
}
