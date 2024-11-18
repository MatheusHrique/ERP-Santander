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

private:
    Ui::faturas *ui;
};

#endif // FATURAS_H
