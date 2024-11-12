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
    int erro=-1;
    QSqlQuery query;


    if(nome.toUtf8().constData() || CPF.toUtf8().constData() || password.toUtf8().constData()){
        erro=0;
    } else if(!nome.toUtf8().constData() || !CPF.toUtf8().constData() || !password.toUtf8().constData()){
        erro=1;
        QMessageBox::warning(this, "Aviso", "Tenha certeza que inseriu todas as informações!");
    } else {
        QMessageBox::warning(this, "Aviso", "Algo deu errado!");
        erro=1;
    }

    try {
    if(query.exec("INSERT INTO Clientes (nome, CPF, password) VALUES ('"+nome+"', '"+CPF+"', '"+password+"')"));
    QMessageBox::warning(this, "Aviso", "O registro de "+nome+" foi realizado com sucesso!");

    this->close();
    Login *l= new Login();
    l->show();

    } catch (...) {
        qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
    }
   }
