#include "transacoes.h"
#include "ui_transacoes.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QApplication>
#include <QDesktopWidget>
#include "contaspagarreceber.h"

transacoes::transacoes(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transacoes)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

transacoes::~transacoes()
{
    delete ui;
}

void transacoes::on_btnVoltar_clicked()
{
    contasPagarReceber *c = new contasPagarReceber(ui->lblID->text());
    c->show();
    this->close();
}
