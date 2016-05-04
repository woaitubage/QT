/********************************************************************************
** Form generated from reading UI file 'verticalbox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTICALBOX_H
#define UI_VERTICALBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerticalBox
{
public:

    void setupUi(QWidget *VerticalBox)
    {
        if (VerticalBox->objectName().isEmpty())
            VerticalBox->setObjectName(QStringLiteral("VerticalBox"));
        VerticalBox->resize(400, 300);

        retranslateUi(VerticalBox);

        QMetaObject::connectSlotsByName(VerticalBox);
    } // setupUi

    void retranslateUi(QWidget *VerticalBox)
    {
        VerticalBox->setWindowTitle(QApplication::translate("VerticalBox", "VerticalBox", 0));
    } // retranslateUi

};

namespace Ui {
    class VerticalBox: public Ui_VerticalBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTICALBOX_H
