/********************************************************************************
** Form generated from reading UI file 'addeditfollowups.ui'
**
** Created: Sat Dec 1 00:02:12 2012
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
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddEditFollowUps
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_Status;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_Details;
    QLabel *label;
    QComboBox *comboBox_Type;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_4;

    void setupUi(QDialog *AddEditFollowUps)
    {
        if (AddEditFollowUps->objectName().isEmpty())
            AddEditFollowUps->setObjectName(QString::fromUtf8("AddEditFollowUps"));
        AddEditFollowUps->resize(524, 347);
        gridLayout = new QGridLayout(AddEditFollowUps);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(AddEditFollowUps);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        groupBox = new QGroupBox(AddEditFollowUps);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox_Status = new QComboBox(groupBox);
        comboBox_Status->setObjectName(QString::fromUtf8("comboBox_Status"));
        comboBox_Status->setEnabled(false);

        gridLayout_2->addWidget(comboBox_Status, 5, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(label_2, 7, 1, 1, 1);

        plainTextEdit_Details = new QPlainTextEdit(groupBox);
        plainTextEdit_Details->setObjectName(QString::fromUtf8("plainTextEdit_Details"));

        gridLayout_2->addWidget(plainTextEdit_Details, 7, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        comboBox_Type = new QComboBox(groupBox);
        comboBox_Type->setObjectName(QString::fromUtf8("comboBox_Type"));

        gridLayout_2->addWidget(comboBox_Type, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_2->addWidget(dateTimeEdit, 4, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(AddEditFollowUps);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditFollowUps, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditFollowUps, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditFollowUps);
    } // setupUi

    void retranslateUi(QDialog *AddEditFollowUps)
    {
        AddEditFollowUps->setWindowTitle(QApplication::translate("AddEditFollowUps", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddEditFollowUps", "Follow Up Info", 0, QApplication::UnicodeUTF8));
        comboBox_Status->clear();
        comboBox_Status->insertItems(0, QStringList()
         << QApplication::translate("AddEditFollowUps", "Pending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddEditFollowUps", "Completed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddEditFollowUps", "Overdue", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("AddEditFollowUps", "Details:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddEditFollowUps", "Type:", 0, QApplication::UnicodeUTF8));
        comboBox_Type->clear();
        comboBox_Type->insertItems(0, QStringList()
         << QApplication::translate("AddEditFollowUps", "Return Consultation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddEditFollowUps", "Prescription Renewal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddEditFollowUps", "Referral", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddEditFollowUps", "Medical Test", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("AddEditFollowUps", "Due Date:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddEditFollowUps", "Status:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditFollowUps: public Ui_AddEditFollowUps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITFOLLOWUPS_H
