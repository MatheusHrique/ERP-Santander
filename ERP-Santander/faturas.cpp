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
    carregarFaturas();
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

void faturas::carregarFaturas() {
    QSqlQuery query;
    QString idCliente = ui->lblID->text();
    query.prepare("SELECT id, fornecedor, valor, data_vencimento, status_pagamento FROM Faturas WHERE id_cliente = :id_cliente");
    query.bindValue(":id_cliente", idCliente);

    if (query.exec()) {
        while (query.next()) {
            int id = query.value(0).toInt();
            QString fornecedor = query.value(1).toString();
            double valor = query.value(2).toDouble();
            QDate dataVencimento = query.value(3).toDate(); // Date está retornando vazio na tabela
            QString statusPagamento = query.value(4).toString();

            int row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(id)));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(fornecedor));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(valor)));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(dataVencimento.toString()));
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(statusPagamento));
        }
    } else {
        qDebug() << "Erro ao carregar faturas:" << query.lastError().text();
        QMessageBox::warning(this, "Erro", "Erro ao carregar faturas!");
    }
}

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


//void buyProduto::on_btn_comprar_clicked()
//{
//    QString indexCbx = ui->cbxInput->itemText(ui->cbxInput->currentIndex());
//    QString input = ui->txtInput->text();
//    int valido = 0;
//    QString parametroSearch="";
//    QSqlQuery query;

//    if(indexCbx=="Id"){
//        indexCbx="id_produtos";
//        parametroSearch= ""+input;

//    } else if(indexCbx=="Nome"){
//        indexCbx="nome";
//        parametroSearch="'"+input+"'";
//    }

//    if(query.exec("SELECT * FROM Produtos WHERE "+indexCbx+"="+parametroSearch));
//        int cont=0;
//        while(query.next()){
//            cont++;
//        }
//        if(cont>0){
//            valido=1;
//        }else{
//            ui->txtInput->clear();
//            ui->txtInput->setFocus();
//            QMessageBox::warning(this, "Aviso", "Produto inexistente!");
//        }

//        if(valido!=0){
//            QMessageBox::StandardButton resposta;
//            resposta = QMessageBox::question(this, "Confirmação", "Você quer comprar este produto?");
//            if(resposta==QMessageBox::Yes){
//            QSqlQuery query;

//            query.prepare("DELETE FROM Produtos WHERE "+indexCbx+"=" + parametroSearch);

//            if(query.exec()){
//                QMessageBox::information(this, "", "Produto comprado!");
//                ui->txtInput->clear();
//            } else {
//                QMessageBox::warning(this, "ERRO", "Erro ao comprar o produto!");
//            }
//            }
//        }
//}

//void buyProduto::on_cbxInput_currentIndexChanged(int index)
//{
//    if(index==0){
//        ui->lblInput->setText("Id:");
//        ui->txtInput->setPlaceholderText("Coloque um Id aqui");
//    } else if(index==1){
//        ui->lblInput->setText("Nome:");
//        ui->txtInput->setPlaceholderText("Coloque um nome aqui");
//    } else {
//        ui->lblInput->setText("Wtf, deu erro!");
//    }
//}

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
            ui->tableWidget->setItem(cont, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(cont, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(cont, 3, new QTableWidgetItem(query.value(3).toString()));
            cont++;
        }
    } else {
        qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        QMessageBox::warning(this, "Erro!", "Um erro desconhecido aconteceu!");
    }
}

//void buyProduto::on_tw_painossoqueestanoceu_clicked(const QModelIndex &index)
//{
//    int linha = ui->tw_painossoqueestanoceu->currentRow();
//    QString indexCbx = ui->cbxInput->itemText(ui->cbxInput->currentIndex());
//    QString parametros="";
//    int isInt=-1;
//    if(indexCbx=="Id"){
//        int id = ui->tw_painossoqueestanoceu->item(linha, 0)->text().toInt();
//        parametros="SELECT * FROM Produtos WHERE id_produtos="+QString::number(id);
//        isInt=1;
//    } else if(indexCbx=="Nome"){
//        QString nome = ui->tw_painossoqueestanoceu->item(linha, 1)->text();
//        parametros="SELECT * FROM Produtos WHERE nome="+nome;
//        isInt=0;
//    }
//    QSqlQuery query;
//    query.prepare(parametros);
//    if(query.exec()){
//        query.first();

//        if(isInt==1){
//        ui->txtInput->setText(query.value(0).toString());
//        } else if(isInt==0){
//            ui->txtInput->setText(query.value(1).toString());
//        }
//    } else {
//        QMessageBox::warning(this, "ERRO", "Erro ao selecionar");
//    }
//    atualizarTabela("SELECT * FROM Produtos");
//}

void faturas::on_btnPesquisar_clicked()
{
    QString indexCbx = ui->cbxInput->itemText(ui->cbxInput->currentIndex());
    QString input = ui->edtPesquisar->text();
    QString parametroSearch="";

    if(indexCbx=="Fornecedor"){
        indexCbx="fornecedor";
        parametroSearch= ""+input;

    } else if(indexCbx=="Valor"){
        indexCbx="valor";
        parametroSearch="'"+input+"'";
    } else if(indexCbx=="Data de vencimento"){
        indexCbx="data_vencimento";
        parametroSearch="'"+input+"'";
    } else if(indexCbx=="Status de pagamento"){
        indexCbx="status_pagamento";
        parametroSearch="'"+input+"'";
    } else {
        indexCbx="id_cliente";
        parametroSearch=""+ui->lblID->text();
    } // OBJETIVO ATUAL DO PROJETO: FAZER O PESQUISAR FATURAS FUNCIONAR && TERMINAR FATURAS!!

    atualizarTabela("SELECT * FROM Faturas WHERE "+indexCbx+"="+parametroSearch);
}
