#include "collegeeditwindow.h"
#include "ui_collegeeditwindow.h"
#include "mainwindow.h"
#include "adminwindow.h"
#include <QString>
#include <QSqlQuery>

CollegeEditWindow::CollegeEditWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CollegeEditWindow)
{
    ui->setupUi(this);
}

CollegeEditWindow::~CollegeEditWindow()
{
    delete ui;
}

void CollegeEditWindow::on_addCollegeButton_clicked()
{
    QString collegeName = ui->collegeName->text();
    QString collegeID = ui->collegeID->text();

    if(collegeName == "" || collegeID == ""){
        ui->labelError->setStyleSheet("color:red");
        ui->labelError->setText("Incomplete Form!");
        ui->labelError->show();
    } else {
        MainWindow connection;
        connection.connectionOpen();

        QSqlQuery query;
        query.prepare("INSERT INTO College_Touring(ID,Universities) VALUES (:id,:collegeName)");
        query.bindValue(":id", collegeID);
        query.bindValue(":collegeName", collegeName);

        if(query.exec()){
            qDebug() << "Add college successful";
        } else {
            qDebug() << "Add college failed: " << query.lastError();
        }
    }
}

void CollegeEditWindow::on_pushButton_clicked()
{
//    QString collegeName = ui->collegeName->text();
    QString collegeID = ui->collegeID->text();

    if(collegeID == ""){
        ui->labelError->setStyleSheet("color:red");
        ui->labelError->setText("Incomplete Form!");
        ui->labelError->show();
    } else {
        MainWindow connection;
        connection.connectionOpen();

        QSqlQuery query;
        query.prepare("DELETE FROM College_Touring WHERE ID = (:id)");
        query.bindValue(":id", collegeID);

        if(query.exec()){
            qDebug() << "Delete college successful";
        } else {
            qDebug() << "Delete college failed: " << query.lastError();
        }

        QSqlQuery query2;
        query2.prepare("DELETE FROM colleges_souvenirs WHERE ID = (:id)");
        query2.bindValue(":id", collegeID);
        if(query2.exec()){
            qDebug() << "Delete college from souvenirs successful";
        } else {
            qDebug() << "Delete college from souvenirs failed: " << query.lastError();
        }
    }
}

void CollegeEditWindow::on_pushButton_2_clicked()
{
    AdminWindow *admin = new AdminWindow;
    admin->show();
    this->close();
}
