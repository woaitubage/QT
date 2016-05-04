
#include <QApplication>
#include <QPushButton>

class buttons
{
    QPushButton *p;
    int n;
public:

    buttons():n(10)
    {
        p=new QPushButton[10];
        for(int i=0;i<10;i++)
        {
            p[i].resize(100,100);
            p[i].move(i*100,i*100);
            p[i].show();
        }
    }
    ~buttons()
    {
     delete []p;
    }

    QPushButton * operator[](int i)
    {
        if(i>=0 && i<=n-1)
        {
            return this->p+i;
        }
    }


    QPushButton * operator*()
    {
        return this->p;


    }

    QPushButton * operator->()
    {
        return this->p+5;


    }

    QPushButton * operator->*(int i)
    {
        return this->p+i;

    }

    QPushButton * operator->*(const char *str)
    {
        return this->p;

    }


};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    buttons bs;

    //bs[3]->hide();
    //(*bs)->hide();
    //bs->hide();
    (bs->*("hello world"))->hide();
    return a.exec();
}
