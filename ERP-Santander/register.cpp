#include "register.h"
#include "ui_register.h"
#include "apresentacao.h"
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include "login.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QCryptographicHash>
#include "bcript.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Register::~Register()
{
    delete ui;
}

void Register::on_btnCancelar_clicked()
{
    Apresentacao *a= new Apresentacao();
    a->show();
    this->close();
}

void Register::on_btnLimparTudo_clicked()
{
    ui->edtCPF->clear();
    ui->edtNome->clear();
    ui->edtPassword->clear();
    ui->edtNome->setFocus();
}

void Register::on_btnCriarConta_clicked()
{
    QString nome = ui->edtNome->text();
    QString CPF = ui->edtCPF->text();
    QString password = ui->edtPassword->text();
    QSqlQuery query;
    bcript hashGenerator;

    if(nome.isEmpty() || CPF.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "Aviso", "Tenha certeza que inseriu todas as informações!");
    } else if(!nome.isEmpty() && !CPF.isEmpty() && !password.isEmpty()){
        try {
            QString hashedPassword = hashGenerator.generateHash(password);
            query.prepare("INSERT INTO Clientes (nome, CPF, password) VALUES (:nome, :CPF, :password)");
            query.bindValue(":nome", nome);
            query.bindValue(":CPF", CPF);
            query.bindValue(":password", hashedPassword);

            if (!query.exec()) {
                qDebug() << "Error inserting into table:" << query.lastError().text();
            } else {
                QMessageBox::warning(this, "Aviso", "O registro de "+nome+" foi realizado com sucesso!");
            }

        this->close();
        Login *l= new Login();
        l->show();

        } catch (...) {
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        }

    } else {
        QMessageBox::warning(this, "Aviso", "Algo deu errado!");
    }
}
