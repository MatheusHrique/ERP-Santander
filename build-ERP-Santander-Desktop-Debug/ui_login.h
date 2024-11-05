/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancelar;
    QPushButton *btnLimparTudo;
    QPushButton *btnEntrar;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *edtCPF;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtPassword;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(351, 320);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 30, 91, 17));
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 210, 265, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout->addWidget(btnCancelar);

        btnLimparTudo = new QPushButton(widget);
        btnLimparTudo->setObjectName(QString::fromUtf8("btnLimparTudo"));

        horizontalLayout->addWidget(btnLimparTudo);

        btnEntrar = new QPushButton(widget);
        btnEntrar->setObjectName(QString::fromUtf8("btnEntrar"));

        horizontalLayout->addWidget(btnEntrar);

        widget1 = new QWidget(Login);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 100, 198, 62));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        edtCPF = new QLineEdit(widget1);
        edtCPF->setObjectName(QString::fromUtf8("edtCPF"));

        horizontalLayout_3->addWidget(edtCPF);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtPassword = new QLineEdit(widget1);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));

        horizontalLayout_2->addWidget(edtPassword);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        label_3->setText(QApplication::translate("Login", "Tela de login", nullptr));
        btnCancelar->setText(QApplication::translate("Login", "Cancelar", nullptr));
        btnLimparTudo->setText(QApplication::translate("Login", "Limpar tudo", nullptr));
        btnEntrar->setText(QApplication::translate("Login", "Entrar", nullptr));
        label->setText(QApplication::translate("Login", "CPF:", nullptr));
        label_2->setText(QApplication::translate("Login", "Senha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
