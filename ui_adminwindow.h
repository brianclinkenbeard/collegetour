/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(400, 300);
        addCollege = new QPushButton(AdminWindow);
        addCollege->setObjectName(QStringLiteral("addCollege"));
        addCollege->setGeometry(QRect(160, 110, 75, 23));
        pushButton_2 = new QPushButton(AdminWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(AdminWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 151, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", 0));
        addCollege->setText(QApplication::translate("AdminWindow", "Add College", 0));
        pushButton_2->setText(QApplication::translate("AdminWindow", "Logout", 0));
        label->setText(QApplication::translate("AdminWindow", "Admin Window", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
