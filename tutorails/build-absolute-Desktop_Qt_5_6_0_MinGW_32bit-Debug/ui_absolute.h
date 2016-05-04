/********************************************************************************
** Form generated from reading UI file 'absolute.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABSOLUTE_H
#define UI_ABSOLUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Absolute
{
public:

    void setupUi(QWidget *Absolute)
    {
        if (Absolute->objectName().isEmpty())
            Absolute->setObjectName(QStringLiteral("Absolute"));
        Absolute->resize(400, 300);

        retranslateUi(Absolute);

        QMetaObject::connectSlotsByName(Absolute);
    } // setupUi

    void retranslateUi(QWidget *Absolute)
    {
        Absolute->setWindowTitle(QApplication::translate("Absolute", "Absolute", 0));
    } // retranslateUi

};

namespace Ui {
    class Absolute: public Ui_Absolute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABSOLUTE_H
