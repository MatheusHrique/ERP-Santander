#include "riscosfinanceiros.h"
#include "ui_riscosfinanceiros.h"
#include "dashboard.h"
#include <QApplication>
#include <QDesktopWidget>

riscosFinanceiros::riscosFinanceiros(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::riscosFinanceiros)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

riscosFinanceiros::~riscosFinanceiros()
{
    delete ui;
}

void riscosFinanceiros::on_btnVoltar_clicked()
{
    Dashboard *d = new Dashboard(ui->lblID->text());
    d->show();
    this->close();
}
