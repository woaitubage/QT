/********************************************************************************
** Form generated from reading UI file 'burning.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURNING_H
#define UI_BURNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Burning
{
public:

    void setupUi(QWidget *Burning)
    {
        if (Burning->objectName().isEmpty())
            Burning->setObjectName(QStringLiteral("Burning"));
        Burning->resize(400, 300);

        retranslateUi(Burning);

        QMetaObject::connectSlotsByName(Burning);
    } // setupUi

    void retranslateUi(QWidget *Burning)
    {
        Burning->setWindowTitle(QApplication::translate("Burning", "Burning", 0));
    } // retranslateUi

};

namespace Ui {
    class Burning: public Ui_Burning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURNING_H
