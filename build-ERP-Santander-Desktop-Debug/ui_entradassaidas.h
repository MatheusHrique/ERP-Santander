/********************************************************************************
** Form generated from reading UI file 'entradassaidas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRADASSAIDAS_H
#define UI_ENTRADASSAIDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entradasSaidas
{
public:
    QPushButton *btnCompararPeriodos;
    QPushButton *btnVoltar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;

    void setupUi(QWidget *entradasSaidas)
    {
        if (entradasSaidas->objectName().isEmpty())
            entradasSaidas->setObjectName(QString::fromUtf8("entradasSaidas"));
        entradasSaidas->resize(401, 365);
        btnCompararPeriodos = new QPushButton(entradasSaidas);
        btnCompararPeriodos->setObjectName(QString::fromUtf8("btnCompararPeriodos"));
        btnCompararPeriodos->setGeometry(QRect(120, 310, 141, 25));
        btnVoltar = new QPushButton(entradasSaidas);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(260, 70, 89, 25));
        layoutWidget = new QWidget(entradasSaidas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 72, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);


        retranslateUi(entradasSaidas);

        QMetaObject::connectSlotsByName(entradasSaidas);
    } // setupUi

    void retranslateUi(QWidget *entradasSaidas)
    {
        entradasSaidas->setWindowTitle(QApplication::translate("entradasSaidas", "Acompanhamento de fluxo de caixa", nullptr));
        btnCompararPeriodos->setText(QApplication::translate("entradasSaidas", "Comparar per\303\255odos", nullptr));
        btnVoltar->setText(QApplication::translate("entradasSaidas", "Voltar", nullptr));
        label->setText(QApplication::translate("entradasSaidas", "Id atual:", nullptr));
        lblID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class entradasSaidas: public Ui_entradasSaidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADASSAIDAS_H
