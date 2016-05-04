#ifndef HUAHUAFINDFANG_H
#define HUAHUAFINDFANG_H
#include "mydialog.h"



class huahuafindfang
{
public:
    int i;
    int j;//位置x,y

    int width;
    int depth;//数组的宽度和深度

    mydialog ***ppp;//

    huahuafindfang(int w,int d);
   ~huahuafindfang();

    void setnoturn(int x,int y);

    void up();
    void down();
    void left();
    void right();


};


#endif // HUAHUAFINDFANG_H
