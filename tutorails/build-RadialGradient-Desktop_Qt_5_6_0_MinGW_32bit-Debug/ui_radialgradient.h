/********************************************************************************
** Form generated from reading UI file 'radialgradient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIALGRADIENT_H
#define UI_RADIALGRADIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadialGradient
{
public:

    void setupUi(QWidget *RadialGradient)
    {
        if (RadialGradient->objectName().isEmpty())
            RadialGradient->setObjectName(QStringLiteral("RadialGradient"));
        RadialGradient->resize(400, 300);

        retranslateUi(RadialGradient);

        QMetaObject::connectSlotsByName(RadialGradient);
    } // setupUi

    void retranslateUi(QWidget *RadialGradient)
    {
        RadialGradient->setWindowTitle(QApplication::translate("RadialGradient", "RadialGradient", 0));
    } // retranslateUi

};

namespace Ui {
    class RadialGradient: public Ui_RadialGradient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIALGRADIENT_H
