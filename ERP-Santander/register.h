#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_btnCancelar_clicked();

    void on_btnLimparTudo_clicked();

    void on_btnCriarConta_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
