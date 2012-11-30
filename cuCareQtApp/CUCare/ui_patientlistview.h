/********************************************************************************
** Form generated from reading UI file 'patientlistview.ui'
**
** Created: Thu Nov 29 22:41:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTLISTVIEW_H
#define UI_PATIENTLISTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientListView
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *PatientListView)
    {
        if (PatientListView->objectName().isEmpty())
            PatientListView->setObjectName(QString::fromUtf8("PatientListView"));
        PatientListView->resize(746, 520);
        gridLayout_4 = new QGridLayout(PatientListView);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(PatientListView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget_2 = new QTableWidget(groupBox_2);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_2->rowCount() < 100)
            tableWidget_2->setRowCount(100);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setRowCount(100);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidget_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 6);

        groupBox_3 = new QGroupBox(PatientListView);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget_3 = new QTableWidget(groupBox_3);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        if (tableWidget_3->rowCount() < 100)
            tableWidget_3->setRowCount(100);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setRowCount(100);
        tableWidget_3->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 3, 0, 1, 6);

        pushButton = new QPushButton(PatientListView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        gridLayout_4->addWidget(pushButton, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PatientListView);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 2, 1, 4);

        comboBox = new QComboBox(PatientListView);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(145, 0));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 5, 1, 1);

        label = new QLabel(PatientListView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(PatientListView);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 0, 4, 1, 1);

        label_2 = new QLabel(PatientListView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 3, 1, 1);

        groupBox = new QGroupBox(PatientListView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(100);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 6);


        retranslateUi(PatientListView);
        QObject::connect(buttonBox, SIGNAL(accepted()), PatientListView, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PatientListView, SLOT(reject()));

        QMetaObject::connectSlotsByName(PatientListView);
    } // setupUi

    void retranslateUi(QDialog *PatientListView)
    {
        PatientListView->setWindowTitle(QApplication::translate("PatientListView", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PatientListView", "Consultations", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PatientListView", "Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PatientListView", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PatientListView", "OHIP #", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PatientListView", "Reason", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PatientListView", "Actual Reason", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PatientListView", "Diagnosis", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("PatientListView", "Follow-Ups", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("PatientListView", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("PatientListView", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("PatientListView", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("PatientListView", "Details", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PatientListView", "Generate Report", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PatientListView", "Pending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatientListView", "Completed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatientListView", "Overdue", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PatientListView", "Filter by Follow-Up Status:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PatientListView", "Filter by Physician: ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PatientListView", "Patients", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("PatientListView", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("PatientListView", "Last Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("PatientListView", "Phone Number", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("PatientListView", "Primary Physician", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatientListView: public Ui_PatientListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLISTVIEW_H
