#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QString id, QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_btnLogout_clicked();

    void on_btnCheckConta_clicked();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
