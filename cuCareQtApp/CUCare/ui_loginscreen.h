/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created: Sun Oct 28 20:02:05 2012
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

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(400, 300);
        gridLayout_2 = new QGridLayout(LoginScreen);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(LoginScreen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_2 = new QLineEdit(LoginScreen);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(125, 16777215));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(LoginScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(LoginScreen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(125, 16777215));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(LoginScreen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        label_3 = new QLabel(LoginScreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(LoginScreen);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginScreen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginScreen, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Login to cuCare", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginScreen", "Password:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginScreen", "Username:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginScreen", "LOGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
