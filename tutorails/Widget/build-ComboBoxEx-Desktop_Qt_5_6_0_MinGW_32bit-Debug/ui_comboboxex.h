/********************************************************************************
** Form generated from reading UI file 'comboboxex.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOXEX_H
#define UI_COMBOBOXEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComboBoxEx
{
public:

    void setupUi(QWidget *ComboBoxEx)
    {
        if (ComboBoxEx->objectName().isEmpty())
            ComboBoxEx->setObjectName(QStringLiteral("ComboBoxEx"));
        ComboBoxEx->resize(400, 300);

        retranslateUi(ComboBoxEx);

        QMetaObject::connectSlotsByName(ComboBoxEx);
    } // setupUi

    void retranslateUi(QWidget *ComboBoxEx)
    {
        ComboBoxEx->setWindowTitle(QApplication::translate("ComboBoxEx", "ComboBoxEx", 0));
    } // retranslateUi

};

namespace Ui {
    class ComboBoxEx: public Ui_ComboBoxEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOXEX_H
