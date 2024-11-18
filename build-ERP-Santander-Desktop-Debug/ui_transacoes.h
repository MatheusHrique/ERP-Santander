/********************************************************************************
** Form generated from reading UI file 'transacoes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACOES_H
#define UI_TRANSACOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transacoes
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;
    QPushButton *btnVoltar;

    void setupUi(QWidget *transacoes)
    {
        if (transacoes->objectName().isEmpty())
            transacoes->setObjectName(QString::fromUtf8("transacoes"));
        transacoes->resize(240, 320);
        layoutWidget = new QWidget(transacoes);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 72, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);

        btnVoltar = new QPushButton(transacoes);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(80, 240, 89, 25));

        retranslateUi(transacoes);

        QMetaObject::connectSlotsByName(transacoes);
    } // setupUi

    void retranslateUi(QWidget *transacoes)
    {
        transacoes->setWindowTitle(QApplication::translate("transacoes", "Form", nullptr));
        label->setText(QApplication::translate("transacoes", "Id atual:", nullptr));
        lblID->setText(QString());
        btnVoltar->setText(QApplication::translate("transacoes", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transacoes: public Ui_transacoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACOES_H
