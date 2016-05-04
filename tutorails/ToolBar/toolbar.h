#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QMainWindow>

namespace Ui {
class Toolbar;
}

class Toolbar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Toolbar(QWidget *parent = 0);
    ~Toolbar();

private:
    Ui::Toolbar *ui;
};

#endif // TOOLBAR_H
