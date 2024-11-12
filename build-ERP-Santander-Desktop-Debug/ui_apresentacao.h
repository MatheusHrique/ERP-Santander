/********************************************************************************
** Form generated from reading UI file 'apresentacao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APRESENTACAO_H
#define UI_APRESENTACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Apresentacao
{
public:
    QLabel *label;
    QPushButton *btnFechar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLogin;
    QPushButton *btnRegister;

    void setupUi(QWidget *Apresentacao)
    {
        if (Apresentacao->objectName().isEmpty())
            Apresentacao->setObjectName(QString::fromUtf8("Apresentacao"));
        Apresentacao->resize(490, 266);
        label = new QLabel(Apresentacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 71, 17));
        btnFechar = new QPushButton(Apresentacao);
        btnFechar->setObjectName(QString::fromUtf8("btnFechar"));
        btnFechar->setGeometry(QRect(380, 220, 89, 25));
        widget = new QWidget(Apresentacao);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 140, 82, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        verticalLayout->addWidget(btnLogin);

        btnRegister = new QPushButton(widget);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));

        verticalLayout->addWidget(btnRegister);


        retranslateUi(Apresentacao);

        QMetaObject::connectSlotsByName(Apresentacao);
    } // setupUi

    void retranslateUi(QWidget *Apresentacao)
    {
        Apresentacao->setWindowTitle(QApplication::translate("Apresentacao", "ERP Santander! Agora de um jeito mais f\303\241cil", nullptr));
        label->setText(QApplication::translate("Apresentacao", "Santander", nullptr));
        btnFechar->setText(QApplication::translate("Apresentacao", "Fechar", nullptr));
        btnLogin->setText(QApplication::translate("Apresentacao", "Login", nullptr));
        btnRegister->setText(QApplication::translate("Apresentacao", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Apresentacao: public Ui_Apresentacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APRESENTACAO_H
