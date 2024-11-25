#include "compararperiodos.h"
#include "ui_compararperiodos.h"
#include "entradassaidas.h"
#include <QApplication>
#include <QDesktopWidget>

compararPeriodos::compararPeriodos(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::compararPeriodos)
{
    ui->setupUi(this);
    ui->lblID->setText(id);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

compararPeriodos::~compararPeriodos()
{
    delete ui;
}

void compararPeriodos::on_btnVoltar_clicked()
{
    entradasSaidas *e = new entradasSaidas(ui->lblID->text());
    e->show();
    this->close();
}
