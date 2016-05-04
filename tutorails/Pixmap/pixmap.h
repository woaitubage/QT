#ifndef PIXMAP_H
#define PIXMAP_H

#include <QWidget>

namespace Ui {
class Pixmap;
}

class Pixmap : public QWidget
{
    Q_OBJECT

public:
    explicit Pixmap(QWidget *parent = 0);
    ~Pixmap();

private:
    Ui::Pixmap *ui;
};

#endif // PIXMAP_H
