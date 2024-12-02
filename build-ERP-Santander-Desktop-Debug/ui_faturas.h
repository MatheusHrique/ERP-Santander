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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *cbxInput;
    QPushButton *btnPesquisar;
    QLineEdit *edtPesquisar;
    QTableWidget *tableWidget;
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
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *edtId;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QComboBox *cbxStatus;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLimparTudo;
    QPushButton *btnAdicionar;
    QPushButton *btnPagar;
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
        layoutWidget1 = new QWidget(faturas);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 70, 541, 431));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbxInput = new QComboBox(layoutWidget1);
        cbxInput->addItem(QString());
        cbxInput->addItem(QString());
        cbxInput->addItem(QString());
        cbxInput->addItem(QString());
        cbxInput->addItem(QString());
        cbxInput->setObjectName(QString::fromUtf8("cbxInput"));

        horizontalLayout_4->addWidget(cbxInput);

        btnPesquisar = new QPushButton(layoutWidget1);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));

        horizontalLayout_4->addWidget(btnPesquisar);

        edtPesquisar = new QLineEdit(layoutWidget1);
        edtPesquisar->setObjectName(QString::fromUtf8("edtPesquisar"));

        horizontalLayout_4->addWidget(edtPesquisar);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(layoutWidget1);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_5->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);

        verticalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(false);

        verticalLayout_3->addWidget(dateEdit);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);

        verticalLayout_2->addWidget(label_3);

        edtFornecedor = new QLineEdit(layoutWidget1);
        edtFornecedor->setObjectName(QString::fromUtf8("edtFornecedor"));
        edtFornecedor->setEnabled(false);

        verticalLayout_2->addWidget(edtFornecedor);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);

        verticalLayout->addWidget(label_4);

        edtValor = new QLineEdit(layoutWidget1);
        edtValor->setObjectName(QString::fromUtf8("edtValor"));
        edtValor->setEnabled(false);

        verticalLayout->addWidget(edtValor);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        horizontalLayout_5->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setEnabled(true);

        verticalLayout_8->addWidget(label_8);

        edtId = new QLineEdit(layoutWidget1);
        edtId->setObjectName(QString::fromUtf8("edtId"));
        edtId->setEnabled(false);

        verticalLayout_8->addWidget(edtId);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);

        verticalLayout_6->addWidget(label_7);

        cbxStatus = new QComboBox(layoutWidget1);
        cbxStatus->addItem(QString());
        cbxStatus->addItem(QString());
        cbxStatus->setObjectName(QString::fromUtf8("cbxStatus"));
        cbxStatus->setEnabled(false);

        verticalLayout_6->addWidget(cbxStatus);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnLimparTudo = new QPushButton(layoutWidget1);
        btnLimparTudo->setObjectName(QString::fromUtf8("btnLimparTudo"));

        horizontalLayout_3->addWidget(btnLimparTudo);

        btnAdicionar = new QPushButton(layoutWidget1);
        btnAdicionar->setObjectName(QString::fromUtf8("btnAdicionar"));

        horizontalLayout_3->addWidget(btnAdicionar);

        btnPagar = new QPushButton(layoutWidget1);
        btnPagar->setObjectName(QString::fromUtf8("btnPagar"));

        horizontalLayout_3->addWidget(btnPagar);

        btnEditar = new QPushButton(layoutWidget1);
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
        cbxInput->setItemText(0, QApplication::translate("faturas", "Nenhuma descri\303\247\303\243o", nullptr));
        cbxInput->setItemText(1, QApplication::translate("faturas", "Fornecedor", nullptr));
        cbxInput->setItemText(2, QApplication::translate("faturas", "Valor", nullptr));
        cbxInput->setItemText(3, QApplication::translate("faturas", "Data de vencimento", nullptr));
        cbxInput->setItemText(4, QApplication::translate("faturas", "Status de pagamento", nullptr));

        btnPesquisar->setText(QApplication::translate("faturas", "Pesquisar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("faturas", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("faturas", "Fornecedor", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("faturas", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("faturas", "Data de vencimento", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("faturas", "Status de pagamento", nullptr));
        label_2->setText(QApplication::translate("faturas", "Data de vencimento:", nullptr));
        label_3->setText(QApplication::translate("faturas", "Fornecedor:", nullptr));
        label_4->setText(QApplication::translate("faturas", "Valor:", nullptr));
        label_8->setText(QApplication::translate("faturas", "Id", nullptr));
        label_7->setText(QApplication::translate("faturas", "Status de pagamento:", nullptr));
        cbxStatus->setItemText(0, QApplication::translate("faturas", "Em pendente", nullptr));
        cbxStatus->setItemText(1, QApplication::translate("faturas", "Pagado", nullptr));

        btnLimparTudo->setText(QApplication::translate("faturas", "Limpar tudo", nullptr));
        btnAdicionar->setText(QApplication::translate("faturas", "Adicionar", nullptr));
        btnPagar->setText(QApplication::translate("faturas", "Pagar", nullptr));
        btnEditar->setText(QApplication::translate("faturas", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class faturas: public Ui_faturas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FATURAS_H
