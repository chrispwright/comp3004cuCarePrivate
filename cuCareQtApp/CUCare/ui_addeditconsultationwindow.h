/********************************************************************************
** Form generated from reading UI file 'addeditconsultationwindow.ui'
**
** Created: Tue Oct 30 21:16:06 2012
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
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddEditConsultationWindow
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *editOHIP;
    QLabel *label;
    QLineEdit *editReason;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *editDiagnosis;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AddEditConsultationWindow)
    {
        if (AddEditConsultationWindow->objectName().isEmpty())
            AddEditConsultationWindow->setObjectName(QString::fromUtf8("AddEditConsultationWindow"));
        AddEditConsultationWindow->resize(560, 397);
        gridLayout = new QGridLayout(AddEditConsultationWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(AddEditConsultationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editOHIP = new QLineEdit(groupBox);
        editOHIP->setObjectName(QString::fromUtf8("editOHIP"));

        gridLayout_2->addWidget(editOHIP, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        editReason = new QLineEdit(groupBox);
        editReason->setObjectName(QString::fromUtf8("editReason"));

        gridLayout_2->addWidget(editReason, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        editDiagnosis = new QPlainTextEdit(groupBox);
        editDiagnosis->setObjectName(QString::fromUtf8("editDiagnosis"));

        gridLayout_2->addWidget(editDiagnosis, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddEditConsultationWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


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
        label_2->setText(QApplication::translate("AddEditConsultationWindow", "Reason for Visit:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditConsultationWindow", "Diagnosis:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditConsultationWindow: public Ui_AddEditConsultationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITCONSULTATIONWINDOW_H
