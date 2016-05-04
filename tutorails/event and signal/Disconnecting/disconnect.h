#ifndef DISCONNECT_H
#define DISCONNECT_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Disconnect;
}

class Disconnect : public QWidget
{
    Q_OBJECT

public:
    explicit Disconnect(QWidget *parent = 0);
    ~Disconnect();

private:
    Ui::Disconnect *ui;


private slots:
    void onClick();
    void onCheck(int);


private:
    QPushButton *clickBtn;
};

#endif // DISCONNECT_H
