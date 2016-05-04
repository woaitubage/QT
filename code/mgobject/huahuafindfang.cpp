#include "huahuafindfang.h"

huahuafindfang::huahuafindfang(int w,int d)
{
    width=w;
    depth=d;//设置长度与宽度
    this->ppp=new mydialog**[this->depth];//开辟二级指针数组
    for(int i=0;i<this->depth;i++)
    {
        this->ppp[i]=new mydialog*[this->width];//分配指针数组
        for(int j=0;j<this->width;j++)
        {
            this->ppp[i][j]=new mydialog;
            this->ppp[i][j]->resize(80,80);
            this->ppp[i][j]->move(i*100,j*100);
            this->ppp[i][j]->show();

            QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::white);
            this->ppp[i][j]->setPalette(colorit);//设置背景为红色
            this->ppp[i][j]->id=0;//设置背景为红色
        }
    }

    QPalette colorit(this->ppp[1][1]->palette());//创建一个类，设置背景为红色
    colorit.setColor(QPalette::Background,Qt::red);
    this->ppp[1][1]->setPalette(colorit);//设置背景为红色
    this->ppp[1][1]->id=1;
    this->i=1;
    this->j=1;
}


huahuafindfang::~huahuafindfang()
{
    for(int i=0;i<this->depth;i++)
    {
        this->ppp[i]=new mydialog*[this->width];//分配指针数组
        for(int j=0;j<this->width;j++)
        {
            delete this->ppp[i][j];

        }
        delete []this->ppp[i];
    }
    delete [] this->ppp;

}





void huahuafindfang::up()
{

    if(i-1>=0 && ppp[i-1][j]->id<1)
    {
        ppp[i][j]->id=0;
        QPalette colorit( ppp[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
       ppp[i][j]->setPalette(colorit);//设置背景为红色

        i-=1;
        {
             ppp[i][j]->id=1;
            QPalette colorit( ppp[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            ppp[i][j]->setPalette(colorit);//设置背景为红色
        }
    }


}

void huahuafindfang::down()
{
    if(i+1<=depth &&  this->ppp[i+1][j]->id<1)
    {
       this->ppp[i][j]->id=0;
        QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        this->ppp[i][j]->setPalette(colorit);//设置背景为红色

        i+=1;
        {
            this->ppp[i][j]->id=1;
            QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            this->ppp[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}

void huahuafindfang::left()
{
    if(j-1>=0 && this->ppp[i][j-1]->id<1)
    {
      this->ppp[i][j]->id=0;
        QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        this->ppp[i][j]->setPalette(colorit);//设置背景为红色

        j-=1;
        {
            this->ppp[i][j]->id=1;
            QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            this->ppp[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}

void huahuafindfang::right()
{
    if(j+1<=this->width &&  this->ppp[i][j+1]->id<1)
    {
    this->ppp[i][j]->id=0;
        QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::white);
        this->ppp[i][j]->setPalette(colorit);//设置背景为红色

        j+=1;
        {
            this->ppp[i][j]->id=1;
            QPalette colorit(this->ppp[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::red);
            this->ppp[i][j]->setPalette(colorit);//设置背景为红色
        }
    }
}


 void huahuafindfang::setnoturn(int x,int y)
{
    if((x>=0 && x<depth)  && (y>=0 && y<width))
    {
        ppp[x][y]->id=2;
        QPalette colorit(this->ppp[x][y]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::black);
        this->ppp[x][y]->setPalette(colorit);//设置背景为红色

    }



 }







