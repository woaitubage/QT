/********************************************************************************
** Form generated from reading UI file 'shapes.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPES_H
#define UI_SHAPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shapes
{
public:

    void setupUi(QWidget *Shapes)
    {
        if (Shapes->objectName().isEmpty())
            Shapes->setObjectName(QStringLiteral("Shapes"));
        Shapes->resize(400, 300);

        retranslateUi(Shapes);

        QMetaObject::connectSlotsByName(Shapes);
    } // setupUi

    void retranslateUi(QWidget *Shapes)
    {
        Shapes->setWindowTitle(QApplication::translate("Shapes", "Shapes", 0));
    } // retranslateUi

};

namespace Ui {
    class Shapes: public Ui_Shapes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPES_H
