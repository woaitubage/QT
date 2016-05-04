#include "splitter.h"
#include "ui_splitter.h"
#include <QFrame>
#include <QSplitter>
#include <QHBoxLayout>
#include <QHBoxLayout>


Splitter::Splitter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Splitter)
{
    ui->setupUi(this);
    QHBoxLayout *hbox=new QHBoxLayout(this);

    QFrame *topleft=new QFrame(this);
    topleft->setFrameShape(QFrame::StyledPanel);

    QFrame *topright=new QFrame(this);
    topright->setFrameShape(QFrame::StyledPanel);

    QSplitter *splitter =new QSplitter(Qt::Horizontal,this);
    splitter->addWidget(topleft);
    splitter->addWidget(topright);

    QFrame *bottom=new QFrame(this);
    bottom->setFrameShape(QFrame::StyledPanel);

    QSplitter *splitter2=new QSplitter(Qt::Vertical,this);
    splitter2->addWidget(splitter);
    splitter2->addWidget(bottom);

    QList<int>sizes({50,100});
    splitter2->setSizes(sizes); //splitter set vertical to sizes

    hbox->addWidget(splitter2);

}

Splitter::~Splitter()
{
    delete ui;
}
