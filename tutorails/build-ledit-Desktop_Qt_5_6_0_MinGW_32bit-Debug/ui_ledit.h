/********************************************************************************
** Form generated from reading UI file 'ledit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDIT_H
#define UI_LEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ledit
{
public:

    void setupUi(QWidget *Ledit)
    {
        if (Ledit->objectName().isEmpty())
            Ledit->setObjectName(QStringLiteral("Ledit"));
        Ledit->resize(400, 300);

        retranslateUi(Ledit);

        QMetaObject::connectSlotsByName(Ledit);
    } // setupUi

    void retranslateUi(QWidget *Ledit)
    {
        Ledit->setWindowTitle(QApplication::translate("Ledit", "Ledit", 0));
    } // retranslateUi

};

namespace Ui {
    class Ledit: public Ui_Ledit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDIT_H
