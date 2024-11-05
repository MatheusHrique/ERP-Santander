#include "apresentacao.h"
#include "ui_apresentacao.h"
#include "login.h"
#include "register.h"

Apresentacao::Apresentacao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Apresentacao)
{
    ui->setupUi(this);
}

Apresentacao::~Apresentacao()
{
    delete ui;
}

void Apresentacao::on_btnLogin_clicked()
{
    Login *l= new Login();
    l->show();
    this->close();
}

void Apresentacao::on_btnRegister_clicked()
{
    Register *r= new Register();
    r->show();
    this->close();
}
