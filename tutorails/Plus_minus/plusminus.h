#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class PlusMinus;
}

class PlusMinus : public QWidget
{
    Q_OBJECT

public:
     PlusMinus(QWidget *parent = 0);
    ~PlusMinus();

private:
    Ui::PlusMinus *ui;

private slots:
    void OnPlus();
    void OnMinus();


private:
    QLabel*lbl;

};

#endif // PLUSMINUS_H
