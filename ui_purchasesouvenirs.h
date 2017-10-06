/********************************************************************************
** Form generated from reading UI file 'purchasesouvenirs.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASESOUVENIRS_H
#define UI_PURCHASESOUVENIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_purchaseSouvenirs
{
public:
    QLabel *label;
    QComboBox *comboBox_college;
    QLabel *label_2;
    QComboBox *comboBox_souvenir;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_quanity;
    QPushButton *pushButton_add;
    QLabel *label_add;
    QTableWidget *tableWidget_receipt;
    QPushButton *pushButton_receipt;
    QTableWidget *tableWidget_total;

    void setupUi(QDialog *purchaseSouvenirs)
    {
        if (purchaseSouvenirs->objectName().isEmpty())
            purchaseSouvenirs->setObjectName(QStringLiteral("purchaseSouvenirs"));
        purchaseSouvenirs->resize(662, 519);
        label = new QLabel(purchaseSouvenirs);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 261, 51));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        comboBox_college = new QComboBox(purchaseSouvenirs);
        comboBox_college->setObjectName(QStringLiteral("comboBox_college"));
        comboBox_college->setGeometry(QRect(190, 70, 231, 22));
        label_2 = new QLabel(purchaseSouvenirs);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 151, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        comboBox_souvenir = new QComboBox(purchaseSouvenirs);
        comboBox_souvenir->setObjectName(QStringLiteral("comboBox_souvenir"));
        comboBox_souvenir->setGeometry(QRect(190, 110, 231, 22));
        label_3 = new QLabel(purchaseSouvenirs);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 161, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Rockwell"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_4 = new QLabel(purchaseSouvenirs);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 331, 20));
        label_4->setFont(font2);
        lineEdit_quanity = new QLineEdit(purchaseSouvenirs);
        lineEdit_quanity->setObjectName(QStringLiteral("lineEdit_quanity"));
        lineEdit_quanity->setGeometry(QRect(350, 150, 54, 20));
        pushButton_add = new QPushButton(purchaseSouvenirs);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(30, 230, 131, 31));
        label_add = new QLabel(purchaseSouvenirs);
        label_add->setObjectName(QStringLiteral("label_add"));
        label_add->setGeometry(QRect(30, 270, 161, 16));
        QFont font3;
        font3.setPointSize(7);
        label_add->setFont(font3);
        tableWidget_receipt = new QTableWidget(purchaseSouvenirs);
        tableWidget_receipt->setObjectName(QStringLiteral("tableWidget_receipt"));
        tableWidget_receipt->setGeometry(QRect(230, 180, 391, 241));
        pushButton_receipt = new QPushButton(purchaseSouvenirs);
        pushButton_receipt->setObjectName(QStringLiteral("pushButton_receipt"));
        pushButton_receipt->setGeometry(QRect(20, 340, 131, 41));
        tableWidget_total = new QTableWidget(purchaseSouvenirs);
        tableWidget_total->setObjectName(QStringLiteral("tableWidget_total"));
        tableWidget_total->setGeometry(QRect(230, 440, 271, 61));
        label->raise();
        label_2->raise();
        comboBox_college->raise();
        comboBox_souvenir->raise();
        label_3->raise();
        pushButton_add->raise();
        pushButton_receipt->raise();
        lineEdit_quanity->raise();
        label_4->raise();
        label_add->raise();
        tableWidget_receipt->raise();
        tableWidget_total->raise();

        retranslateUi(purchaseSouvenirs);

        QMetaObject::connectSlotsByName(purchaseSouvenirs);
    } // setupUi

    void retranslateUi(QDialog *purchaseSouvenirs)
    {
        purchaseSouvenirs->setWindowTitle(QApplication::translate("purchaseSouvenirs", "Dialog", 0));
        label->setText(QApplication::translate("purchaseSouvenirs", "Purchase Souvenirs", 0));
        label_2->setText(QApplication::translate("purchaseSouvenirs", "Choose a college:", 0));
        label_3->setText(QApplication::translate("purchaseSouvenirs", "Choose a souvenir:", 0));
        label_4->setText(QApplication::translate("purchaseSouvenirs", "How many of this souvenir do you want?", 0));
        pushButton_add->setText(QApplication::translate("purchaseSouvenirs", "Add to Cart", 0));
        label_add->setText(QApplication::translate("purchaseSouvenirs", "Souvenir has been added.", 0));
        pushButton_receipt->setText(QApplication::translate("purchaseSouvenirs", "Print Receipt", 0));
    } // retranslateUi

};

namespace Ui {
    class purchaseSouvenirs: public Ui_purchaseSouvenirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASESOUVENIRS_H
