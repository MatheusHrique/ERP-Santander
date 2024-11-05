/********************************************************************************
** Form generated from reading UI file 'initialwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALWINDOW_H
#define UI_INITIALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_initialWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnExecuteProject;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *initialWindow)
    {
        if (initialWindow->objectName().isEmpty())
            initialWindow->setObjectName(QString::fromUtf8("initialWindow"));
        initialWindow->resize(462, 278);
        centralwidget = new QWidget(initialWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnExecuteProject = new QPushButton(centralwidget);
        btnExecuteProject->setObjectName(QString::fromUtf8("btnExecuteProject"));
        btnExecuteProject->setGeometry(QRect(170, 100, 121, 25));
        initialWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(initialWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 462, 22));
        initialWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(initialWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        initialWindow->setStatusBar(statusbar);

        retranslateUi(initialWindow);

        QMetaObject::connectSlotsByName(initialWindow);
    } // setupUi

    void retranslateUi(QMainWindow *initialWindow)
    {
        initialWindow->setWindowTitle(QApplication::translate("initialWindow", "initialWindow", nullptr));
        btnExecuteProject->setText(QApplication::translate("initialWindow", "Executar projeto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class initialWindow: public Ui_initialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALWINDOW_H
