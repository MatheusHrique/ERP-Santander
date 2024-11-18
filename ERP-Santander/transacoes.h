#ifndef TRANSACOES_H
#define TRANSACOES_H

#include <QWidget>

namespace Ui {
class transacoes;
}

class transacoes : public QWidget
{
    Q_OBJECT

public:
    explicit transacoes(QString id, QWidget *parent = nullptr);
    ~transacoes();

private slots:
    void on_btnVoltar_clicked();

private:
    Ui::transacoes *ui;
};

#endif // TRANSACOES_H
