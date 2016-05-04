/********************************************************************************
** Form generated from reading UI file 'lines.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINES_H
#define UI_LINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lines
{
public:

    void setupUi(QWidget *Lines)
    {
        if (Lines->objectName().isEmpty())
            Lines->setObjectName(QStringLiteral("Lines"));
        Lines->resize(400, 300);

        retranslateUi(Lines);

        QMetaObject::connectSlotsByName(Lines);
    } // setupUi

    void retranslateUi(QWidget *Lines)
    {
        Lines->setWindowTitle(QApplication::translate("Lines", "Lines", 0));
    } // retranslateUi

};

namespace Ui {
    class Lines: public Ui_Lines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINES_H
