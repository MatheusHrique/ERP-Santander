#include "register.h"
#include "ui_register.h"
#include "apresentacao.h"
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include "login.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
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
    QString senha = ui->edtPassword->text();

    QString typeUser = "";
    int n=0;
    int erro=-1;
    QSqlQuery query;

    if(nome || CPF || senha){
        erro=0;
    } else if(nome==false || CPF==false || senha==false){
        erro=1;
        QMessageBox::warning(this, "Aviso", "Tenha certeza que inseriu todas as informações!");
    } else {
        QMessageBox::warning(this, "Aviso", "Algo deu errado!");
        erro=1;
    }

    if(erro==false){
        QString parametro = "";
        QString parametro2 = "";
    switch(n){
        case 0:
            typeUser="Clientes";
            parametro="nome, CPF, senha";
            parametro2="'"+nome+"', '"+CPF+"', '"+senha+"'";
        break;
    }

    if(query.exec("INSERT INTO "+typeUser+" ("+parametro+") VALUES ("+parametro2+")"));
    QMessageBox::warning(this, "Aviso", "O registro de "+nome+" foi realizado com sucesso!");

    this->close();
    Login *l= new Login();
    l->show();

    }
}
