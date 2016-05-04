#include "move.h"
#include "ui_move.h"

Move::Move(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Move)
{
    ui->setupUi(this);
}

Move::~Move()
{
    delete ui;
}


void Move::moveEvent(QMoveEvent *e)
{
    int x=e->pos().x();
    int y=e->pos().y();

    QString text=QString::number(x)+","+QString::number(y);
    setWindowTitle(text);
}
