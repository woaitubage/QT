#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include <QTreeWidgetItem>
#include <QBrush>

namespace Ui {
class dialog;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog *ui;
    void addTreeRoot(QString name,QString description);
    void addTreeChild(QTreeWidgetItem *parent,QString name,QString description);

};

#endif // DIALOG_H
