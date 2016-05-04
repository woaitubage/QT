/********************************************************************************
** Form generated from reading UI file 'colours.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOURS_H
#define UI_COLOURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Colours
{
public:

    void setupUi(QWidget *Colours)
    {
        if (Colours->objectName().isEmpty())
            Colours->setObjectName(QStringLiteral("Colours"));
        Colours->resize(400, 300);

        retranslateUi(Colours);

        QMetaObject::connectSlotsByName(Colours);
    } // setupUi

    void retranslateUi(QWidget *Colours)
    {
        Colours->setWindowTitle(QApplication::translate("Colours", "Colours", 0));
    } // retranslateUi

};

namespace Ui {
    class Colours: public Ui_Colours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOURS_H
