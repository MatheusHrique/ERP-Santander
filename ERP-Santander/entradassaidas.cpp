#include "entradassaidas.h"
#include "ui_entradassaidas.h"
#include "dashboard.h"
#include "compararperiodos.h"
#include <QApplication>
#include <QDesktopWidget>

entradasSaidas::entradasSaidas(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::entradasSaidas)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

entradasSaidas::~entradasSaidas()
{
    delete ui;
}

void entradasSaidas::on_btnCompararPeriodos_clicked()
{
    compararPeriodos *c = new compararPeriodos(ui->lblID->text());
    c->show();
    this->close();
}

void entradasSaidas::on_btnVoltar_clicked()
{
    Dashboard *d = new Dashboard(ui->lblID->text());
    d->show();
    this->close();
}
