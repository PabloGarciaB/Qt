#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buscar_clicked();

    void on_registrar_clicked();

    void on_mostrar_contactos_clicked();

    void on_salir_programa_clicked();

    void on_pushButton_clicked();

    void on_acep_clicked();

    void on_cancel_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
