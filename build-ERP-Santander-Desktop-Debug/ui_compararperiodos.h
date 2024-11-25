/********************************************************************************
** Form generated from reading UI file 'compararperiodos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARARPERIODOS_H
#define UI_COMPARARPERIODOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_compararPeriodos
{
public:
    QPushButton *btnVoltar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblID;

    void setupUi(QWidget *compararPeriodos)
    {
        if (compararPeriodos->objectName().isEmpty())
            compararPeriodos->setObjectName(QString::fromUtf8("compararPeriodos"));
        compararPeriodos->resize(414, 379);
        btnVoltar = new QPushButton(compararPeriodos);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setGeometry(QRect(250, 60, 89, 25));
        layoutWidget = new QWidget(compararPeriodos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 72, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        horizontalLayout->addWidget(lblID);


        retranslateUi(compararPeriodos);

        QMetaObject::connectSlotsByName(compararPeriodos);
    } // setupUi

    void retranslateUi(QWidget *compararPeriodos)
    {
        compararPeriodos->setWindowTitle(QApplication::translate("compararPeriodos", "Comparar per\303\255odos", nullptr));
        btnVoltar->setText(QApplication::translate("compararPeriodos", "Voltar", nullptr));
        label->setText(QApplication::translate("compararPeriodos", "Id atual:", nullptr));
        lblID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class compararPeriodos: public Ui_compararPeriodos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARARPERIODOS_H
