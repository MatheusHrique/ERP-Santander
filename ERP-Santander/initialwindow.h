#ifndef INITIALWINDOW_H
#define INITIALWINDOW_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class initialWindow; }
QT_END_NAMESPACE

class initialWindow : public QMainWindow
{
    Q_OBJECT

public:
    initialWindow(QWidget *parent = nullptr);
    ~initialWindow();

private slots:
    void on_btnExecuteProject_clicked();

private:
    Ui::initialWindow *ui;
    QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
};
#endif // INITIALWINDOW_H
