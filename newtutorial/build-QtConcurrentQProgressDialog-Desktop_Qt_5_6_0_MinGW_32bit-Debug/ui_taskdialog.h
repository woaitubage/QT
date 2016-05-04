/********************************************************************************
** Form generated from reading UI file 'taskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDIALOG_H
#define UI_TASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TaskDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *TaskDialog)
    {
        if (TaskDialog->objectName().isEmpty())
            TaskDialog->setObjectName(QStringLiteral("TaskDialog"));
        TaskDialog->resize(400, 300);
        pushButton = new QPushButton(TaskDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 110, 93, 28));
        pushButton_2 = new QPushButton(TaskDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 200, 93, 28));
        spinBox = new QSpinBox(TaskDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(220, 50, 161, 22));
        label = new QLabel(TaskDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 161, 31));
        label_2 = new QLabel(TaskDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 161, 31));

        retranslateUi(TaskDialog);

        QMetaObject::connectSlotsByName(TaskDialog);
    } // setupUi

    void retranslateUi(QDialog *TaskDialog)
    {
        TaskDialog->setWindowTitle(QApplication::translate("TaskDialog", "TaskDialog", 0));
        pushButton->setText(QApplication::translate("TaskDialog", "Do Task", 0));
        pushButton_2->setText(QApplication::translate("TaskDialog", "Cancel", 0));
        label->setText(QApplication::translate("TaskDialog", "Number of iterator", 0));
        label_2->setText(QApplication::translate("TaskDialog", "Time ConSuming Work", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskDialog: public Ui_TaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDIALOG_H
