/********************************************************************************
** Form generated from reading UI file 'label.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABEL_H
#define UI_LABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Label
{
public:

    void setupUi(QWidget *Label)
    {
        if (Label->objectName().isEmpty())
            Label->setObjectName(QStringLiteral("Label"));
        Label->resize(400, 300);

        retranslateUi(Label);

        QMetaObject::connectSlotsByName(Label);
    } // setupUi

    void retranslateUi(QWidget *Label)
    {
        Label->setWindowTitle(QApplication::translate("Label", "Label", 0));
    } // retranslateUi

};

namespace Ui {
    class Label: public Ui_Label {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABEL_H
