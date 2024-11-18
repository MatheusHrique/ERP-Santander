#include "faturas.h"
#include "ui_faturas.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QApplication>
#include <QDesktopWidget>
#include "contaspagarreceber.h"

faturas::faturas(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::faturas)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

faturas::~faturas()
{
    delete ui;
}

//void adicionarFatura(int clienteId) {
//    QString fornecedor = ui->edtFornecedor->text();
//    double valor = ui->edtValor->text().toDouble();
//    QDate dataVencimento = ui->dateEdit->date();
//    QString statusPagamento = "Pendente";

//    QSqlQuery query;
//    query.prepare("INSERT INTO Faturas (cliente_id, fornecedor, valor, data_vencimento, status_pagamento) "
//                  "VALUES (:cliente_id, :fornecedor, :valor, :data_vencimento, :status_pagamento)");
//    query.bindValue(":cliente_id", clienteId);
//    query.bindValue(":fornecedor", fornecedor);
//    query.bindValue(":valor", valor);
//    query.bindValue(":data_vencimento", dataVencimento);
//    query.bindValue(":status_pagamento", statusPagamento);

//    if (!query.exec()) {
//        qDebug() << "Erro ao adicionar fatura:" << query.lastError().text();
//        QMessageBox::warning(this, "Erro", "Erro ao adicionar fatura!");
//    } else {
//        qDebug() << "Fatura adicionada com sucesso!";
//    }
//}

//void carregarFaturas(int clienteId) {
//    QSqlQuery query;
//    query.prepare("SELECT id, fornecedor, valor, data_vencimento, status_pagamento FROM Faturas WHERE cliente_id = :cliente_id");
//    query.bindValue(":cliente_id", clienteId);

//    if (query.exec()) {
//        while (query.next()) {
//            int id = query.value(0).toInt();
//            QString fornecedor = query.value(1).toString();
//            double valor = query.value(2).toDouble();
//            QDate dataVencimento = query.value(3).toDate();
//            QString statusPagamento = query.value(4).toString();

//            int row = ui->tableWidget->rowCount();
//            ui->tableWidget->insertRow(row);
//            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(id)));
//            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(fornecedor));
//            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(valor)));
//            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(dataVencimento.toString()));
//            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(statusPagamento));
//        }
//    } else {
//        qDebug() << "Erro ao carregar faturas:" << query.lastError().text();
//        QMessageBox::warning(this, "Erro", "Erro ao carregar faturas!");
//    }
//}

//void atualizarFatura(int faturaId, QString novoStatus) {
//    QSqlQuery query;
//    query.prepare("UPDATE Faturas SET status_pagamento = :novo_status WHERE id = :fatura_id");
//    query.bindValue(":novo_status", novoStatus);
//    query.bindValue(":fatura_id", faturaId);

//    if (!query.exec()) {
//        qDebug() << "Erro ao atualizar fatura:" << query.lastError().text();
//        QMessageBox::warning(this, "Erro", "Erro ao atualizar fatura!");
//    } else {
//        qDebug() << "Fatura atualizada com sucesso!";
//    }
//}

void faturas::on_btnVoltar_clicked()
{
    contasPagarReceber *c = new contasPagarReceber(ui->lblID->text());
    c->show();
    this->close();
}
