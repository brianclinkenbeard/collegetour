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
    bool success = true;

    QString collegeName = ui->collegeBox->currentText();
    int collegeID = -1;

    if (collegeName == "University of Wisconsin")
        collegeID = 3897;
    else if (collegeName == "University of the Pacific")
        collegeID = 1329;

    // default connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.open()) {
        success = false;
        qDebug() << "Failed to open database";
    }

    QSqlQuery college_query;
    college_query.prepare("INSERT INTO College_Touring (ID,Universities) VALUES (:collegeID,:collegeName)");
    college_query.bindValue(":collegeID", collegeID);
    college_query.bindValue(":collegeName", collegeName);

    if (!college_query.exec()) {
        success = false;
        qDebug() << "Add college failed: " << college_query.lastError();
    }

    // souvenir struct
    struct DBSouvenir {
        int collegeID;
        QString souvenirName;
        double price;
        int quantity;
        QString collegeName;
    };

    // add respective souvenirs to souvenir struct vector
    QVector<DBSouvenir> souvenirs;
    if (collegeName == "University of Wisconsin") {
        souvenirs.push_back({3897, "Car Magnet", 7.86, 3, "University of Wisconsin"});
        souvenirs.push_back({3897, "Cufflinks", 56.87, 1, "University of Wisconsin"});
        souvenirs.push_back({3897, "Ring", 88.98, 3, "University of Wisconsin"});
        souvenirs.push_back({3897, "Watch", 104.69, 4, "University of Wisconsin"});
    } else if (collegeName == "University of the Pacific") {
        souvenirs.push_back({1329, "Coaster Set",	12.73, 0, "University of the Pacific"});
        souvenirs.push_back({1329, "Lawn Chair", 88.79, 1, "University of the Pacific"});
        souvenirs.push_back({1329, "Reclininig Chair", 165.99, 1, "University of the Pacific"});
        souvenirs.push_back({1329, "Temporary tattoos", 7.99, 3, "University of the Pacific"});
        souvenirs.push_back({1329, "Water Bottle", 9.85, 6, "University of the Pacific"});
    }

    // write souvenirs to database
    QSqlQuery souvenir_query;
    souvenir_query.prepare("INSERT INTO colleges_souvenirs (ID,souvenir,price,Quantity,Universities) VALUES (:collegeID,:souvenirName,:price,:quantity,:collegeName)");
    for (int i = 0; i < souvenirs.size(); ++i) {
        souvenir_query.bindValue(":collegeID", souvenirs.at(i).collegeID);
        souvenir_query.bindValue(":souvenirName", souvenirs.at(i).souvenirName);
        souvenir_query.bindValue(":price", souvenirs.at(i).price);
        souvenir_query.bindValue(":quantity", souvenirs.at(i).quantity);
        souvenir_query.bindValue(":collegeName", souvenirs.at(i).collegeName);

        if (!souvenir_query.exec()) {
            success = false;
            qDebug() << "Add college failed: " << college_query.lastError();
        }
    }

    if (success) {
        ui->error_label->setStyleSheet("color:green");
        ui->error_label->setText("Success");
    } else {
        ui->error_label->setStyleSheet("color:red");
        ui->error_label->setText("Failed to add College");
    }
}

void CollegeEditWindow::on_pushButton_2_clicked()
{
    AdminWindow *admin = new AdminWindow;
    admin->show();
    this->close();
}
