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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Apresentacao
{
public:
    QPushButton *btnLogin;
    QPushButton *btnRegister;
    QLabel *label;

    void setupUi(QWidget *Apresentacao)
    {
        if (Apresentacao->objectName().isEmpty())
            Apresentacao->setObjectName(QString::fromUtf8("Apresentacao"));
        Apresentacao->resize(490, 266);
        btnLogin = new QPushButton(Apresentacao);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(210, 150, 89, 25));
        btnRegister = new QPushButton(Apresentacao);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(210, 190, 89, 25));
        label = new QLabel(Apresentacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 71, 17));

        retranslateUi(Apresentacao);

        QMetaObject::connectSlotsByName(Apresentacao);
    } // setupUi

    void retranslateUi(QWidget *Apresentacao)
    {
        Apresentacao->setWindowTitle(QApplication::translate("Apresentacao", "ERP Santander! Agora de um jeito mais f\303\241cil", nullptr));
        btnLogin->setText(QApplication::translate("Apresentacao", "Login", nullptr));
        btnRegister->setText(QApplication::translate("Apresentacao", "Register", nullptr));
        label->setText(QApplication::translate("Apresentacao", "Santander", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Apresentacao: public Ui_Apresentacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APRESENTACAO_H
