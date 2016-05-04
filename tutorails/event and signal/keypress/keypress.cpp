#include "keypress.h"
#include "ui_keypress.h"


Keypress::Keypress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Keypress)
{
    ui->setupUi(this);
}

Keypress::~Keypress()
{
    delete ui;
}


void Keypress::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_0)
    {
        qApp->quit();
    }

}
