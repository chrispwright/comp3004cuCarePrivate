/********************************************************************************
** Form generated from reading UI file 'addeditconsultationwindow.ui'
**
** Created: Fri Nov 30 19:01:01 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITCONSULTATIONWINDOW_H
#define UI_ADDEDITCONSULTATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddEditConsultationWindow
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *editReason;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editOHIP;
    QLabel *label_4;
    QLabel *label;
    QPlainTextEdit *editDiagnosis;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *editActualReason;
    QGroupBox *groupBox_FollowUps;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_CreateFollowUp;
    QPushButton *pushButton_EditFollowUp;
    QListWidget *listWidget_FollowUps;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditConsultationWindow)
    {
        if (AddEditConsultationWindow->objectName().isEmpty())
            AddEditConsultationWindow->setObjectName(QString::fromUtf8("AddEditConsultationWindow"));
        AddEditConsultationWindow->resize(787, 424);
        gridLayout = new QGridLayout(AddEditConsultationWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(AddEditConsultationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editReason = new QLineEdit(groupBox);
        editReason->setObjectName(QString::fromUtf8("editReason"));
        editReason->setEnabled(true);

        gridLayout_2->addWidget(editReason, 2, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_2->addWidget(dateTimeEdit, 0, 1, 1, 1);

        editOHIP = new QLineEdit(groupBox);
        editOHIP->setObjectName(QString::fromUtf8("editOHIP"));

        gridLayout_2->addWidget(editOHIP, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        editDiagnosis = new QPlainTextEdit(groupBox);
        editDiagnosis->setObjectName(QString::fromUtf8("editDiagnosis"));
        editDiagnosis->setEnabled(true);

        gridLayout_2->addWidget(editDiagnosis, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        editActualReason = new QLineEdit(groupBox);
        editActualReason->setObjectName(QString::fromUtf8("editActualReason"));

        gridLayout_2->addWidget(editActualReason, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_FollowUps = new QGroupBox(AddEditConsultationWindow);
        groupBox_FollowUps->setObjectName(QString::fromUtf8("groupBox_FollowUps"));
        groupBox_FollowUps->setEnabled(true);
        gridLayout_4 = new QGridLayout(groupBox_FollowUps);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_CreateFollowUp = new QPushButton(groupBox_FollowUps);
        pushButton_CreateFollowUp->setObjectName(QString::fromUtf8("pushButton_CreateFollowUp"));
        pushButton_CreateFollowUp->setEnabled(true);

        gridLayout_4->addWidget(pushButton_CreateFollowUp, 1, 0, 1, 1);

        pushButton_EditFollowUp = new QPushButton(groupBox_FollowUps);
        pushButton_EditFollowUp->setObjectName(QString::fromUtf8("pushButton_EditFollowUp"));
        pushButton_EditFollowUp->setEnabled(true);

        gridLayout_4->addWidget(pushButton_EditFollowUp, 1, 1, 1, 1);

        listWidget_FollowUps = new QListWidget(groupBox_FollowUps);
        listWidget_FollowUps->setObjectName(QString::fromUtf8("listWidget_FollowUps"));
        listWidget_FollowUps->setEnabled(true);

        gridLayout_4->addWidget(listWidget_FollowUps, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_FollowUps, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(AddEditConsultationWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(AddEditConsultationWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditConsultationWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditConsultationWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditConsultationWindow);
    } // setupUi

    void retranslateUi(QDialog *AddEditConsultationWindow)
    {
        AddEditConsultationWindow->setWindowTitle(QApplication::translate("AddEditConsultationWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddEditConsultationWindow", "Consultation Info", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddEditConsultationWindow", "Date/Time:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddEditConsultationWindow", "OHIP #:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditConsultationWindow", "Reason for Visit:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditConsultationWindow", "Diagnosis:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddEditConsultationWindow", "Actual Reason:", 0, QApplication::UnicodeUTF8));
        groupBox_FollowUps->setTitle(QApplication::translate("AddEditConsultationWindow", "Follow Ups", 0, QApplication::UnicodeUTF8));
        pushButton_CreateFollowUp->setText(QApplication::translate("AddEditConsultationWindow", "Create...", 0, QApplication::UnicodeUTF8));
        pushButton_EditFollowUp->setText(QApplication::translate("AddEditConsultationWindow", "Edit...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditConsultationWindow: public Ui_AddEditConsultationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITCONSULTATIONWINDOW_H
