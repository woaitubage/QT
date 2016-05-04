/********************************************************************************
** Form generated from reading UI file 'cursors.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURSORS_H
#define UI_CURSORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cursors
{
public:

    void setupUi(QWidget *Cursors)
    {
        if (Cursors->objectName().isEmpty())
            Cursors->setObjectName(QStringLiteral("Cursors"));
        Cursors->resize(400, 300);

        retranslateUi(Cursors);

        QMetaObject::connectSlotsByName(Cursors);
    } // setupUi

    void retranslateUi(QWidget *Cursors)
    {
        Cursors->setWindowTitle(QApplication::translate("Cursors", "Cursors", 0));
    } // retranslateUi

};

namespace Ui {
    class Cursors: public Ui_Cursors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURSORS_H
