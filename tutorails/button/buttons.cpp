#include "buttons.h"
#include "ui_buttons.h"
#include <QVBoxLayout>
#include <QHBoxLayout>


Buttons::Buttons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buttons)
{
    ui->setupUi(this);

    QVBoxLayout *vbox=new QVBoxLayout(this);
    QHBoxLayout *hbox=new QHBoxLayout(this);
    okBtn =new QPushButton("OK",this);
    applyBtn =new QPushButton("Apply",this);

    hbox->addWidget(okBtn,1,Qt::AlignLeft);
    hbox->addWidget(applyBtn,0);

    vbox->addStretch(110);
    vbox->addLayout(hbox);
}

Buttons::~Buttons()
{
    delete ui;
}
