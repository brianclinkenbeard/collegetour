
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connectionOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::connectionOpen()
{
    // Created a Database Object
    myDatabase = QSqlDatabase::addDatabase("QSQLITE");

    // Proided the database path and name
    myDatabase.setDatabaseName("C:/Users/sfoto/Documents/collegetour/Database/project.sqlite.sqlite");

    // If the database is not open the following message will be displayed otherwise it says connected
    if(!myDatabase.open())
    {
        ui->status->setText("Database is not Connected");
        return false;
    }
    else
    {
        ui->status->setText("Database is Connected seccessfully");

        // Reading from the Sql Database to the vectors
        QSqlQueryModel *modal = new QSqlQueryModel();

        QSqlQuery qry("SELECT * FROM College_Touring");

        while(qry.next())
        {
            collegesList.addCollegeID(qry.record().value("ID").toInt());
            collegesList.addCollegeName(qry.record().value("Universities").toString());
        }
        qDebug() << collegesList.getCollegeIDsSize();

        return true;
    }
}

void MainWindow::connectionClose()
{
    myDatabase.close();
    myDatabase.removeDatabase(QSqlDatabase::defaultConnection);
}


void MainWindow::on_display_college_button_clicked()
{
    displayColleges displayWindow;
    displayWindow.setModal(true);
    displayWindow.exec();
}
