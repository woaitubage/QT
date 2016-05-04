/********************************************************************************
** Form generated from reading UI file 'spinbox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINBOX_H
#define UI_SPINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpinBox
{
public:

    void setupUi(QWidget *SpinBox)
    {
        if (SpinBox->objectName().isEmpty())
            SpinBox->setObjectName(QStringLiteral("SpinBox"));
        SpinBox->resize(400, 300);

        retranslateUi(SpinBox);

        QMetaObject::connectSlotsByName(SpinBox);
    } // setupUi

    void retranslateUi(QWidget *SpinBox)
    {
        SpinBox->setWindowTitle(QApplication::translate("SpinBox", "SpinBox", 0));
    } // retranslateUi

};

namespace Ui {
    class SpinBox: public Ui_SpinBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINBOX_H
