/********************************************************************************
** Form generated from reading UI file 'slider.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDER_H
#define UI_SLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slider
{
public:

    void setupUi(QWidget *Slider)
    {
        if (Slider->objectName().isEmpty())
            Slider->setObjectName(QStringLiteral("Slider"));
        Slider->resize(400, 300);

        retranslateUi(Slider);

        QMetaObject::connectSlotsByName(Slider);
    } // setupUi

    void retranslateUi(QWidget *Slider)
    {
        Slider->setWindowTitle(QApplication::translate("Slider", "Slider", 0));
    } // retranslateUi

};

namespace Ui {
    class Slider: public Ui_Slider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDER_H
