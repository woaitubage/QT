/********************************************************************************
** Form generated from reading UI file 'click.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLICK_H
#define UI_CLICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Click
{
public:

    void setupUi(QWidget *Click)
    {
        if (Click->objectName().isEmpty())
            Click->setObjectName(QStringLiteral("Click"));
        Click->resize(400, 300);

        retranslateUi(Click);

        QMetaObject::connectSlotsByName(Click);
    } // setupUi

    void retranslateUi(QWidget *Click)
    {
        Click->setWindowTitle(QApplication::translate("Click", "Click", 0));
    } // retranslateUi

};

namespace Ui {
    class Click: public Ui_Click {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLICK_H
