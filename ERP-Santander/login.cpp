#include "login.h"
#include "ui_login.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include "apresentacao.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnCancelar_clicked()
{

}

void Login::on_btnLimparTudo_clicked()
{
    ui->edtCPF->clear();
    ui->edtSenha->clear();
    ui->edtCPF->setFocus();
}

void Login::on_btnEntrar_clicked()
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
            parametro="nome, CPF, email, senha";
            parametro2="'"+nome+"', '"+CPF+"', '"+senha+"'";
        break;
    }

    if(query.exec("INSERT INTO "+typeUser+" ("+parametro+") VALUES ("+parametro2+")"));
    QMessageBox::warning(this, "Aviso", "O registro de "+nome+" foi realizado com sucesso!");

    this->close();
    Login *l= new Login();
    l->show();






    QString CPF = ui->edtCPF->text();
    QString senha = ui->edtPassword->text();

    QString typeUser = "";
    int n=-1;
    int erro=0;

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

    QSqlQuery query;
    if(query.exec("SELECT * FROM "+typeUser+" WHERE nome='"+input+"' AND senha='"+senha+"'"));
        int cont=0;
        while(query.next()){
            cont++;
        }
        if(cont>0){
            lojaOpcoes *entrarmenu= new lojaOpcoes(admin);
            entrarmenu->show();
            this->close();
        }else{
            ui->txtInput->clear();
            ui->txtSenha->clear();
            ui->txtInput->setFocus();
            QMessageBox::warning(this, "Aviso", "Senha ou usuario incorreto!");
        }
    }
}
