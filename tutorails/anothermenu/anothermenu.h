#ifndef ANOTHERMENU_H
#define ANOTHERMENU_H

#include <QMainWindow>

namespace Ui {
class AnotherMenu;
}

class AnotherMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnotherMenu(QWidget *parent = 0);
    ~AnotherMenu();

private:
    Ui::AnotherMenu *ui;
};

#endif // ANOTHERMENU_H
