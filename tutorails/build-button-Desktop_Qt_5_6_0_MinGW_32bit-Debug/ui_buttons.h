/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buttons
{
public:

    void setupUi(QWidget *Buttons)
    {
        if (Buttons->objectName().isEmpty())
            Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->resize(400, 300);

        retranslateUi(Buttons);

        QMetaObject::connectSlotsByName(Buttons);
    } // setupUi

    void retranslateUi(QWidget *Buttons)
    {
        Buttons->setWindowTitle(QApplication::translate("Buttons", "Buttons", 0));
    } // retranslateUi

};

namespace Ui {
    class Buttons: public Ui_Buttons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
