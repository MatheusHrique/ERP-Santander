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

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->selectRow(0);
    ui->tableWidget->setColumnWidth(0, 15);
    ui->tableWidget->setColumnWidth(1, 150);
    ui->tableWidget->setColumnWidth(2, 50);
    ui->tableWidget->setColumnWidth(3, 150);
    ui->tableWidget->setColumnWidth(4, 150);

    QStringList cabecalho={"Id", "Fornecedor", "Valor", "Vencimento", "Status"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color: yellow}");
    atualizarTabela("SELECT * FROM Faturas WHERE id_cliente="+id);
    ui->btnCancelar->setVisible(false);
}

faturas::~faturas()
{
    delete ui;
}

void faturas::on_btnVoltar_clicked()
{
    contasPagarReceber *c = new contasPagarReceber(ui->lblID->text());
    c->show();
    this->close();
}

void faturas::atualizarTabela(QString prepareValue){
    int cout=0;
    while( (ui->tableWidget->rowCount()) > cout){
        ui->tableWidget->removeRow(cout);
        cout++;
    }
    ui->tableWidget->removeRow(0);

    QSqlQuery query;
    query.prepare(prepareValue);
    if(query.exec()){
        int cont=0;
        while(query.next()){
            ui->tableWidget->insertRow(cont);
            ui->tableWidget->setItem(cont, 0, new QTableWidgetItem(query.value(0).toString())); // para inserir o item precisa da linha, coluna e o QTableWidgeItem
            ui->tableWidget->setItem(cont, 1, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(cont, 2, new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(cont, 3, new QTableWidgetItem(query.value(4).toString()));
            ui->tableWidget->setItem(cont, 4, new QTableWidgetItem(query.value(5).toString()));
            cont++;
        }
    } else {
        qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        QMessageBox::warning(this, "Erro!", "Um erro desconhecido aconteceu!");
    }
}

void faturas::on_btnPesquisar_clicked()
{
    QString indexCbx = ui->cbxInput->itemText(ui->cbxInput->currentIndex());
    QString parametroSearch="'"+ui->edtPesquisar->text()+"'";

    if(indexCbx=="Fornecedor") indexCbx="fornecedor";
    else if(indexCbx=="Valor") indexCbx="valor";
    else if(indexCbx=="Data de vencimento") indexCbx="data_vencimento";
    else if(indexCbx=="Status de pagamento") indexCbx="status_pagamento";
    else {
        indexCbx="id_cliente";
        parametroSearch=""+ui->lblID->text();
    }
    QMessageBox::warning(this, "indexCbx!", indexCbx);
    QMessageBox::warning(this, "indexCbx!", "SELECT * FROM Faturas WHERE "+indexCbx+"="+parametroSearch);
    if(!parametroSearch.isEmpty()) atualizarTabela("SELECT * FROM Faturas WHERE "+indexCbx+"="+parametroSearch);
    else QMessageBox::warning(this, "Erro!", "Você precisa pesquisar pôr algum valor!");
}

void faturas::on_tableWidget_cellClicked(int row, int column)
{
    if(ui->edtFornecedor->isEnabled()){
        ui->edtId->setText(ui->tableWidget->item(row, 0)->text());
        ui->edtFornecedor->setText(ui->tableWidget->item(row, 1)->text());
        ui->edtValor->setText(ui->tableWidget->item(row, 2)->text());
        ui->dateEdit->setDate(QDate::fromString(ui->tableWidget->item(row, 3)->text(),"yyyy-MM-dd")); // Pode dar erro aqui
        if(ui->tableWidget->item(row, 4)->text()=="Em pendente") ui->cbxStatus->setCurrentIndex(0);
        else ui->cbxStatus->setCurrentIndex(1);
    }
}

void faturas::on_btnPagar_clicked()
{ // precisa verificar se tem uma row selecionada e se essa row tá pagado ou não
    if(ui->tableWidget->selectedItems().isEmpty()){
        QMessageBox::information(this, "Aviso", "Você precisa selecionar uma coluna para editar");
        return;
    } // ui->tableWidget->item(ui->tableWidget->currentRow(), 4)
    if(ui->tableWidget->item(ui->tableWidget->currentRow(), 4)->text()!="Em pendente"){
        QMessageBox::information(this, "Aviso", "Essa fatura está pagado.");
        return;
    }
    int row = ui->tableWidget->currentRow();
    QMessageBox::information(this, "Informações da fatura selecionada.", "Fornecedor: "+ui->tableWidget->item(row, 1)->text()+". \nValor: "+ui->tableWidget->item(row, 2)->text()+". \nData de vencimento: "+ui->tableWidget->item(row, 3)->text()+". \nStatus de pagamento: "+ui->tableWidget->item(row, 4)->text()+".");
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Confirmação", "Você quer pagar essa fatura?");
    if(resposta==QMessageBox::Yes){
        QSqlQuery query;
        query.prepare("DELETE FROM Faturas WHERE id="+ui->tableWidget->item(row, 0)->text());
        if(query.exec()){
            atualizarTabela("SELECT * FROM Faturas WHERE id_cliente="+ui->lblID->text());
            QMessageBox::information(this, "Aviso", "Fatura pagado!");
            ui->edtFornecedor->clear();
            ui->edtId->clear();
            ui->edtValor->clear();
            ui->dateEdit->setDate(QDate::currentDate());
            ui->cbxStatus->setCurrentIndex(0);
        } else {
            QMessageBox::warning(this, "Erro!", "Erro ao realizar fatura!");
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        }
    }

}

void faturas::on_btnEditar_clicked()
{
    if(ui->tableWidget->selectedItems().isEmpty()){
        QMessageBox::information(this, "Aviso", "Você precisa selecionar uma coluna para editar");
        return;
    }
    bool e = ui->edtFornecedor->isEnabled();
    if(e) e=false;
    else {
        e=true;
        ui->btnAdicionar->setEnabled(false);
        ui->btnPagar->setEnabled(false);
        ui->btnCancelar->setEnabled(true);
        ui->btnCancelar->setVisible(true);
        ui->edtFornecedor->setEnabled(e);
        ui->edtId->setEnabled(e);
        ui->edtValor->setEnabled(e);
        ui->dateEdit->setEnabled(e);
        ui->cbxStatus->setEnabled(e);
        ui->btnEditar->setText("Salvar");
    }
    if(e) on_tableWidget_cellClicked(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn());
    else {
        int row = ui->tableWidget->currentRow();
        QString fornecedor = ui->edtFornecedor->text();
        QString id = ui->edtId->text();
        QString valor = ui->edtValor->text();
        QDate data = ui->dateEdit->date(); // QDate::fromString(ui->dateEdit->text(),"yyyy-MM-dd");
        QString dataString = data.toString("dd/MM/yyyy");
        QString status = ui->cbxStatus->currentText();

        QMessageBox::information(this, "Informações da fatura selecionada.", "Fornecedor: "+fornecedor+". \nValor: "+valor+". \nData de vencimento: "+dataString+". \nStatus de pagamento: "+status+".");
        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Confirmação", "Você quer salvar essa modificação?");
        if(resposta==QMessageBox::Yes){
            QSqlQuery query;
            query.prepare("UPDATE Faturas SET fornecedor=:fornecedor, data_vencimento=:data, status_pagamento=:status, valor=:valor WHERE id=:id");
            query.bindValue(":fornecedor", fornecedor);
            query.bindValue(":data", dataString);
            query.bindValue(":status", status);
            query.bindValue(":valor", valor);
            query.bindValue(":id", id);
            if(query.exec()){
                atualizarTabela("SELECT * FROM Faturas WHERE id_cliente="+id);
                QMessageBox::information(this, "Aviso", "Alterações aplicadas!");
                ui->btnAdicionar->setEnabled(true);
                ui->btnPagar->setEnabled(true);
                ui->edtFornecedor->clear();
                ui->edtId->clear();
                ui->edtValor->clear();
                ui->dateEdit->setDate(QDate::currentDate());
                ui->cbxStatus->setCurrentIndex(0);
                ui->tableWidget->setCurrentItem(ui->tableWidget->itemAt(-1, -1));
                ui->btnEditar->setText("Editar");
                ui->btnCancelar->setVisible(false);
                ui->btnCancelar->setEnabled(false);

                ui->edtFornecedor->setEnabled(e);
                ui->edtId->setEnabled(e);
                ui->edtValor->setEnabled(e);
                ui->dateEdit->setEnabled(e);
                ui->cbxStatus->setEnabled(e);
                atualizarTabela("SELECT * FROM Faturas WHERE id_cliente="+ui->lblID->text());
            } else {
                QMessageBox::warning(this, "Erro!", "Erro ao realizar alteração!");
                qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
            }
        }
    }
}

void faturas::on_btnAdicionar_clicked()
{
    bool e = ui->edtFornecedor->isEnabled();
    if(e) e=false;
    else {
        e=true;
        ui->btnEditar->setEnabled(false);
        ui->btnPagar->setEnabled(false);
        ui->btnCancelar->setEnabled(true);
        ui->btnCancelar->setVisible(true);
        ui->edtFornecedor->setEnabled(e);
        ui->edtId->setEnabled(false);
        ui->edtValor->setEnabled(e);
        ui->dateEdit->setEnabled(e);
        ui->cbxStatus->setEnabled(e);
        ui->btnAdicionar->setText("Salvar");
    }
    if(!e){
        QString fornecedor = ui->edtFornecedor->text();
        QString valor = ui->edtValor->text();
        QDate data = ui->dateEdit->date(); // QDate::fromString(ui->dateEdit->text(),"yyyy-MM-dd");
        QString dataString = data.toString("dd/MM/yyyy");
        QString status = ui->cbxStatus->currentText();

        QMessageBox::information(this, "Adicionar fatura das seguintes informações.", "Fornecedor: "+fornecedor+". \nValor: "+valor+". \nData de vencimento: "+dataString+". \nStatus de pagamento: "+status+".");
        QMessageBox::StandardButton resposta;
        resposta = QMessageBox::question(this, "Confirmação", "Você quer adicionar essa fatura?");
        if(resposta==QMessageBox::Yes){
            QSqlQuery query;
            query.prepare("INSERT INTO Faturas (fornecedor, id_cliente, data_vencimento, status_pagamento, valor) VALUES ('"+fornecedor+"', "+ui->lblID->text()+", '"+dataString+"', '"+status+"', "+valor+")");
            if(query.exec()){
                atualizarTabela("SELECT * FROM Faturas WHERE id_cliente="+ui->lblID->text());
                QMessageBox::information(this, "Aviso", "Fatura adicionada!");
                ui->btnEditar->setEnabled(true);
                ui->btnPagar->setEnabled(true);
                ui->btnAdicionar->setText("Adicionar");
                ui->edtFornecedor->clear();
                ui->edtId->clear();
                ui->edtValor->clear();
                ui->dateEdit->setDate(QDate::currentDate());
                ui->cbxStatus->setCurrentIndex(0);
                ui->tableWidget->setCurrentItem(ui->tableWidget->itemAt(-1, -1));

                ui->edtFornecedor->setEnabled(e);
                ui->edtId->setEnabled(e);
                ui->edtValor->setEnabled(e);
                ui->dateEdit->setEnabled(e);
                ui->cbxStatus->setEnabled(e);
            } else {
                QMessageBox::warning(this, "Erro!", "Erro ao tentar adicionar fatura!");
                qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
            }
        }
    }
}

void faturas::on_btnCancelar_clicked()
{
    ui->edtFornecedor->setEnabled(false);
    ui->edtId->setEnabled(false);
    ui->edtValor->setEnabled(false);
    ui->dateEdit->setEnabled(false);
    ui->cbxStatus->setEnabled(false);

    ui->edtFornecedor->clear();
    ui->edtId->clear();
    ui->edtValor->clear();
    ui->dateEdit->setDate(QDate::currentDate());
    ui->cbxStatus->setCurrentIndex(0);

    ui->btnCancelar->setVisible(false);
    ui->btnCancelar->setEnabled(false);
    ui->btnEditar->setEnabled(true);
    ui->btnAdicionar->setEnabled(true);
    ui->btnPagar->setEnabled(true);
    ui->btnAdicionar->setText("Adicionar");
    ui->btnEditar->setText("Editar");
}
