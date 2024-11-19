#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "apresentacao.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QApplication>
#include <QDesktopWidget>
#include "contaspagarreceber.h"

Dashboard::Dashboard(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_btnLogout_clicked()
{
    QMessageBox::information(this, "Aviso", "Saindo da conta!");

    Apresentacao *a= new Apresentacao();
    a->show();
    this->close();
}

void Dashboard::on_btnCheckConta_clicked()
{
    QString id = ui->lblID->text();
    QMessageBox::warning(this, "Aviso", "Informações a partir do id atual: " + id);
    QString CPF = "";
    QString nome = "";
    QString password = "";
    QSqlQuery query;

    try {
        query.prepare("SELECT CPF, nome, password FROM Clientes WHERE id=:id");
        query.bindValue(":id", id);

        if(query.exec()) {
            if (query.next()) {
                CPF = query.value("CPF").toString();
                nome = query.value("nome").toString();
                password = query.value("password").toString();

                QMessageBox::information(this, "Informações da Conta", "Nome: " + nome + "\nCPF: " + CPF + "\nSenha: " + password);
            } else {
                qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
                QMessageBox::warning(this, "Aviso", "Nenhum cliente encontrado com o ID fornecido.");
            }
        } else {
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
            QMessageBox::warning(this, "Erro", "Erro ao executar a consulta: " + query.lastError().text());
        }
    } catch (...) {
        QMessageBox::warning(this, "Erro!", "Erro desconhecido!");
    }
}


void Dashboard::on_btnContasPagarReceber_clicked()
{
    contasPagarReceber *c = new contasPagarReceber(ui->lblID->text());
    c->show();
    this->close();
}
