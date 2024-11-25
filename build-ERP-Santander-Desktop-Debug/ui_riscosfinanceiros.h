/********************************************************************************
** Form generated from reading UI file 'riscosfinanceiros.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RISCOSFINANCEIROS_H
#define UI_RISCOSFINANCEIROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_riscosFinanceiros
{
public:
    QPushButton *btnVoltar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;

    void setupUi(QWidget *riscosFinanceiros)
    {
        if (riscosFinanceiros->objectName().isEmpty())
            riscosFinanceiros->setObjectName(QString::fromUtf8("riscosFinanceiros"));
        riscosFinanceiros->resize(422, 397);
        btnVoltar = new QPushButton(riscosFinanceiros);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(250, 40, 89, 25));
        layoutWidget = new QWidget(riscosFinanceiros);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 72, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);


        retranslateUi(riscosFinanceiros);

        QMetaObject::connectSlotsByName(riscosFinanceiros);
    } // setupUi

    void retranslateUi(QWidget *riscosFinanceiros)
    {
        riscosFinanceiros->setWindowTitle(QApplication::translate("riscosFinanceiros", "Riscos financeiros", nullptr));
        btnVoltar->setText(QApplication::translate("riscosFinanceiros", "Voltar", nullptr));
        label->setText(QApplication::translate("riscosFinanceiros", "Id atual:", nullptr));
        lblID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class riscosFinanceiros: public Ui_riscosFinanceiros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RISCOSFINANCEIROS_H
