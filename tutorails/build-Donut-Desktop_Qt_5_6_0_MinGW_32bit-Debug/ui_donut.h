/********************************************************************************
** Form generated from reading UI file 'donut.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONUT_H
#define UI_DONUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Donut
{
public:

    void setupUi(QWidget *Donut)
    {
        if (Donut->objectName().isEmpty())
            Donut->setObjectName(QStringLiteral("Donut"));
        Donut->resize(400, 300);

        retranslateUi(Donut);

        QMetaObject::connectSlotsByName(Donut);
    } // setupUi

    void retranslateUi(QWidget *Donut)
    {
        Donut->setWindowTitle(QApplication::translate("Donut", "Donut", 0));
    } // retranslateUi

};

namespace Ui {
    class Donut: public Ui_Donut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONUT_H
