#include "contaspagarreceber.h"
#include "ui_contaspagarreceber.h"
#include "dashboard.h"
#include "faturas.h"
#include "transacoes.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QApplication>
#include <QDesktopWidget>

contasPagarReceber::contasPagarReceber(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::contasPagarReceber)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

contasPagarReceber::~contasPagarReceber()
{
    delete ui;
}

void contasPagarReceber::on_btnFaturas_clicked()
{
    faturas *f = new faturas(ui->lblID->text());
    f->show();
    this->close();
}

void contasPagarReceber::on_btnTransacoes_clicked()
{
    transacoes *t = new transacoes(ui->lblID->text());
    t->show();
    this->close();
}

void contasPagarReceber::on_btnVoltar_clicked()
{
    Dashboard *d = new Dashboard(ui->lblID->text());
    d->show();
    this->close();
}
