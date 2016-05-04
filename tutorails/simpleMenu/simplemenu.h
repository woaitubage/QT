#ifndef SIMPLEMENU_H
#define SIMPLEMENU_H

#include <QMainWindow>

namespace Ui {
class simplemenu;
}

class simplemenu : public QMainWindow
{
    Q_OBJECT

public:
    simplemenu(QWidget *parent = 0);
    ~simplemenu();

private:
    Ui::simplemenu *ui;
};

#endif // SIMPLEMENU_H
