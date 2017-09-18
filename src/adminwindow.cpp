#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "collegeeditwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_addCollege_clicked()
{
    CollegeEditWindow *collegeWindow = new CollegeEditWindow();
    collegeWindow->show();
    this->close();
}
