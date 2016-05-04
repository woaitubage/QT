/********************************************************************************
** Form generated from reading UI file 'layouts.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTS_H
#define UI_LAYOUTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Layouts
{
public:

    void setupUi(QWidget *Layouts)
    {
        if (Layouts->objectName().isEmpty())
            Layouts->setObjectName(QStringLiteral("Layouts"));
        Layouts->resize(400, 300);

        retranslateUi(Layouts);

        QMetaObject::connectSlotsByName(Layouts);
    } // setupUi

    void retranslateUi(QWidget *Layouts)
    {
        Layouts->setWindowTitle(QApplication::translate("Layouts", "Layouts", 0));
    } // retranslateUi

};

namespace Ui {
    class Layouts: public Ui_Layouts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTS_H
