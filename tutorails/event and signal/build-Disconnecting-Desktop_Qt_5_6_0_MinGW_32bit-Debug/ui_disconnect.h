/********************************************************************************
** Form generated from reading UI file 'disconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCONNECT_H
#define UI_DISCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Disconnect
{
public:

    void setupUi(QWidget *Disconnect)
    {
        if (Disconnect->objectName().isEmpty())
            Disconnect->setObjectName(QStringLiteral("Disconnect"));
        Disconnect->resize(400, 300);

        retranslateUi(Disconnect);

        QMetaObject::connectSlotsByName(Disconnect);
    } // setupUi

    void retranslateUi(QWidget *Disconnect)
    {
        Disconnect->setWindowTitle(QApplication::translate("Disconnect", "Disconnect", 0));
    } // retranslateUi

};

namespace Ui {
    class Disconnect: public Ui_Disconnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCONNECT_H
