#ifndef CONTASPAGARRECEBER_H
#define CONTASPAGARRECEBER_H

#include <QWidget>

namespace Ui {
class contasPagarReceber;
}

class contasPagarReceber : public QWidget
{
    Q_OBJECT

public:
    explicit contasPagarReceber(QString id, QWidget *parent = nullptr);
    ~contasPagarReceber();

private slots:
    void on_btnFaturas_clicked();

    void on_btnTransacoes_clicked();

    void on_btnVoltar_clicked();

private:
    Ui::contasPagarReceber *ui;
};

#endif // CONTASPAGARRECEBER_H
