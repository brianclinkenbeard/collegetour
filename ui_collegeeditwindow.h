/********************************************************************************
** Form generated from reading UI file 'collegeeditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEGEEDITWINDOW_H
#define UI_COLLEGEEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CollegeEditWindow
{
public:
    QLabel *label;
    QPushButton *addCollegeButton;
    QLabel *labelError;
    QLineEdit *collegeID;
    QLineEdit *collegeName;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *title_label;

    void setupUi(QDialog *CollegeEditWindow)
    {
        if (CollegeEditWindow->objectName().isEmpty())
            CollegeEditWindow->setObjectName(QStringLiteral("CollegeEditWindow"));
        CollegeEditWindow->resize(272, 208);
        label = new QLabel(CollegeEditWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 47, 13));
        addCollegeButton = new QPushButton(CollegeEditWindow);
        addCollegeButton->setObjectName(QStringLiteral("addCollegeButton"));
        addCollegeButton->setGeometry(QRect(40, 140, 75, 23));
        labelError = new QLabel(CollegeEditWindow);
        labelError->setObjectName(QStringLiteral("labelError"));
        labelError->setGeometry(QRect(190, 280, 151, 51));
        collegeID = new QLineEdit(CollegeEditWindow);
        collegeID->setObjectName(QStringLiteral("collegeID"));
        collegeID->setGeometry(QRect(90, 90, 113, 20));
        collegeName = new QLineEdit(CollegeEditWindow);
        collegeName->setObjectName(QStringLiteral("collegeName"));
        collegeName->setGeometry(QRect(90, 60, 113, 20));
        label_2 = new QLabel(CollegeEditWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 47, 13));
        pushButton = new QPushButton(CollegeEditWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 140, 81, 23));
        pushButton_2 = new QPushButton(CollegeEditWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 51, 23));
        title_label = new QLabel(CollegeEditWindow);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(0, 20, 271, 20));
        QFont font;
        font.setPointSize(9);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        retranslateUi(CollegeEditWindow);

        QMetaObject::connectSlotsByName(CollegeEditWindow);
    } // setupUi

    void retranslateUi(QDialog *CollegeEditWindow)
    {
        CollegeEditWindow->setWindowTitle(QApplication::translate("CollegeEditWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CollegeEditWindow", "Name:", Q_NULLPTR));
        addCollegeButton->setText(QApplication::translate("CollegeEditWindow", "Add College", Q_NULLPTR));
        labelError->setText(QString());
        label_2->setText(QApplication::translate("CollegeEditWindow", "ID:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CollegeEditWindow", "Delete College", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CollegeEditWindow", "Back", Q_NULLPTR));
        title_label->setText(QApplication::translate("CollegeEditWindow", "Add and Delete Colleges", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CollegeEditWindow: public Ui_CollegeEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEGEEDITWINDOW_H
