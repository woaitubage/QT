/********************************************************************************
** Form generated from reading UI file 'tabel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABEL_H
#define UI_TABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tabel
{
public:

    void setupUi(QWidget *Tabel)
    {
        if (Tabel->objectName().isEmpty())
            Tabel->setObjectName(QStringLiteral("Tabel"));
        Tabel->resize(400, 300);

        retranslateUi(Tabel);

        QMetaObject::connectSlotsByName(Tabel);
    } // setupUi

    void retranslateUi(QWidget *Tabel)
    {
        Tabel->setWindowTitle(QApplication::translate("Tabel", "Tabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Tabel: public Ui_Tabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABEL_H
