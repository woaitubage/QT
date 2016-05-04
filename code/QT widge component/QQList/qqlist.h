#ifndef QQLIST_H
#define QQLIST_H
#include <QToolBox>
#include <QToolButton>
#include <QWidget>


class qqlist : public QToolBox
{
    Q_OBJECT

public:

    qqlist(QWidget *parent=0,Qt::WindowFlags f=0);

private:
    QToolButton *t1;
    QToolButton *t2;
    QToolButton *t3;
    QToolButton *t4;
    QToolButton *t5;

    QToolButton *s1;
    QToolButton *s2;
    QToolButton *s3;
    QToolButton *s4;
    QToolButton *s5;


};

#endif // QQLIST_H
