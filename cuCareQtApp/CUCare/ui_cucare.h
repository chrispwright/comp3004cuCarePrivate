/********************************************************************************
** Form generated from reading UI file 'cucare.ui'
**
** Created: Sun Oct 28 20:09:30 2012
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
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
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
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_Patients;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget_Consultations;
    QPushButton *pushButton_AddConsultation;
    QPushButton *pushButton_EditConsultation;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPatient_Records;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CuCare)
    {
        if (CuCare->objectName().isEmpty())
            CuCare->setObjectName(QString::fromUtf8("CuCare"));
        CuCare->resize(817, 607);
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
        centralWidget = new QWidget(CuCare);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_Patients = new QComboBox(centralWidget);
        comboBox_Patients->setObjectName(QString::fromUtf8("comboBox_Patients"));
        comboBox_Patients->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(comboBox_Patients, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(500, 0));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setMaximumSize(QSize(125, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(250, 0));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        listWidget_Consultations = new QListWidget(groupBox_2);
        listWidget_Consultations->setObjectName(QString::fromUtf8("listWidget_Consultations"));
        listWidget_Consultations->setMinimumSize(QSize(250, 0));

        gridLayout_5->addWidget(listWidget_Consultations, 1, 0, 1, 2);

        pushButton_AddConsultation = new QPushButton(groupBox_2);
        pushButton_AddConsultation->setObjectName(QString::fromUtf8("pushButton_AddConsultation"));

        gridLayout_5->addWidget(pushButton_AddConsultation, 2, 0, 1, 1);

        pushButton_EditConsultation = new QPushButton(groupBox_2);
        pushButton_EditConsultation->setObjectName(QString::fromUtf8("pushButton_EditConsultation"));

        gridLayout_5->addWidget(pushButton_EditConsultation, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textBrowser = new QTextBrowser(groupBox_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 3);

        CuCare->setCentralWidget(centralWidget);
        groupBox_2->raise();
        groupBox->raise();
        groupBox_3->raise();
        comboBox_Patients->raise();
        label->raise();
        menuBar = new QMenuBar(CuCare);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 817, 25));
        menuBar->setDefaultUp(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPatient_Records = new QMenu(menuBar);
        menuPatient_Records->setObjectName(QString::fromUtf8("menuPatient_Records"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        CuCare->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CuCare);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CuCare->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CuCare);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CuCare->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPatient_Records->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionAdd_Patient);
        menuFile->addAction(actionEdit_Patient);
        menuFile->addAction(actionDelete_Patient);
        menuPatient_Records->addAction(actionAdd_Consultation);
        menuPatient_Records->addAction(actionEdit_Consultation);
        menuHelp->addAction(actionManage_Users);

        retranslateUi(CuCare);

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
        label->setText(QApplication::translate("CuCare", "Select Patient:", 0, QApplication::UnicodeUTF8));
        comboBox_Patients->clear();
        comboBox_Patients->insertItems(0, QStringList()
         << QApplication::translate("CuCare", "Chris", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CuCare", "Calvin", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("CuCare", "Patient Info", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CuCare", "First Name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CuCare", "Last Name:", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        label_5->setText(QApplication::translate("CuCare", "Phone Number:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CuCare", "Consultation Records", 0, QApplication::UnicodeUTF8));
        pushButton_AddConsultation->setText(QApplication::translate("CuCare", "Add...", 0, QApplication::UnicodeUTF8));
        pushButton_EditConsultation->setText(QApplication::translate("CuCare", "Edit...", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CuCare", "Application Output:", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("CuCare", "Patients", 0, QApplication::UnicodeUTF8));
        menuPatient_Records->setTitle(QApplication::translate("CuCare", "Records", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("CuCare", "Admin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CuCare: public Ui_CuCare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCARE_H
