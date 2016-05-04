#ifndef SPLITTER_H
#define SPLITTER_H

#include <QWidget>

namespace Ui {
class Splitter;
}

class Splitter : public QWidget
{
    Q_OBJECT

public:
    explicit Splitter(QWidget *parent = 0);
    ~Splitter();

private:
    Ui::Splitter *ui;
};

#endif // SPLITTER_H
