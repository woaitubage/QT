#ifndef CHECKABLE_H
#define CHECKABLE_H

#include <QMainWindow>
#include <QAction>

namespace Ui {
class Checkable;
}

class Checkable : public QMainWindow
{
    Q_OBJECT

public:
    explicit Checkable(QWidget *parent = 0);
    ~Checkable();

private slots:
    void toggleStatusbar();




private:
    Ui::Checkable *ui;
    QAction *viewst;
};

#endif // CHECKABLE_H
