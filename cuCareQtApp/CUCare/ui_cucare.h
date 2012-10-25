/********************************************************************************
** Form generated from reading UI file 'cucare.ui'
**
** Created: Wed Oct 24 18:02:02 2012
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
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuCare
{
public:
    QAction *actionAdd;
    QAction *actionEdit;
    QAction *actionDelete;
    QAction *actionView;
    QAction *actionView_2;
    QAction *actionEdit_2;
    QAction *actionManage_Users;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *patientsTab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QWidget *recordsTab;
    QGridLayout *gridLayout_4;
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
        CuCare->resize(561, 364);
        actionAdd = new QAction(CuCare);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionEdit = new QAction(CuCare);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionDelete = new QAction(CuCare);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionView = new QAction(CuCare);
        actionView->setObjectName(QString::fromUtf8("actionView"));
        actionView_2 = new QAction(CuCare);
        actionView_2->setObjectName(QString::fromUtf8("actionView_2"));
        actionEdit_2 = new QAction(CuCare);
        actionEdit_2->setObjectName(QString::fromUtf8("actionEdit_2"));
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
        label->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        patientsTab = new QWidget();
        patientsTab->setObjectName(QString::fromUtf8("patientsTab"));
        gridLayout_2 = new QGridLayout(patientsTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(patientsTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(patientsTab, QString());
        recordsTab = new QWidget();
        recordsTab->setObjectName(QString::fromUtf8("recordsTab"));
        tabWidget->addTab(recordsTab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));

        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);

        CuCare->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CuCare);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 561, 25));
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
        menuFile->addAction(actionAdd);
        menuFile->addAction(actionEdit);
        menuFile->addAction(actionDelete);
        menuFile->addSeparator();
        menuFile->addAction(actionView);
        menuPatient_Records->addAction(actionView_2);
        menuPatient_Records->addAction(actionEdit_2);
        menuHelp->addAction(actionManage_Users);

        retranslateUi(CuCare);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CuCare);
    } // setupUi

    void retranslateUi(QMainWindow *CuCare)
    {
        CuCare->setWindowTitle(QApplication::translate("CuCare", "CuCare", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("CuCare", "Add..", 0, QApplication::UnicodeUTF8));
        actionEdit->setText(QApplication::translate("CuCare", "Edit..", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("CuCare", "Delete..", 0, QApplication::UnicodeUTF8));
        actionView->setText(QApplication::translate("CuCare", "View..", 0, QApplication::UnicodeUTF8));
        actionView_2->setText(QApplication::translate("CuCare", "Add..", 0, QApplication::UnicodeUTF8));
        actionEdit_2->setText(QApplication::translate("CuCare", "Edit..", 0, QApplication::UnicodeUTF8));
        actionManage_Users->setText(QApplication::translate("CuCare", "Manage Users", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CuCare", "Select Patient:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CuCare", "Chris", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CuCare", "Calvin", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("CuCare", "Patient Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(patientsTab), QApplication::translate("CuCare", "Patients", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(recordsTab), QApplication::translate("CuCare", "Records", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("CuCare", "Patients", 0, QApplication::UnicodeUTF8));
        menuPatient_Records->setTitle(QApplication::translate("CuCare", "Records", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("CuCare", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CuCare: public Ui_CuCare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUCARE_H
