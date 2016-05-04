/********************************************************************************
** Form generated from reading UI file 'transparentrectangles.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPARENTRECTANGLES_H
#define UI_TRANSPARENTRECTANGLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransparentRectangles
{
public:

    void setupUi(QWidget *TransparentRectangles)
    {
        if (TransparentRectangles->objectName().isEmpty())
            TransparentRectangles->setObjectName(QStringLiteral("TransparentRectangles"));
        TransparentRectangles->resize(400, 300);

        retranslateUi(TransparentRectangles);

        QMetaObject::connectSlotsByName(TransparentRectangles);
    } // setupUi

    void retranslateUi(QWidget *TransparentRectangles)
    {
        TransparentRectangles->setWindowTitle(QApplication::translate("TransparentRectangles", "TransparentRectangles", 0));
    } // retranslateUi

};

namespace Ui {
    class TransparentRectangles: public Ui_TransparentRectangles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPARENTRECTANGLES_H
