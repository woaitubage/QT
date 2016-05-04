/********************************************************************************
** Form generated from reading UI file 'move.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_H
#define UI_MOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Move
{
public:

    void setupUi(QWidget *Move)
    {
        if (Move->objectName().isEmpty())
            Move->setObjectName(QStringLiteral("Move"));
        Move->resize(400, 300);

        retranslateUi(Move);

        QMetaObject::connectSlotsByName(Move);
    } // setupUi

    void retranslateUi(QWidget *Move)
    {
        Move->setWindowTitle(QApplication::translate("Move", "Move", 0));
    } // retranslateUi

};

namespace Ui {
    class Move: public Ui_Move {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_H
