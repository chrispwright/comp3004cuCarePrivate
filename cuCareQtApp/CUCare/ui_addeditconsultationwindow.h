/********************************************************************************
** Form generated from reading UI file 'addeditconsultationwindow.ui'
**
** Created: Sun Nov 4 15:00:36 2012
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
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editOHIP;
    QPlainTextEdit *editDiagnosis;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
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

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_2->addWidget(dateTimeEdit, 0, 1, 1, 1);

        editOHIP = new QLineEdit(groupBox);
        editOHIP->setObjectName(QString::fromUtf8("editOHIP"));

        gridLayout_2->addWidget(editOHIP, 1, 1, 1, 1);

        editDiagnosis = new QPlainTextEdit(groupBox);
        editDiagnosis->setObjectName(QString::fromUtf8("editDiagnosis"));
        editDiagnosis->setEnabled(true);

        gridLayout_2->addWidget(editDiagnosis, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(AddEditConsultationWindow);
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
        label->setText(QApplication::translate("AddEditConsultationWindow", "OHIP #:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddEditConsultationWindow", "Date/Time:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditConsultationWindow", "Diagnosis:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditConsultationWindow", "Reason for Visit:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("AddEditConsultationWindow", "Follow Ups", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AddEditConsultationWindow", "Create...", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AddEditConsultationWindow", "Edit...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditConsultationWindow: public Ui_AddEditConsultationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITCONSULTATIONWINDOW_H
