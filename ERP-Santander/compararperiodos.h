#ifndef COMPARARPERIODOS_H
#define COMPARARPERIODOS_H

#include <QWidget>

namespace Ui {
class compararPeriodos;
}

class compararPeriodos : public QWidget
{
    Q_OBJECT

public:
    explicit compararPeriodos(QString id, QWidget *parent = nullptr);
    ~compararPeriodos();

private slots:
    void on_btnVoltar_clicked();

private:
    Ui::compararPeriodos *ui;
};

#endif // COMPARARPERIODOS_H
