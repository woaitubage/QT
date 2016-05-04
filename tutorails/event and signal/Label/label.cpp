#include "label.h"
#include "ui_label.h"
#include <QFont>
#include <QVBoxLayout>

Label::Label(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Label)
{
    ui->setupUi(this);
    QString lyrics = "Who doesn't long for someone to hold\n\
    Who knows how to love you without being told\n\
    Somebody tell me why I'm on my own\n\
    If there's a soulmate for everyone\n\
    \n\
    Here we are again, circles never end\n\
    How do I find the perfect fit\n\
    There's enough for everyone\n\
    But I'm still waiting in line\n\
    \n\
    Who doesn't long for someone to hold\n\
    Who knows how to love you without being told\n\
    Somebody tell me why I'm on my own\n\
    If there's a soulmate for everyone";

    label =new QLabel(lyrics,this);
    label->setFont(QFont("Purisa",10,-1,true));

    QVBoxLayout *vbox=new QVBoxLayout();
    vbox->addWidget(label);
    setLayout(vbox);



}

Label::~Label()
{
    delete ui;
}
