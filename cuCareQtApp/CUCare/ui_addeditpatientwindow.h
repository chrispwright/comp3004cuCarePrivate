/********************************************************************************
** Form generated from reading UI file 'addeditpatientwindow.ui'
**
** Created: Tue Oct 30 21:16:06 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITPATIENTWINDOW_H
#define UI_ADDEDITPATIENTWINDOW_H

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

QT_BEGIN_NAMESPACE

class Ui_AddEditPatientWindow
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *editPhoneNum;
    QLineEdit *editLastName;
    QLineEdit *editFirstName;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;

    void setupUi(QDialog *AddEditPatientWindow)
    {
        if (AddEditPatientWindow->objectName().isEmpty())
            AddEditPatientWindow->setObjectName(QString::fromUtf8("AddEditPatientWindow"));
        AddEditPatientWindow->resize(400, 300);
        gridLayout = new QGridLayout(AddEditPatientWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(AddEditPatientWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(AddEditPatientWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editPhoneNum = new QLineEdit(groupBox);
        editPhoneNum->setObjectName(QString::fromUtf8("editPhoneNum"));
        editPhoneNum->setEnabled(true);
        editPhoneNum->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(editPhoneNum, 2, 1, 1, 1);

        editLastName = new QLineEdit(groupBox);
        editLastName->setObjectName(QString::fromUtf8("editLastName"));
        editLastName->setEnabled(true);
        editLastName->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(editLastName, 1, 1, 1, 1);

        editFirstName = new QLineEdit(groupBox);
        editFirstName->setObjectName(QString::fromUtf8("editFirstName"));
        editFirstName->setEnabled(true);
        editFirstName->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(editFirstName, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(AddEditPatientWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditPatientWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditPatientWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditPatientWindow);
    } // setupUi

    void retranslateUi(QDialog *AddEditPatientWindow)
    {
        AddEditPatientWindow->setWindowTitle(QApplication::translate("AddEditPatientWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddEditPatientWindow", "Patient Info", 0, QApplication::UnicodeUTF8));
        editLastName->setText(QString());
        label_3->setText(QApplication::translate("AddEditPatientWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddEditPatientWindow", "Phone Number:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditPatientWindow", "First Name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditPatientWindow: public Ui_AddEditPatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITPATIENTWINDOW_H
