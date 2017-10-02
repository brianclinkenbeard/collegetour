#include "souvenireditwindow.h"
#include "ui_souvenireditwindow.h"
#include "adminwindow.h"

SouvenirEditWindow::SouvenirEditWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SouvenirEditWindow)
{
    ui->setupUi(this);
}

SouvenirEditWindow::~SouvenirEditWindow()
{
    delete ui;
}

void SouvenirEditWindow::on_pushButton_3_clicked()
{
    AdminWindow *admin = new AdminWindow;
    admin->show();
    this->close();
}


/*void SouvenirEditWindow::on_addSouvenirButton_clicked()
{
    QString souvenirItem = ui->souvenirBox->currentIndex();
    int souvenirID = ui->souvenirID->text();
    double souvenirPrice = ui->souvenirPrice->text();
    int souvenirQuantity = ui->quantityInput->text();
    QString collegeName = ui->collegeBox->currentIndex();
}*/
