#ifndef APRESENTACAO_H
#define APRESENTACAO_H

#include <QWidget>

namespace Ui {
class Apresentacao;
}

class Apresentacao : public QWidget
{
    Q_OBJECT

public:
    explicit Apresentacao(QWidget *parent = nullptr);
    ~Apresentacao();

private slots:
    void on_btnLogin_clicked();

    void on_btnRegister_clicked();

private:
    Ui::Apresentacao *ui;
};

#endif // APRESENTACAO_H
