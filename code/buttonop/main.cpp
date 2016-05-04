
#include <QApplication>
#include <QPushButton>
#include <QDebug>
//重载的三种形式，成员函数重载,
//友元函数，涉及私有或者保护变量
//一般函数重载，都是公有变量



class button
{
    QPushButton *p;
    int x,y;
    friend void operator *(button &button1,int n);
    friend void operator *(int n,button & button1);
public:

    button():x(500),y(400)
    {
        p=new QPushButton;
        p->resize(x,y);
        p->show();

    }
    ~button()
    {

    }

    bool operator <(button&button1)
    {
        return this->x*this->y<button1.x*button1.y;
    }


};

void operator *(button & button1,int n)
{
    button1.x*=n;
    button1.y*=n;
    button1.p->resize(button1.x,button1.y);

}


void operator *(int n,button & button1)
{
    button1.x*=n;
    button1.y*=n;
    button1.p->resize(button1.x,button1.y);

}

/*void operator =(button & button1)
{
    //　＝　［］　（）－＞一定不能用友元函数，外部函数

}*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    button b1;
   // b1*3;
    button b2;
    3*b1;

    qDebug()<<(b1<b2)<<endl;

    return a.exec();
}
