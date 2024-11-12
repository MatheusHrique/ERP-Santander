#include "initialwindow.h"
#include "ui_initialwindow.h"
#include <QtSql>
#include <QSqlQuery>
#include "apresentacao.h"
#include <QMessageBox>
#include <QApplication>
#include <QDesktopWidget>

initialWindow::initialWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::initialWindow)
{
    ui->setupUi(this);

    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);

    QString end_bancoo = "/home/aluno/Documentos/matheus/ERP-Santander-sql";
    bancoDeDados.setDatabaseName(end_bancoo);
    if(!bancoDeDados.open()){
        QMessageBox::warning(this, "Aviso", "Banco de dados: Caminhos não carregado!");
    }
}

initialWindow::~initialWindow()
{
    delete ui;
}


void initialWindow::on_btnExecuteProject_clicked()
{
    QSqlQuery query;
    if(!bancoDeDados.open()){
        QMessageBox::warning(this, "Aviso", "Banco não encontrado!");
    } else {
        QMessageBox::information(this, "Aviso", "Banco encontrado!");

        Apresentacao *a= new Apresentacao();
        a->show();
        this->close();
    }
}
