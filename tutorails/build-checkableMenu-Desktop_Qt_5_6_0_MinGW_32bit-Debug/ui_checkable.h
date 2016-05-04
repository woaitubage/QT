/********************************************************************************
** Form generated from reading UI file 'checkable.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKABLE_H
#define UI_CHECKABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Checkable
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Checkable)
    {
        if (Checkable->objectName().isEmpty())
            Checkable->setObjectName(QStringLiteral("Checkable"));
        Checkable->resize(400, 300);
        menuBar = new QMenuBar(Checkable);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Checkable->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Checkable);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Checkable->addToolBar(mainToolBar);
        centralWidget = new QWidget(Checkable);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Checkable->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Checkable);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Checkable->setStatusBar(statusBar);

        retranslateUi(Checkable);

        QMetaObject::connectSlotsByName(Checkable);
    } // setupUi

    void retranslateUi(QMainWindow *Checkable)
    {
        Checkable->setWindowTitle(QApplication::translate("Checkable", "Checkable", 0));
    } // retranslateUi

};

namespace Ui {
    class Checkable: public Ui_Checkable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKABLE_H
