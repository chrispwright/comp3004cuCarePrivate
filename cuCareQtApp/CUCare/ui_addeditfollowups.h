/********************************************************************************
** Form generated from reading UI file 'addeditfollowups.ui'
**
** Created: Sun Nov 4 00:38:36 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITFOLLOWUPS_H
#define UI_ADDEDITFOLLOWUPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddEditFollowUps
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditFollowUps)
    {
        if (AddEditFollowUps->objectName().isEmpty())
            AddEditFollowUps->setObjectName(QString::fromUtf8("AddEditFollowUps"));
        AddEditFollowUps->resize(568, 347);
        gridLayout = new QGridLayout(AddEditFollowUps);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(AddEditFollowUps);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout_2->addWidget(dateEdit, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(AddEditFollowUps);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(false);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 1, 1, 1, 1);

        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_4->addWidget(listWidget, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AddEditFollowUps);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(AddEditFollowUps);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditFollowUps, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditFollowUps, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditFollowUps);
    } // setupUi

    void retranslateUi(QDialog *AddEditFollowUps)
    {
        AddEditFollowUps->setWindowTitle(QApplication::translate("AddEditFollowUps", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddEditFollowUps", "Follow Up Info", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("AddEditFollowUps", "Pending", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditFollowUps", "Renewals:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditFollowUps", "Referral:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddEditFollowUps", "Status:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddEditFollowUps", "Medical Tests:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddEditFollowUps", "Due Date:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("AddEditFollowUps", "Follow Up Consultations", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AddEditFollowUps", "Create...", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AddEditFollowUps", "Edit...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditFollowUps: public Ui_AddEditFollowUps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITFOLLOWUPS_H
