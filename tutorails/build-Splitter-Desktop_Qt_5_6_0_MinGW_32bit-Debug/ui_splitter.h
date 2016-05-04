/********************************************************************************
** Form generated from reading UI file 'splitter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITTER_H
#define UI_SPLITTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splitter
{
public:

    void setupUi(QWidget *Splitter)
    {
        if (Splitter->objectName().isEmpty())
            Splitter->setObjectName(QStringLiteral("Splitter"));
        Splitter->resize(400, 300);

        retranslateUi(Splitter);

        QMetaObject::connectSlotsByName(Splitter);
    } // setupUi

    void retranslateUi(QWidget *Splitter)
    {
        Splitter->setWindowTitle(QApplication::translate("Splitter", "Splitter", 0));
    } // retranslateUi

};

namespace Ui {
    class Splitter: public Ui_Splitter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITTER_H
