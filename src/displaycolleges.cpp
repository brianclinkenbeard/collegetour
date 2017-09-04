#include "displaycolleges.h"
#include "ui_displaycolleges.h"

displayColleges::displayColleges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayColleges)
{
    ui->setupUi(this);

    MainWindow connection;

    // If the database is not open the following message will be displayed otherwise it says connected
    if(!connection.connectionOpen())
    {
        ui->second_status->setText("Database is not Connected");
    }
    else
    {
        ui->second_status->setText("Database is Connected seccessfully");
    }
}

displayColleges::~displayColleges()
{
    delete ui;
}

void displayColleges::on_display_colleges_button_clicked()
{
    MainWindow connection;
    QSqlQueryModel *modal = new QSqlQueryModel();

    connection.connectionOpen();
    QSqlQuery *qry = new QSqlQuery(connection.myDatabase);

    qry->prepare("SELECT * FROM College_Touring");

    qry->exec();
    modal->setQuery(*qry);
    ui->college_table_view->setModel(modal);

    connection.connectionClose();
}
