/********************************************************************************
** Form generated from reading UI file 'faturas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FATURAS_H
#define UI_FATURAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_faturas
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;
    QPushButton *btnVoltar;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *cbxInput;
    QLineEdit *edtPesquisar;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *edtFornecedor;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *edtValor;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLimparTudo;
    QPushButton *btnInserir;
    QPushButton *btnEditar;

    void setupUi(QWidget *faturas)
    {
        if (faturas->objectName().isEmpty())
            faturas->setObjectName(QString::fromUtf8("faturas"));
        faturas->resize(606, 549);
        layoutWidget = new QWidget(faturas);
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

        btnVoltar = new QPushButton(faturas);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(490, 20, 89, 25));
        widget = new QWidget(faturas);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 110, 419, 361));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbxInput = new QComboBox(widget);
        cbxInput->setObjectName(QString::fromUtf8("cbxInput"));

        horizontalLayout_4->addWidget(cbxInput);

        edtPesquisar = new QLineEdit(widget);
        edtPesquisar->setObjectName(QString::fromUtf8("edtPesquisar"));

        horizontalLayout_4->addWidget(edtPesquisar);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_5->addWidget(tableWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_3->addWidget(dateEdit);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        edtFornecedor = new QLineEdit(widget);
        edtFornecedor->setObjectName(QString::fromUtf8("edtFornecedor"));

        verticalLayout_2->addWidget(edtFornecedor);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        edtValor = new QLineEdit(widget);
        edtValor->setObjectName(QString::fromUtf8("edtValor"));

        verticalLayout->addWidget(edtValor);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnLimparTudo = new QPushButton(widget);
        btnLimparTudo->setObjectName(QString::fromUtf8("btnLimparTudo"));

        horizontalLayout_3->addWidget(btnLimparTudo);

        btnInserir = new QPushButton(widget);
        btnInserir->setObjectName(QString::fromUtf8("btnInserir"));

        horizontalLayout_3->addWidget(btnInserir);

        btnEditar = new QPushButton(widget);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));

        horizontalLayout_3->addWidget(btnEditar);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(faturas);

        QMetaObject::connectSlotsByName(faturas);
    } // setupUi

    void retranslateUi(QWidget *faturas)
    {
        faturas->setWindowTitle(QApplication::translate("faturas", "Faturas", nullptr));
        label->setText(QApplication::translate("faturas", "Id atual:", nullptr));
        lblID->setText(QString());
        btnVoltar->setText(QApplication::translate("faturas", "Voltar", nullptr));
        label_5->setText(QApplication::translate("faturas", "Pesquisar por:", nullptr));
        label_2->setText(QApplication::translate("faturas", "Data:", nullptr));
        label_3->setText(QApplication::translate("faturas", "Fornecedor:", nullptr));
        label_4->setText(QApplication::translate("faturas", "Valor:", nullptr));
        btnLimparTudo->setText(QApplication::translate("faturas", "Limpar tudo", nullptr));
        btnInserir->setText(QApplication::translate("faturas", "Inserir", nullptr));
        btnEditar->setText(QApplication::translate("faturas", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class faturas: public Ui_faturas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FATURAS_H
