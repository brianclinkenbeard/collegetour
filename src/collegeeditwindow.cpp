#include "collegeeditwindow.h"
#include "ui_collegeeditwindow.h"
#include "mainwindow.h"
#include "adminwindow.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>

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
    QString collegeName = ui->collegeBox->currentIndex();
    int collegeID;

    if(collegeName == "University of Wisconsin")
    {
        collegeID = 2325;
    }
    if(collegeName == "University of the Pacific")
    {
        collegeID = 1329;
    }

    // default connection
    QSqlDatabase db = QSqlDatabase::database();

    QSqlQuery query;
    query.prepare("INSERT INTO College_Touring(ID,Universities) VALUES (:id,:collegeName)");
    query.bindValue(":id", collegeID);
    query.bindValue(":collegeName", collegeName);

    if (collegeName == "University of Wisconsin")
    {
        addSouvenirsForCollege(3897, "Car Magnet", 7.86, 3, "University of Wisconsin");
        addSouvenirsForCollege(3897, "Cufflinks", 56.87, 1, "University of Wisconsin");
        addSouvenirsForCollege(3897, "Ring", 88.98, 3, "University of Wisconsin");
        addSouvenirsForCollege(3897, "Watch", 104.69, 4, "University of Wisconsin");
    }
    if (collegeName == "University of the Pacific")
    {
        addSouvenirsForCollege(1329, "Coaster Set",	12.73, 0, "University of the Pacific");
        addSouvenirsForCollege(1329, "Lawn Chair", 88.79, 1, "University of the Pacific");
        addSouvenirsForCollege(1329, "Reclininig Chair", 165.99, 1, "University of the Pacific");
        addSouvenirsForCollege(1329, "Temporary tattoos", 7.99, 3, "University of the Pacific");
        addSouvenirsForCollege(1329, "Water Bottle", 9.85, 6, "University of the Pacific");
    }

    if(query.exec()){
        qDebug() << "Add college successful";
    } else {
        qDebug() << "Add college failed: " << query.lastError();
    }
}

void CollegeEditWindow::on_pushButton_2_clicked()
{
    AdminWindow *admin = new AdminWindow;
    admin->show();
    this->close();
}

void CollegeEditWindow::addSouvenirsForCollege(int collegeID, QString souvenirName, double price, int quantity, QString collegeName)
{
    QSqlQuery query2;
    query2.prepare("INSERT INTO colleges_souvenirs(ID,souvenir,price,Quantity,Universities) VALUES (:collegeID,;souvenirName,:price,:quantity,:collegeName)");
    query2.bindValue("souvenirName", souvenirName);
    query2.bindValue("price", price);
    query2.bindValue("quantity", quantity);
    query2.bindValue("collegeID", collegeID);
    query2.bindValue("collegeName", collegeName);
}
