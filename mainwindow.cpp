#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db;
        db=QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setDatabaseName("test");
        db.setUserName("root");
        db.setPassword("");
        if(!db.open()){ qDebug()<<"Error "; }
        else{ qDebug()<<"Conectada "; }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buscar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_registrar_clicked()
{
    QString nombre, apellido, tel, correo, insertar;
    ui->stackedWidget->setCurrentIndex(1);
    nombre = ui->nom->text();
    apellido = ui->ap->text();
    tel = ui->tel->text();
    correo = ui->email->text();
    insertar = "INSERT into datos (nombre,apellido,num_telefono,correo) as values('"+nombre+"','"+apellido+"','"+tel+"','"+correo+"')";
    QSqlQuery query;
    if(query.exec(insertar)){
        qDebug() << "Simon";
        QMessageBox::about(this,QObject::tr( "Registro"), QObject::tr("Registro exitoso"));

    }
}

void MainWindow::on_mostrar_contactos_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_salir_programa_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_acep_clicked()
{

}

void MainWindow::on_cancel_clicked()
{

}
