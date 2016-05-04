#include "progressbar.h"
#include "ui_progressbar.h"
#include <QGridLayout>
#include <QTimer>
#include <QDebug>

ProgressBar::ProgressBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgressBar)
{
    ui->setupUi(this);
    progress=0;
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&ProgressBar::updateBar);

    QGridLayout *grid=new QGridLayout(this);
    grid->setColumnStretch(2,1);

    pbar=new QProgressBar();
    grid->addWidget(pbar,0,0,1,3);

    startBtn =new QPushButton("start",this);
    connect(startBtn,&QPushButton::clicked,this,&ProgressBar::startMyTimer);
    grid->addWidget(startBtn,1,0,1,1);
qDebug()<<"什么情况";
    stopBtn =new QPushButton("stop",this);
    connect(stopBtn,&QPushButton::clicked,this,&ProgressBar::stopMyTimer);
    grid->addWidget(stopBtn,1,1);


}


void ProgressBar::startMyTimer()
{
    if(progress>=MAX_VALUE)
    {
        progress=0;
        pbar->setValue(0);

    }
    if(!timer->isActive())
    {
        startBtn->setEnabled(false);
        stopBtn->setEnabled(true);
        timer->start(DELAY);

    }
}

void ProgressBar::stopMyTimer()
{
    if(timer->isActive())
    {
        startBtn->setEnabled(true);
        stopBtn->setEnabled(false);
        timer->stop();

    }
}

void ProgressBar::updateBar()
{
    progress++;
    if(progress<=MAX_VALUE)
    {
        pbar->setValue(progress);

    }
    else
    {
        timer->stop();
        startBtn->setEnabled(true);
        stopBtn->setEnabled(false);
    }
}

ProgressBar::~ProgressBar()
{
    delete ui;
}
