/********************************************************************************
** Form generated from reading UI file 'contaspagarreceber.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTASPAGARRECEBER_H
#define UI_CONTASPAGARRECEBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contasPagarReceber
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;
    QPushButton *btnFaturas;
    QPushButton *btnTransacoes;
    QPushButton *btnVoltar;

    void setupUi(QWidget *contasPagarReceber)
    {
        if (contasPagarReceber->objectName().isEmpty())
            contasPagarReceber->setObjectName(QString::fromUtf8("contasPagarReceber"));
        contasPagarReceber->resize(522, 421);
        layoutWidget = new QWidget(contasPagarReceber);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 72, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);

        btnFaturas = new QPushButton(contasPagarReceber);
        btnFaturas->setObjectName(QString::fromUtf8("btnFaturas"));
        btnFaturas->setGeometry(QRect(140, 230, 89, 25));
        btnTransacoes = new QPushButton(contasPagarReceber);
        btnTransacoes->setObjectName(QString::fromUtf8("btnTransacoes"));
        btnTransacoes->setGeometry(QRect(280, 230, 89, 25));
        btnVoltar = new QPushButton(contasPagarReceber);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(390, 30, 89, 25));

        retranslateUi(contasPagarReceber);

        QMetaObject::connectSlotsByName(contasPagarReceber);
    } // setupUi

    void retranslateUi(QWidget *contasPagarReceber)
    {
        contasPagarReceber->setWindowTitle(QApplication::translate("contasPagarReceber", "Form", nullptr));
        label->setText(QApplication::translate("contasPagarReceber", "Id atual:", nullptr));
        lblID->setText(QString());
        btnFaturas->setText(QApplication::translate("contasPagarReceber", "Faturas", nullptr));
        btnTransacoes->setText(QApplication::translate("contasPagarReceber", "Transa\303\247\303\265es", nullptr));
        btnVoltar->setText(QApplication::translate("contasPagarReceber", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contasPagarReceber: public Ui_contasPagarReceber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTASPAGARRECEBER_H
