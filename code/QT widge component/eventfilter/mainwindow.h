#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QEvent>
#include <QtEvents>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool eventFilter(QObject *, QEvent *);  //通用得对象指针，通用得事件指针


private:
    Ui::MainWindow *ui;

    QTextEdit *pedit;

};

#endif // MAINWINDOW_H
