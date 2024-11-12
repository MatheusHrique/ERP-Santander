#include "apresentacao.h"
#include "ui_apresentacao.h"
#include "login.h"
#include "register.h"
#include <QApplication>
#include <QDesktopWidget>

Apresentacao::Apresentacao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Apresentacao)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
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

void Apresentacao::on_btnFechar_clicked()
{
    this->close();
}
