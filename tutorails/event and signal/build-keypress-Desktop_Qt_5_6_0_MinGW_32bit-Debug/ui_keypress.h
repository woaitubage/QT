/********************************************************************************
** Form generated from reading UI file 'keypress.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPRESS_H
#define UI_KEYPRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keypress
{
public:

    void setupUi(QWidget *Keypress)
    {
        if (Keypress->objectName().isEmpty())
            Keypress->setObjectName(QStringLiteral("Keypress"));
        Keypress->resize(400, 300);

        retranslateUi(Keypress);

        QMetaObject::connectSlotsByName(Keypress);
    } // setupUi

    void retranslateUi(QWidget *Keypress)
    {
        Keypress->setWindowTitle(QApplication::translate("Keypress", "Keypress", 0));
    } // retranslateUi

};

namespace Ui {
    class Keypress: public Ui_Keypress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPRESS_H
