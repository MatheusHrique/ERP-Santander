#include "login.h"
#include "ui_login.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include "apresentacao.h"
#include "dashboard.h"
#include <QSqlError>
#include <QApplication>
#include <QDesktopWidget>
#include <QCryptographicHash>
#include "bcript.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnCancelar_clicked()
{
    Apresentacao *a= new Apresentacao();
    a->show();
    this->close();
}

void Login::on_btnLimparTudo_clicked()
{
    ui->edtCPF->clear();
    ui->edtPassword->clear();
    ui->edtCPF->setFocus();
}

void Login::on_btnEntrar_clicked()
{
    QString CPF = ui->edtCPF->text();
    QString password = ui->edtPassword->text();
    QSqlQuery query;
    bcript hashGenerator;

//    if(nome.isEmpty() || CPF.isEmpty() || password.isEmpty()){
//        QMessageBox::warning(this, "Aviso", "Tenha certeza que inseriu todas as informações!");
//    } else if(!nome.isEmpty() && !CPF.isEmpty() && !password.isEmpty()){

    if (CPF.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Tenha certeza que inseriu todas as informações!");
    } else if(!CPF.isEmpty() && !password.isEmpty()){
        try {
            QString hashedPassword = hashGenerator.generateHash(password);
            query.prepare("SELECT * FROM Clientes WHERE CPF = :VARcpf AND password = :VARpassword");
            query.bindValue(":VARcpf", CPF);
            query.bindValue(":VARpassword", hashedPassword);
            QMessageBox::warning(this, "Aviso", "Senha hashed: " + hashedPassword);

            if (query.exec()) {
                if (query.next()) { // move o cursor para a primeira linha do resultado
                    QString id = query.value("id").toString(); // QVariant.toString();
                    Dashboard *d = new Dashboard(id);
                    d->show();
                    this->close();
                } else {
                    ui->edtCPF->clear();
                    ui->edtPassword->clear();
                    ui->edtCPF->setFocus();
                    QMessageBox::warning(this, "Aviso", "Senha ou CPF incorreto!");
                }
            } else {
                qDebug() << "Erro ao executar a consulta de clientes:" << query.lastError().text();
                QMessageBox::warning(this, "Erro!", "Um erro desconhecido aconteceu!");
            }
        } catch (...) {
            QMessageBox::warning(this, "Erro!", "Erro desconhecido!");
        }
    } else {
        QMessageBox::warning(this, "Aviso", "Algo deu errado!");
    }
}

