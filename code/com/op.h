#ifndef OP_H
#define OP_H

#include <QObject>

class op : public QObject
{
    Q_OBJECT
public:
    explicit op(QObject *parent = 0);
    int add();
    int sub();
    int mul();
    int divv();
    void seta(int data);
    void setb(int data);
    int geta();
    int getb();

signals:

public slots:

private:
    int a;
    int b;

};

#endif // OP_H
