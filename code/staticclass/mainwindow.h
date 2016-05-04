#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    static void setnum(int data)
    {
        num=data;
    }

    static int getnum()
    {
        return num;
    }

private:
    Ui::MainWindow *ui;
protected:
    static int num;


};

#endif // MAINWINDOW_H
