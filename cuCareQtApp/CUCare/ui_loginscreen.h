/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created: Tue Oct 30 16:08:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(400, 300);
        gridLayout_2 = new QGridLayout(LoginScreen);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(LoginScreen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(125, 16777215));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(LoginScreen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LoginScreen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 3);

        label_3 = new QLabel(LoginScreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);


        retranslateUi(LoginScreen);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginScreen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginScreen, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Login to cuCare", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginScreen", "Username:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginScreen", "Welcome to cuCare", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
