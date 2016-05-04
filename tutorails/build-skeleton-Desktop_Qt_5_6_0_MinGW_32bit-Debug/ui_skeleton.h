/********************************************************************************
** Form generated from reading UI file 'skeleton.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKELETON_H
#define UI_SKELETON_H

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

class Ui_Skeleton
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Skeleton)
    {
        if (Skeleton->objectName().isEmpty())
            Skeleton->setObjectName(QStringLiteral("Skeleton"));
        Skeleton->resize(400, 300);
        menuBar = new QMenuBar(Skeleton);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Skeleton->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Skeleton);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Skeleton->addToolBar(mainToolBar);
        centralWidget = new QWidget(Skeleton);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Skeleton->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Skeleton);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Skeleton->setStatusBar(statusBar);

        retranslateUi(Skeleton);

        QMetaObject::connectSlotsByName(Skeleton);
    } // setupUi

    void retranslateUi(QMainWindow *Skeleton)
    {
        Skeleton->setWindowTitle(QApplication::translate("Skeleton", "Skeleton", 0));
    } // retranslateUi

};

namespace Ui {
    class Skeleton: public Ui_Skeleton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKELETON_H
