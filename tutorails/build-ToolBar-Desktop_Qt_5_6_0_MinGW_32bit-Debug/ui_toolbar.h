/********************************************************************************
** Form generated from reading UI file 'toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBAR_H
#define UI_TOOLBAR_H

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

class Ui_Toolbar
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Toolbar)
    {
        if (Toolbar->objectName().isEmpty())
            Toolbar->setObjectName(QStringLiteral("Toolbar"));
        Toolbar->resize(400, 300);
        menuBar = new QMenuBar(Toolbar);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Toolbar->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Toolbar);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Toolbar->addToolBar(mainToolBar);
        centralWidget = new QWidget(Toolbar);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Toolbar->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Toolbar);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Toolbar->setStatusBar(statusBar);

        retranslateUi(Toolbar);

        QMetaObject::connectSlotsByName(Toolbar);
    } // setupUi

    void retranslateUi(QMainWindow *Toolbar)
    {
        Toolbar->setWindowTitle(QApplication::translate("Toolbar", "Toolbar", 0));
    } // retranslateUi

};

namespace Ui {
    class Toolbar: public Ui_Toolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
