#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include <QMessageBox>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString filename;
    QTextEdit *text;
    QMenu *file;
    QAction *Afile_open;
    QAction *Afile_close;
    QAction *Afile_save;
    QAction *Afile_exit;


    QMenu *edit;
    QAction *Aedit_selall;
    QAction *Aedit_cut;
    QAction *Aedit_copy;
    QAction *Aedit_paste;

    QMenu *build;
    QAction *Abuild_it;
    QAction *Abuild_andrus;

    QMenu *about;
    QAction *Aabout_it;


private slots:
    void file_open();
    void file_close();
    void file_save();
    void file_exit();

    void edit_selall();
    void edit_cut();
    void edit_copy();
    void edit_paste();

    void build_it();
    void build_andrus();


    void about_it();



};

#endif // MAINWINDOW_H
