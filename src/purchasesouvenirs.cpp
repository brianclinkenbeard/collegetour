#include "purchasesouvenirs.h"
#include "ui_purchasesouvenirs.h"


purchaseSouvenirs::purchaseSouvenirs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::purchaseSouvenirs)
{
    ui->setupUi(this);
}

purchaseSouvenirs::~purchaseSouvenirs()
{
    delete ui;
}


