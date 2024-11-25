#ifndef ENTRADASSAIDAS_H
#define ENTRADASSAIDAS_H

#include <QWidget>

namespace Ui {
class entradasSaidas;
}

class entradasSaidas : public QWidget
{
    Q_OBJECT

public:
    explicit entradasSaidas(QString id, QWidget *parent = nullptr);
    ~entradasSaidas();

private slots:
    void on_btnCompararPeriodos_clicked();

    void on_btnVoltar_clicked();

private:
    Ui::entradasSaidas *ui;
};

#endif // ENTRADASSAIDAS_H
