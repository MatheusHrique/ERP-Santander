/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancelar;
    QPushButton *btnLimparTudo;
    QPushButton *btnCriarConta;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *edtNome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *edtCPF;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *edtPassword;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(443, 320);
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 20, 111, 17));
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 240, 381, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout->addWidget(btnCancelar);

        btnLimparTudo = new QPushButton(widget);
        btnLimparTudo->setObjectName(QString::fromUtf8("btnLimparTudo"));

        horizontalLayout->addWidget(btnLimparTudo);

        btnCriarConta = new QPushButton(widget);
        btnCriarConta->setObjectName(QString::fromUtf8("btnCriarConta"));

        horizontalLayout->addWidget(btnCriarConta);

        widget1 = new QWidget(Register);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 70, 341, 131));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        edtNome = new QLineEdit(widget1);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        horizontalLayout_4->addWidget(edtNome);


        verticalLayout->addLayout(horizontalLayout_4);

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
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        edtPassword = new QLineEdit(widget1);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));

        horizontalLayout_2->addWidget(edtPassword);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", nullptr));
        label_4->setText(QApplication::translate("Register", "Tela de registro", nullptr));
        btnCancelar->setText(QApplication::translate("Register", "Cancelar", nullptr));
        btnLimparTudo->setText(QApplication::translate("Register", "Limpar tudo", nullptr));
        btnCriarConta->setText(QApplication::translate("Register", "Criar nova conta", nullptr));
        label_2->setText(QApplication::translate("Register", "Nome:", nullptr));
        label->setText(QApplication::translate("Register", "CPF:", nullptr));
        label_3->setText(QApplication::translate("Register", "Senha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
