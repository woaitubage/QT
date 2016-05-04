/********************************************************************************
** Form generated from reading UI file 'plusminus.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSMINUS_H
#define UI_PLUSMINUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlusMinus
{
public:

    void setupUi(QWidget *PlusMinus)
    {
        if (PlusMinus->objectName().isEmpty())
            PlusMinus->setObjectName(QStringLiteral("PlusMinus"));
        PlusMinus->resize(400, 300);

        retranslateUi(PlusMinus);

        QMetaObject::connectSlotsByName(PlusMinus);
    } // setupUi

    void retranslateUi(QWidget *PlusMinus)
    {
        PlusMinus->setWindowTitle(QApplication::translate("PlusMinus", "PlusMinus", 0));
    } // retranslateUi

};

namespace Ui {
    class PlusMinus: public Ui_PlusMinus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSMINUS_H
