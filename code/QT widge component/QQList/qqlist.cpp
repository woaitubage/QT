#include "qqlist.h"
#include <QGroupBox>
#include <QVBoxLayout>

qqlist::qqlist(QWidget *parent,Qt::WindowFlags f):QToolBox(parent,f)
{
    {
        t1=new QToolButton;
        t1->setText("haihua");
        t1->setIcon(QPixmap("..\\pic\\1.png"));
        t1->setIconSize(QSize(100,100));
        t1->setAutoRaise(true);
        t1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        t2=new QToolButton;
        t2->setText("haihua");
        t2->setIcon(QPixmap("..\\pic\\1.png"));
        t2->setIconSize(QSize(100,100));
        t2->setAutoRaise(true);
        t2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);


        t3=new QToolButton;
        t3->setText("haihua");
        t3->setIcon(QPixmap("..\\pic\\1.png"));
        t3->setIconSize(QSize(100,100));
        t3->setAutoRaise(true);
        t3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        t4=new QToolButton;
        t4->setText("haihua");
        t4->setIcon(QPixmap("..\\pic\\1.png"));
        t4->setIconSize(QSize(100,100));
        t4->setAutoRaise(true);
        t4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    }

    {
        s1=new QToolButton;
        s1->setText("haihua");
        s1->setIcon(QPixmap("..\\pic\\1.png"));
        s1->setIconSize(QSize(100,100));
        s1->setAutoRaise(true);
        s1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        s2=new QToolButton;
        s2->setText("haihua");
        s2->setIcon(QPixmap("..\\pic\\1.png"));
        s2->setIconSize(QSize(100,100));
        s2->setAutoRaise(true);
        s2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);


        s3=new QToolButton;
        s3->setText("haihua");
        s3->setIcon(QPixmap("..\\pic\\1.png"));
        s3->setIconSize(QSize(100,100));
        s3->setAutoRaise(true);
        s3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        s4=new QToolButton;
        s4->setText("haihua");
        s4->setIcon(QPixmap("..\\pic\\1.png"));
        s4->setIconSize(QSize(100,100));
        s4->setAutoRaise(true);
        s4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    }
    QGroupBox *g1=new QGroupBox;
    QVBoxLayout *l1=new QVBoxLayout(g1);
    l1->setMargin(Qt::AlignHCenter);//竖着为中心
    l1->addWidget(t1);
    l1->addWidget(t2);
    l1->addWidget(t3);
    l1->addWidget(t4);
    l1->addWidget(t5);

    l1->addStretch();

    QGroupBox *g2=new QGroupBox;
    QVBoxLayout *l2=new QVBoxLayout(g2);
    l2->setMargin(Qt::AlignHCenter);//竖着为中心
    l2->addWidget(s1);
    l2->addWidget(s2);
    l2->addWidget(s3);
    l2->addWidget(s4);
    l2->addWidget(s5);

    l2->addStretch();
    this->addItem((QWidget *) g1,tr("hello"));
    this->addItem((QWidget *) g2,tr("hello hi"));
}
