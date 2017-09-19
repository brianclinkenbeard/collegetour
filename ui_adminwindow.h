/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QPushButton *addCollege;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(400, 300);
        addCollege = new QPushButton(AdminWindow);
        addCollege->setObjectName(QStringLiteral("addCollege"));
        addCollege->setGeometry(QRect(120, 100, 151, 31));
        pushButton_2 = new QPushButton(AdminWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(AdminWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 151, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(AdminWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 200, 151, 31));
        pushButton_3 = new QPushButton(AdminWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 150, 151, 31));

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", Q_NULLPTR));
        addCollege->setText(QApplication::translate("AdminWindow", "Add and Delete Colleges", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminWindow", "Logout", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Admin Window", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminWindow", "Souvenir Prices", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminWindow", "Add and Delete Souvenirs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
