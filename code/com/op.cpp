#include "op.h"

op::op(QObject *parent) : QObject(parent)
{

}
int op::add()
{
    return a+b;
}
int op::sub()
{
    return a-b;
}
int op::mul()
{
    return a*b;
}

int op::divv()
{
    return a/b;
}

void op::seta(int data)
{
    a=data;

}
void op::setb(int data)
{
    b=data;
}
int op::geta()
{
    return a;
}
int op::getb()
{
    return b;
}
