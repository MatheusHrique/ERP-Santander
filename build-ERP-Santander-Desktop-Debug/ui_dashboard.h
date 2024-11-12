/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCheckConta;
    QPushButton *btnLogout;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(471, 237);
        widget = new QWidget(Dashboard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 72, 19));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(widget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);

        widget1 = new QWidget(Dashboard);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(230, 190, 178, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnCheckConta = new QPushButton(widget1);
        btnCheckConta->setObjectName(QString::fromUtf8("btnCheckConta"));

        horizontalLayout_2->addWidget(btnCheckConta);

        btnLogout = new QPushButton(widget1);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));

        horizontalLayout_2->addWidget(btnLogout);


        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QApplication::translate("Dashboard", "Dashboard", nullptr));
        label->setText(QApplication::translate("Dashboard", "Id atual:", nullptr));
        lblID->setText(QString());
        btnCheckConta->setText(QApplication::translate("Dashboard", "CheckConta", nullptr));
        btnLogout->setText(QApplication::translate("Dashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
