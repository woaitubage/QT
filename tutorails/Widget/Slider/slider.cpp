#include "slider.h"
#include "ui_slider.h"
#include <QHBoxLayout>

Slider::Slider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Slider)
{
    ui->setupUi(this);

    QHBoxLayout *hbox=new QHBoxLayout(this);

    slider=new QSlider(Qt::Horizontal,this);
    hbox->addWidget(slider);

    label =new QLabel("0",this);
    hbox->addWidget(label);

    connect(slider,&QSlider::valueChanged,label,static_cast<void(QLabel::*)(int)>(&QLabel::setNum));



}

Slider::~Slider()
{
    delete ui;
}
