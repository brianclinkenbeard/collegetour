/********************************************************************************
** Form generated from reading UI file 'collegeeditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEGEEDITWINDOW_H
#define UI_COLLEGEEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CollegeEditWindow
{
public:
    QPushButton *addCollegeButton;
    QPushButton *pushButton_2;
    QLabel *title_label;
    QComboBox *collegeBox;
    QLabel *label;
    QLabel *error_label;

    void setupUi(QDialog *CollegeEditWindow)
    {
        if (CollegeEditWindow->objectName().isEmpty())
            CollegeEditWindow->setObjectName(QStringLiteral("CollegeEditWindow"));
        CollegeEditWindow->resize(302, 237);
        addCollegeButton = new QPushButton(CollegeEditWindow);
        addCollegeButton->setObjectName(QStringLiteral("addCollegeButton"));
        addCollegeButton->setGeometry(QRect(100, 150, 101, 23));
        pushButton_2 = new QPushButton(CollegeEditWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 51, 23));
        title_label = new QLabel(CollegeEditWindow);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(0, 40, 301, 20));
        QFont font;
        font.setPointSize(9);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);
        collegeBox = new QComboBox(CollegeEditWindow);
        collegeBox->setObjectName(QStringLiteral("collegeBox"));
        collegeBox->setGeometry(QRect(120, 90, 161, 22));
        label = new QLabel(CollegeEditWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 91, 21));
        label->setAlignment(Qt::AlignCenter);
        error_label = new QLabel(CollegeEditWindow);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(3, 190, 301, 20));
        error_label->setAlignment(Qt::AlignCenter);

        retranslateUi(CollegeEditWindow);

        QMetaObject::connectSlotsByName(CollegeEditWindow);
    } // setupUi

    void retranslateUi(QDialog *CollegeEditWindow)
    {
        CollegeEditWindow->setWindowTitle(QApplication::translate("CollegeEditWindow", "Dialog", 0));
        addCollegeButton->setText(QApplication::translate("CollegeEditWindow", "Add College", 0));
        pushButton_2->setText(QApplication::translate("CollegeEditWindow", "Back", 0));
        title_label->setText(QApplication::translate("CollegeEditWindow", "Add College", 0));
        collegeBox->clear();
        collegeBox->insertItems(0, QStringList()
         << QApplication::translate("CollegeEditWindow", "University of Texas", 0)
         << QApplication::translate("CollegeEditWindow", "California State University, Fullerton", 0)
        );
        label->setText(QApplication::translate("CollegeEditWindow", "College Name:", 0));
        error_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CollegeEditWindow: public Ui_CollegeEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEGEEDITWINDOW_H
