#ifndef FATURAS_H
#define FATURAS_H

#include <QWidget>

namespace Ui {
class faturas;
}

class faturas : public QWidget
{
    Q_OBJECT

public:
    explicit faturas(QString id, QWidget *parent = nullptr);
    ~faturas();

private slots:
    void on_btnVoltar_clicked();

    void atualizarTabela(QString prepareValue);

    void on_btnPesquisar_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_btnPagar_clicked();

    void on_btnEditar_clicked();

    void on_btnAdicionar_clicked();

private:
    Ui::faturas *ui;
};

#endif // FATURAS_H
