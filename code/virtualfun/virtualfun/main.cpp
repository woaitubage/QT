#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class showhide
{
public:
    virtual void showorhide()=0;
};

class button: public QPushButton,public showhide
{
public:
    void showorhide()
    {
        this->show();
    }

};

class edit: public QLineEdit,public showhide
{
public:
    void showorhide()
    {
        this->show();
    }

};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //howhide sh1;

    button b1;
    b1.showorhide();
    return a.exec();
}
