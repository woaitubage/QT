/********************************************************************************
** Form generated from reading UI file 'patterns.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNS_H
#define UI_PATTERNS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Patterns
{
public:

    void setupUi(QWidget *Patterns)
    {
        if (Patterns->objectName().isEmpty())
            Patterns->setObjectName(QStringLiteral("Patterns"));
        Patterns->resize(400, 300);

        retranslateUi(Patterns);

        QMetaObject::connectSlotsByName(Patterns);
    } // setupUi

    void retranslateUi(QWidget *Patterns)
    {
        Patterns->setWindowTitle(QApplication::translate("Patterns", "Patterns", 0));
    } // retranslateUi

};

namespace Ui {
    class Patterns: public Ui_Patterns {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNS_H
