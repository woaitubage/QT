#ifndef SKELETON_H
#define SKELETON_H

#include <QMainWindow>

namespace Ui {
class Skeleton;
}

class Skeleton : public QMainWindow
{
    Q_OBJECT

public:
    explicit Skeleton(QWidget *parent = 0);
    ~Skeleton();

private:
    Ui::Skeleton *ui;
};

#endif // SKELETON_H
