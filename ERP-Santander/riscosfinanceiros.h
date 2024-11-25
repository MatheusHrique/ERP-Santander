#ifndef RISCOSFINANCEIROS_H
#define RISCOSFINANCEIROS_H

#include <QWidget>

namespace Ui {
class riscosFinanceiros;
}

class riscosFinanceiros : public QWidget
{
    Q_OBJECT

public:
    explicit riscosFinanceiros(QString id, QWidget *parent = nullptr);
    ~riscosFinanceiros();

private slots:
    void on_btnVoltar_clicked();

private:
    Ui::riscosFinanceiros *ui;
};

#endif // RISCOSFINANCEIROS_H
