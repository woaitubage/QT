#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemWatcher>  //系统观察
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QFileSystemWatcher fsspy;
    QLabel *label;

private:
    Ui::MainWindow *ui;
    void directoryChanged(QString path);
};

#endif // MAINWINDOW_H
