/********************************************************************************
** Form generated from reading UI file 'patientlistview.ui'
**
** Created: Sun Dec 2 01:24:32 2012
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
    QTableWidget *tableWidget_Consultations;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_FollowUps;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox_FilterByStatus;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox_Physicians;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_Patients;

    void setupUi(QDialog *PatientListView)
    {
        if (PatientListView->objectName().isEmpty())
            PatientListView->setObjectName(QString::fromUtf8("PatientListView"));
        PatientListView->resize(965, 654);
        gridLayout_4 = new QGridLayout(PatientListView);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(PatientListView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget_Consultations = new QTableWidget(groupBox_2);
        if (tableWidget_Consultations->columnCount() < 8)
            tableWidget_Consultations->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_Consultations->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_Consultations->setObjectName(QString::fromUtf8("tableWidget_Consultations"));
        tableWidget_Consultations->setEnabled(false);
        tableWidget_Consultations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Consultations->setTabKeyNavigation(true);
        tableWidget_Consultations->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Consultations->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Consultations->setRowCount(0);
        tableWidget_Consultations->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Consultations->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidget_Consultations, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 6);

        groupBox_3 = new QGroupBox(PatientListView);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget_FollowUps = new QTableWidget(groupBox_3);
        if (tableWidget_FollowUps->columnCount() < 7)
            tableWidget_FollowUps->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_FollowUps->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        tableWidget_FollowUps->setObjectName(QString::fromUtf8("tableWidget_FollowUps"));
        tableWidget_FollowUps->setEnabled(false);
        tableWidget_FollowUps->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_FollowUps->setTabKeyNavigation(true);
        tableWidget_FollowUps->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_FollowUps->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_FollowUps->setRowCount(0);
        tableWidget_FollowUps->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget_FollowUps, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 3, 0, 1, 6);

        pushButton = new QPushButton(PatientListView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        gridLayout_4->addWidget(pushButton, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PatientListView);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 2, 1, 4);

        comboBox_FilterByStatus = new QComboBox(PatientListView);
        comboBox_FilterByStatus->setObjectName(QString::fromUtf8("comboBox_FilterByStatus"));
        comboBox_FilterByStatus->setMinimumSize(QSize(145, 0));

        gridLayout_4->addWidget(comboBox_FilterByStatus, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 5, 1, 1);

        label = new QLabel(PatientListView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        comboBox_Physicians = new QComboBox(PatientListView);
        comboBox_Physicians->setObjectName(QString::fromUtf8("comboBox_Physicians"));

        gridLayout_4->addWidget(comboBox_Physicians, 0, 4, 1, 1);

        label_2 = new QLabel(PatientListView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 3, 1, 1);

        groupBox = new QGroupBox(PatientListView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_Patients = new QTableWidget(groupBox);
        if (tableWidget_Patients->columnCount() < 8)
            tableWidget_Patients->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_Patients->setHorizontalHeaderItem(7, __qtablewidgetitem22);
        tableWidget_Patients->setObjectName(QString::fromUtf8("tableWidget_Patients"));
        tableWidget_Patients->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Patients->setTabKeyNavigation(true);
        tableWidget_Patients->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Patients->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Patients->setRowCount(0);
        tableWidget_Patients->setColumnCount(8);
        tableWidget_Patients->horizontalHeader()->setVisible(true);
        tableWidget_Patients->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget_Patients, 0, 0, 1, 1);


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
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Consultations->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PatientListView", "Patient ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Consultations->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PatientListView", "Consult ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Consultations->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PatientListView", "Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Consultations->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PatientListView", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Consultations->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PatientListView", "OHIP #", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Consultations->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PatientListView", "Reason", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Consultations->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("PatientListView", "Actual Reason", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_Consultations->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("PatientListView", "Diagnosis", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("PatientListView", "Follow-Ups", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_FollowUps->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("PatientListView", "Consult Id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_FollowUps->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("PatientListView", "Follow Up ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_FollowUps->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("PatientListView", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_FollowUps->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("PatientListView", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_FollowUps->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("PatientListView", "Due Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_FollowUps->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("PatientListView", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_FollowUps->horizontalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("PatientListView", "Details", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PatientListView", "Generate Report", 0, QApplication::UnicodeUTF8));
        comboBox_FilterByStatus->clear();
        comboBox_FilterByStatus->insertItems(0, QStringList()
         << QApplication::translate("PatientListView", "All", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatientListView", "Pending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatientListView", "Completed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatientListView", "Overdue", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PatientListView", "Filter by Follow-Up Status:", 0, QApplication::UnicodeUTF8));
        comboBox_Physicians->clear();
        comboBox_Physicians->insertItems(0, QStringList()
         << QApplication::translate("PatientListView", "All", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("PatientListView", "Filter by Physician: ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PatientListView", "Patients", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_Patients->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("PatientListView", "Patient ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_Patients->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("PatientListView", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_Patients->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("PatientListView", "Last Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_Patients->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("PatientListView", "Phone #", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_Patients->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("PatientListView", "Age", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_Patients->horizontalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("PatientListView", "Gender", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_Patients->horizontalHeaderItem(6);
        ___qtablewidgetitem21->setText(QApplication::translate("PatientListView", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_Patients->horizontalHeaderItem(7);
        ___qtablewidgetitem22->setText(QApplication::translate("PatientListView", "Primary Physician", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatientListView: public Ui_PatientListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLISTVIEW_H
