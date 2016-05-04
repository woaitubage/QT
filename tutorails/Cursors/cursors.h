#ifndef CURSORS_H
#define CURSORS_H

#include <QWidget>
#include <QFrame>
#include <QGridLayout>


namespace Ui {
class Cursors;
}

class Cursors : public QWidget
{
    Q_OBJECT

public:
    Cursors(QWidget *parent = 0);
    ~Cursors();

private:
    Ui::Cursors *ui;
};

#endif // CURSORS_H
