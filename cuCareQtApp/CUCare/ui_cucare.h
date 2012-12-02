/********************************************************************************
** Form generated from reading UI file 'cucare.ui'
**
** Created: Sun Dec 2 00:01:22 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUCARE_H
#define UI_CUCARE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuCare
{
public:
    QAction *actionAdd_Patient;
    QAction *actionEdit_Patient;
    QAction *actionDelete_Patient;
    QAction *actionView;
    QAction *actionAdd_Consultation;
    QAction *actionEdit_Consultation;
    QAction *actionManage_Users;
    QAction *actionAdd;
    QAction *actionEdit;
    QAction *actionConfigure_Audit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QLabel *label;
    QComboBox *comboBox_Patients;
    QPushButton *pushButton_SyncData;
    QGroupBox *groupBox_ConsultationInfo;
    QGridLayout *gridLayout_5;
    QListWidget *consultationList;
    QPushButton *pushButton_AddConsultation;
    QPushButton *pushButton_EditConsultation;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser_AppOutput;
    QGroupBox *groupBox_PatientInfo;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_patFirstName;
    QLabel *label_3;
    QLineEdit *lineEdit_patLastName;
    QLabel *label_5;
    QLineEdit *lineEdit_patPhoneNum;
    QLabel *label_4;
    QLineEdit *lineEdit_PatPrimaryPhysician;
    QLabel *label_6;
    QDateEdit *dateEdit_PatLastConsult;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_FullPatientListing;
    QPushButton *pushButton_SwitchUser;
    QPushButton *pushButton_6;
    QWidget *page_4;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_9;
    QTimeEdit *timeEdit;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPatient_Records;
    QMenu *menuManage_Users;

    void setupUi(QMainWindow *CuCare)
    {
        if (CuCare->objectName().isEmpty())
            CuCare->setObjectName(QString::fromUtf8("CuCare"));
        CuCare->resize(962, 700);
        actionAdd_Patient = new QAction(CuCare);
        actionAdd_Patient->setObjectName(QString::fromUtf8("actionAdd_Patient"));
        actionEdit_Patient = new QAction(CuCare);
        actionEdit_Patient->setObjectName(QString::fromUtf8("actionEdit_Patient"));
        actionDelete_Patient = new QAction(CuCare);
        actionDelete_Patient->setObjectName(QString::fromUtf8("actionDelete_Patient"));
        actionView = new QAction(CuCare);
        actionView->setObjectName(QString::fromUtf8("actionView"));
        actionAdd_Consultation = new QAction(CuCare);
        actionAdd_Consultation->setObjectName(QString::fromUtf8("actionAdd_Consultation"));
        actionEdit_Consultation = new QAction(CuCare);
        actionEdit_Consultation->setObjectName(QString::fromUtf8("actionEdit_Consultation"));
        actionManage_Users = new QAction(CuCare);
        actionManage_Users->setObjectName(QString::fromUtf8("actionManage_Users"));
        actionAdd = new QAction(CuCare);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionEdit = new QAction(CuCare);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionConfigure_Audit = new QAction(CuCare);
        actionConfigure_Audit->setObjectName(QString::fromUtf8("actionConfigure_Audit"));
        centralWidget = new QWidget(CuCare);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout_10->addWidget(label, 1, 0, 1, 1);

        comboBox_Patients = new QComboBox(page_3);
        comboBox_Patients->setObjectName(QString::fromUtf8("comboBox_Patients"));
        comboBox_Patients->setMaximumSize(QSize(200, 16777215));

        gridLayout_10->addWidget(comboBox_Patients, 1, 1, 1, 1);

        pushButton_SyncData = new QPushButton(page_3);
        pushButton_SyncData->setObjectName(QString::fromUtf8("pushButton_SyncData"));
        pushButton_SyncData->setEnabled(true);

        gridLayout_10->addWidget(pushButton_SyncData, 1, 3, 1, 1);

        groupBox_ConsultationInfo = new QGroupBox(page_3);
        groupBox_ConsultationInfo->setObjectName(QString::fromUtf8("groupBox_ConsultationInfo"));
        groupBox_ConsultationInfo->setMinimumSize(QSize(250, 0));
        groupBox_ConsultationInfo->setFlat(false);
        groupBox_ConsultationInfo->setCheckable(false);
        gridLayout_5 = new QGridLayout(groupBox_ConsultationInfo);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        consultationList = new QListWidget(groupBox_ConsultationInfo);
        consultationList->setObjectName(QString::fromUtf8("consultationList"));
        consultationList->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(consultationList, 1, 0, 1, 2);

        pushButton_AddConsultation = new QPushButton(groupBox_ConsultationInfo);
        pushButton_AddConsultation->setObjectName(QString::fromUtf8("pushButton_AddConsultation"));

        gridLayout_5->addWidget(pushButton_AddConsultation, 2, 0, 1, 1);

        pushButton_EditConsultation = new QPushButton(groupBox_ConsultationInfo);
        pushButton_EditConsultation->setObjectName(QString::fromUtf8("pushButton_EditConsultation"));

        gridLayout_5->addWidget(pushButton_EditConsultation, 2, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_ConsultationInfo, 2, 3, 1, 1);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textBrowser_AppOutput = new QTextBrowser(groupBox_3);
        textBrowser_AppOutput->setObjectName(QString::fromUtf8("textBrowser_AppOutput"));

        gridLayout_4->addWidget(textBrowser_AppOutput, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_3, 3, 0, 1, 4);

        groupBox_PatientInfo = new QGroupBox(page_3);
        groupBox_PatientInfo->setObjectName(QString::fromUtf8("groupBox_PatientInfo"));
        groupBox_PatientInfo->setEnabled(false);
        groupBox_PatientInfo->setMinimumSize(QSize(500, 0));
        gridLayout_3 = new QGridLayout(groupBox_PatientInfo);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_PatientInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_patFirstName = new QLineEdit(groupBox_PatientInfo);
        lineEdit_patFirstName->setObjectName(QString::fromUtf8("lineEdit_patFirstName"));
        lineEdit_patFirstName->setEnabled(false);
        lineEdit_patFirstName->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_patFirstName->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_patFirstName, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_PatientInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_patLastName = new QLineEdit(groupBox_PatientInfo);
        lineEdit_patLastName->setObjectName(QString::fromUtf8("lineEdit_patLastName"));
        lineEdit_patLastName->setEnabled(false);
        lineEdit_patLastName->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_patLastName->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_patLastName, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_PatientInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_patPhoneNum = new QLineEdit(groupBox_PatientInfo);
        lineEdit_patPhoneNum->setObjectName(QString::fromUtf8("lineEdit_patPhoneNum"));
        lineEdit_patPhoneNum->setEnabled(false);
        lineEdit_patPhoneNum->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_patPhoneNum->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_patPhoneNum, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_PatientInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_PatPrimaryPhysician = new QLineEdit(groupBox_PatientInfo);
        lineEdit_PatPrimaryPhysician->setObjectName(QString::fromUtf8("lineEdit_PatPrimaryPhysician"));
        lineEdit_PatPrimaryPhysician->setEnabled(false);
        lineEdit_PatPrimaryPhysician->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_PatPrimaryPhysician, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_PatientInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        dateEdit_PatLastConsult = new QDateEdit(groupBox_PatientInfo);
        dateEdit_PatLastConsult->setObjectName(QString::fromUtf8("dateEdit_PatLastConsult"));
        dateEdit_PatLastConsult->setEnabled(false);
        dateEdit_PatLastConsult->setReadOnly(true);

        gridLayout_2->addWidget(dateEdit_PatLastConsult, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);

        pushButton_FullPatientListing = new QPushButton(groupBox_PatientInfo);
        pushButton_FullPatientListing->setObjectName(QString::fromUtf8("pushButton_FullPatientListing"));

        gridLayout_3->addWidget(pushButton_FullPatientListing, 3, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_PatientInfo, 2, 0, 1, 3);

        pushButton_SwitchUser = new QPushButton(page_3);
        pushButton_SwitchUser->setObjectName(QString::fromUtf8("pushButton_SwitchUser"));

        gridLayout_10->addWidget(pushButton_SwitchUser, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(false);

        gridLayout_10->addWidget(pushButton_6, 0, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setEnabled(false);
        gridLayout_7 = new QGridLayout(page_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        listWidget = new QListWidget(groupBox_5);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_8->addWidget(listWidget, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_8->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_8->addWidget(pushButton_3, 2, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(page_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_11 = new QGridLayout(groupBox_6);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalSpacer_2 = new QSpacerItem(20, 154, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_2, 2, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        timeEdit = new QTimeEdit(groupBox_6);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout_9->addWidget(timeEdit, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_9->addWidget(label_7, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_9, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_11->addWidget(pushButton_4, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textBrowser = new QTextBrowser(groupBox_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_6->addWidget(textBrowser, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 1, 0, 1, 2);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        CuCare->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(CuCare);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CuCare->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CuCare);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CuCare->setStatusBar(statusBar);
        menuBar = new QMenuBar(CuCare);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 962, 25));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setEnabled(false);
        menuPatient_Records = new QMenu(menuBar);
        menuPatient_Records->setObjectName(QString::fromUtf8("menuPatient_Records"));
        menuPatient_Records->setEnabled(false);
        menuManage_Users = new QMenu(menuBar);
        menuManage_Users->setObjectName(QString::fromUtf8("menuManage_Users"));
        CuCare->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPatient_Records->menuAction());
        menuBar->addAction(menuManage_Users->menuAction());
        menuFile->addAction(actionAdd_Patient);
        menuFile->addAction(actionEdit_Patient);
        menuFile->addAction(actionDelete_Patient);
        menuPatient_Records->addAction(actionAdd_Consultation);
        menuPatient_Records->addAction(actionEdit_Consultation);
        menuManage_Users->addAction(actionAdd);
        menuManage_Users->addAction(actionEdit);

        retranslateUi(CuCare);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CuCare);
    } // setupUi

    void retranslateUi(QMainWindow *CuCare)
    {
        CuCare->setWindowTitle(QApplication::translate("CuCare", "CuCare", 0, QApplication::UnicodeUTF8));
        actionAdd_Patient->setText(QApplication::translate("CuCare", "Add..", 0, QApplication::UnicodeUTF8));
        actionEdit_Patient->setText(QApplication::translate("CuCare", "Edit..", 0, QApplication::UnicodeUTF8));
        actionDelete_Patient->setText(QApplication::translate("CuCare", "Delete..", 0, QApplication::UnicodeUTF8));
        actionView->setText(QApplication::translate("CuCare", "View..", 0, QApplication::UnicodeUTF8));
        actionAdd_Consultation->setText(QApplication::translate("CuCare", "Add..", 0, QApplication::UnicodeUTF8));
        actionEdit_Consultation->setText(QApplication::translate("CuCare", "Edit..", 0, QApplication::UnicodeUTF8));
        actionManage_Users->setText(QApplication::translate("CuCare", "Manage Users", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("CuCare", "Add...", 0, QApplication::UnicodeUTF8));
        actionEdit->setText(QApplication::translate("CuCare", "Edit...", 0, QApplication::UnicodeUTF8));
        actionConfigure_Audit->setText(QApplication::translate("CuCare", "Configure Audit...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CuCare", "Select Patient:", 0, QApplication::UnicodeUTF8));
        pushButton_SyncData->setText(QApplication::translate("CuCare", "Sync Data", 0, QApplication::UnicodeUTF8));
        groupBox_ConsultationInfo->setTitle(QApplication::translate("CuCare", "Consultation Records", 0, QApplication::UnicodeUTF8));
        pushButton_AddConsultation->setText(QApplication::translate("CuCare", "Create...", 0, QApplication::UnicodeUTF8));
        pushButton_EditConsultation->setText(QApplication::translate("CuCare", "Edit...", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CuCare", "Application Output:", 0, QApplication::UnicodeUTF8));
        groupBox_PatientInfo->setTitle(QApplication::translate("CuCare", "Patient Info", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CuCare", "First Name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CuCare", "Last Name:", 0, QApplication::UnicodeUTF8));
        lineEdit_patLastName->setText(QString());
        label_5->setText(QApplication::translate("CuCare", "Phone Number:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CuCare", "Primary Physician: ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CuCare", "Last Consult:", 0, QApplication::UnicodeUTF8));
        pushButton_FullPatientListing->setText(QApplication::translate("CuCare", "Full Patient Listing", 0, QApplication::UnicodeUTF8));
        pushButton_SwitchUser->setText(QApplication::translate("CuCare", "Switch User...", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("CuCare", "Reconnect to Server...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("CuCare", "CuCare Accounts", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CuCare", "Edit...", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("CuCare", "Create...", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("CuCare", "Server Parameters", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CuCare", "Daily Audit: ", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("CuCare", "Save...", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CuCare", "Application Output", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("CuCare", "Patients", 0, QApplication::UnicodeUTF8));
        menuPatient_Records->setTitle(QApplication::translate("CuCare", "Records", 0, QApplication::UnicodeUTF8));
        menuManage_Users->setTitle(QApplication::translate("CuCare", "Manage Users", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CuCare: public Ui_CuCare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCARE_H
