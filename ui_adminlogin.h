/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QPushButton *backButton;
    QLabel *header_label;
    QLineEdit *username_edit;
    QLineEdit *password_edit;
    QLabel *error_label;

    void setupUi(QWidget *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName(QStringLiteral("AdminLogin"));
        AdminLogin->resize(500, 300);
        backButton = new QPushButton(AdminLogin);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(20, 20, 80, 25));
        header_label = new QLabel(AdminLogin);
        header_label->setObjectName(QStringLiteral("header_label"));
        header_label->setGeometry(QRect(13, 40, 471, 31));
        QFont font;
        font.setPointSize(16);
        header_label->setFont(font);
        header_label->setAlignment(Qt::AlignCenter);
        username_edit = new QLineEdit(AdminLogin);
        username_edit->setObjectName(QStringLiteral("username_edit"));
        username_edit->setGeometry(QRect(120, 110, 261, 41));
        username_edit->setAlignment(Qt::AlignCenter);
        password_edit = new QLineEdit(AdminLogin);
        password_edit->setObjectName(QStringLiteral("password_edit"));
        password_edit->setGeometry(QRect(120, 190, 261, 41));
        password_edit->setAlignment(Qt::AlignCenter);
        error_label = new QLabel(AdminLogin);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(0, 250, 501, 20));
        error_label->setStyleSheet(QStringLiteral("color:red"));
        error_label->setAlignment(Qt::AlignCenter);

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QWidget *AdminLogin)
    {
        AdminLogin->setWindowTitle(QApplication::translate("AdminLogin", "Form", 0));
        backButton->setText(QApplication::translate("AdminLogin", "Back", 0));
        header_label->setText(QApplication::translate("AdminLogin", "Admin Login", 0));
        username_edit->setText(QString());
        username_edit->setPlaceholderText(QApplication::translate("AdminLogin", "Username", 0));
        password_edit->setText(QString());
        password_edit->setPlaceholderText(QApplication::translate("AdminLogin", "Password", 0));
        error_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
