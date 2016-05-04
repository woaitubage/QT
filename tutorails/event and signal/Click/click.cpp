
#include "click.h"
#include "ui_click.h"
#include  <QPushButton>
#include <QHBoxLayout>


Click::Click(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Click)
{
    ui->setupUi(this);
    QHBoxLayout *hbox=new QHBoxLayout(this);
    hbox->setSpacing(50);

    QPushButton *quitBtn=new QPushButton("Quit",this);
    hbox->addWidget(quitBtn,50,Qt::AlignLeft|Qt::AlignTop);

    connect(quitBtn,&QPushButton::clicked,qApp,&QApplication::quit);




}

Click::~Click()
{
    delete ui;
}
