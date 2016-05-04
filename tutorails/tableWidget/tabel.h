#ifndef TABEL_H
#define TABEL_H

#include <QWidget>

namespace Ui {
class Tabel;
}

class Tabel : public QWidget
{
    Q_OBJECT

public:
    explicit Tabel(QWidget *parent = 0);
    ~Tabel();

private:
    Ui::Tabel *ui;
};

#endif // TABEL_H
