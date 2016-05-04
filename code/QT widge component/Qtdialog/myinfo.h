#ifndef MYINFO_H
#define MYINFO_H
#include <QDialog>
#include <QWidget>
#include <QLineEdit>

class myinfo : public QDialog
{

public:
    myinfo(QWidget *parent=0);
    QString str;
    QLineEdit *pline;
    QPushButton *qpush;

private slots:
    void go();
};

#endif // MYINFO_H
