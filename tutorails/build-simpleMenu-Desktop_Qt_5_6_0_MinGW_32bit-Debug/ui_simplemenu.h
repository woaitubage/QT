/********************************************************************************
** Form generated from reading UI file 'simplemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEMENU_H
#define UI_SIMPLEMENU_H

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

class Ui_simplemenu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *simplemenu)
    {
        if (simplemenu->objectName().isEmpty())
            simplemenu->setObjectName(QStringLiteral("simplemenu"));
        simplemenu->resize(400, 300);
        menuBar = new QMenuBar(simplemenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        simplemenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(simplemenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        simplemenu->addToolBar(mainToolBar);
        centralWidget = new QWidget(simplemenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        simplemenu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(simplemenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        simplemenu->setStatusBar(statusBar);

        retranslateUi(simplemenu);

        QMetaObject::connectSlotsByName(simplemenu);
    } // setupUi

    void retranslateUi(QMainWindow *simplemenu)
    {
        simplemenu->setWindowTitle(QApplication::translate("simplemenu", "simplemenu", 0));
    } // retranslateUi

};

namespace Ui {
    class simplemenu: public Ui_simplemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEMENU_H
