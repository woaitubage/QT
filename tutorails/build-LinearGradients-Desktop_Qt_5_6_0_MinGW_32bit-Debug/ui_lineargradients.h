/********************************************************************************
** Form generated from reading UI file 'lineargradients.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARGRADIENTS_H
#define UI_LINEARGRADIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearGradients
{
public:

    void setupUi(QWidget *LinearGradients)
    {
        if (LinearGradients->objectName().isEmpty())
            LinearGradients->setObjectName(QStringLiteral("LinearGradients"));
        LinearGradients->resize(400, 300);

        retranslateUi(LinearGradients);

        QMetaObject::connectSlotsByName(LinearGradients);
    } // setupUi

    void retranslateUi(QWidget *LinearGradients)
    {
        LinearGradients->setWindowTitle(QApplication::translate("LinearGradients", "LinearGradients", 0));
    } // retranslateUi

};

namespace Ui {
    class LinearGradients: public Ui_LinearGradients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARGRADIENTS_H
