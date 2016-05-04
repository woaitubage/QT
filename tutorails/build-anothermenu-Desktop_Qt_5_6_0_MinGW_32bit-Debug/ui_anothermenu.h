/********************************************************************************
** Form generated from reading UI file 'anothermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERMENU_H
#define UI_ANOTHERMENU_H

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

class Ui_AnotherMenu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AnotherMenu)
    {
        if (AnotherMenu->objectName().isEmpty())
            AnotherMenu->setObjectName(QStringLiteral("AnotherMenu"));
        AnotherMenu->resize(400, 300);
        menuBar = new QMenuBar(AnotherMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AnotherMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AnotherMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AnotherMenu->addToolBar(mainToolBar);
        centralWidget = new QWidget(AnotherMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AnotherMenu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AnotherMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AnotherMenu->setStatusBar(statusBar);

        retranslateUi(AnotherMenu);

        QMetaObject::connectSlotsByName(AnotherMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AnotherMenu)
    {
        AnotherMenu->setWindowTitle(QApplication::translate("AnotherMenu", "AnotherMenu", 0));
    } // retranslateUi

};

namespace Ui {
    class AnotherMenu: public Ui_AnotherMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERMENU_H
