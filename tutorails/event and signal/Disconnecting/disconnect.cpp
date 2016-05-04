#include "disconnect.h"
#include "ui_disconnect.h"
#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>


Disconnect::Disconnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Disconnect)
{
    ui->setupUi(this);

    QHBoxLayout *hbox=new QHBoxLayout(this);
    hbox->setSpacing(5);

    clickBtn =new QPushButton("Click",this);
    hbox->addWidget(clickBtn,0,Qt::AlignLeft|Qt::AlignTop);

    QCheckBox *cb=new QCheckBox("Connect",this);
    cb->setCheckState(Qt::Checked);
    hbox->addWidget(cb,0,Qt::AlignLeft|Qt::AlignTop);

    connect(clickBtn,&QPushButton::clicked,this,&Disconnect::onClick);
    connect(cb,&QCheckBox::stateChanged,this,&Disconnect::onCheck);






}

Disconnect::~Disconnect()
{
    delete ui;
}


void Disconnect::onClick()
{
    QTextStream out(stdout);
    out<<"Button clicked"<<endl;
}


void Disconnect::onCheck(int state)
{
    if(state==Qt::Checked)
    {
        connect(clickBtn,&QPushButton::clicked,this,&Disconnect::onClick);

    }
    else
    {
        disconnect(clickBtn,&QPushButton::clicked,this,&Disconnect::onClick);
    }
}
