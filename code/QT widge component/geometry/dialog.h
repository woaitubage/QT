#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QGridLayout>
#include <QMouseEvent>
#include <QEvent>

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

    void moveEvent(QMoveEvent *e);
    void resizeEvent(QResizeEvent *);
public:
    void showit();
};

#endif // DIALOG_H
