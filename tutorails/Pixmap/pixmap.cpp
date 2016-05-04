#include "pixmap.h"
#include "ui_pixmap.h"
#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>


Pixmap::Pixmap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pixmap)
{
    ui->setupUi(this);

    QHBoxLayout *hbox=new QHBoxLayout(this);
    QPixmap pixmap("1.png");

    QLabel *label=new QLabel(this);
    label->setPixmap(pixmap);

    hbox->addWidget(label,0,Qt::AlignTop);

}

Pixmap::~Pixmap()
{
    delete ui;
}
