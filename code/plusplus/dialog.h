#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void setxy(int a,int b)
    {
        this->x=a;
        this->y=b;
        this->resize(this->x,this->y);

    }

    Dialog *operator ++()
    {
        this->x+=30;
        this->y+=30;
        setxy(this->x,this->y);
        return this;//先自增，在引用
    }

    Dialog *operator ++(int)
    {
        Dialog* temp=new Dialog;
        temp->x=this->x;
        temp->y=this->y;
        temp->resize(temp->x,temp->y);
        temp->show();
        temp->setWindowTitle("temp");

        this->x+=30;
        this->y+=30;
        return temp;
    }


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    int x;\
    int y;

};

#endif // DIALOG_H
