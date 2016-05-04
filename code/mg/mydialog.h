#ifndef MYDIALOG_H
#define MYDIALOG_H
#include <QDialog>

class mydialog : public QDialog
{
public:
    mydialog();
    int id;//0代表白色可以走1，代表人，红色，2代表障碍，黑色，
    int AI;



};

#endif // MYDIALOG_H
