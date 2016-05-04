#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QPushButton>
#include <QLineEdit>
#include <QLabel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

    //图形控件
    QLabel *label1,*label2;
    QLineEdit *edit1,*edit2;
    QPushButton *button;
private slots:  //函数触发机制
    void showit();
};

#endif // DIALOG_H
