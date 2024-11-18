#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btnCancelar_clicked();

    void on_btnLimparTudo_clicked();

    QString generateHash(const QString &input);

    void on_btnEntrar_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
