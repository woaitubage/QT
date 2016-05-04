#include "cursors.h"
#include "ui_cursors.h"

Cursors::Cursors(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cursors)
{
    ui->setupUi(this);

    QFrame *framel = new QFrame(this);
    framel->setFrameStyle(QFrame::Box);
    framel->setCursor(Qt::SizeAllCursor);

    QFrame *frame2=new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);
    frame2->setCursor(Qt::WaitCursor);

    QFrame *frame3=new QFrame(this);
    frame3->setFrameStyle(QFrame::Box);
    frame3->setCursor(Qt::PointingHandCursor);

    QGridLayout *grid=new QGridLayout(this);
    grid->addWidget(framel,0,0);
    grid->addWidget(frame2,0,1);
    grid->addWidget(frame3,0,2);

    setLayout(grid);


}

Cursors::~Cursors()
{
    delete ui;
}
