#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "apresentacao.h"

Dashboard::Dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_btnLogout_clicked()
{
    QMessageBox::information(this, "Aviso", "Saindo da conta!");

    Apresentacao *a= new Apresentacao();
    a->show();
    this->close();
}
