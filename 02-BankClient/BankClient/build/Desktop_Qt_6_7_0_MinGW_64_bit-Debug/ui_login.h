/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *LE_UserName;
    QLabel *label_2;
    QLineEdit *LE_Password;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_14;
    QPushButton *PB_ForgetPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_SignUp;
    QPushButton *PB_LogIn;
    QLabel *BankLogoLabel;
    QWidget *page_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *LE_SignUpUserName;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *LE_SignUpPassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *LE_SignUpMIP;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *LE_SignUpAccID;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *LE_SignUpName;
    QPushButton *PB_SigNUP;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *PB_Back_2;
    QLabel *label_11;
    QWidget *page_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *LE_ForgetPasswordUserName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *LE_ForgetPasswordMIP;
    QPushButton *pushButton;
    QLabel *PasswordLabel;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *PB_Back;
    QLabel *label_13;
    QLabel *Connectionlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(367, 375);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 320, 309, 20));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 371, 301));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 100, 351, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        LE_UserName = new QLineEdit(verticalLayoutWidget);
        LE_UserName->setObjectName("LE_UserName");

        verticalLayout->addWidget(LE_UserName);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        LE_Password = new QLineEdit(verticalLayoutWidget);
        LE_Password->setObjectName("LE_Password");

        verticalLayout->addWidget(LE_Password);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(48, 96, 255);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName("label_14");
        label_14->setLayoutDirection(Qt::RightToLeft);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(48, 96, 255);"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_14);

        PB_ForgetPassword = new QPushButton(verticalLayoutWidget);
        PB_ForgetPassword->setObjectName("PB_ForgetPassword");
        PB_ForgetPassword->setLayoutDirection(Qt::LeftToRight);
        PB_ForgetPassword->setStyleSheet(QString::fromUtf8("color: rgb(36, 28, 255);\n"
"background-color: transparent;\n"
"border: transparent;\n"
"font: 9pt \"Segoe UI\";\n"
"text-decoration: underline;"));

        horizontalLayout_2->addWidget(PB_ForgetPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PB_SignUp = new QPushButton(verticalLayoutWidget);
        PB_SignUp->setObjectName("PB_SignUp");
        PB_SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 57, 103);"));

        horizontalLayout->addWidget(PB_SignUp);

        PB_LogIn = new QPushButton(verticalLayoutWidget);
        PB_LogIn->setObjectName("PB_LogIn");
        PB_LogIn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 57, 103);"));

        horizontalLayout->addWidget(PB_LogIn);


        verticalLayout->addLayout(horizontalLayout);

        BankLogoLabel = new QLabel(page);
        BankLogoLabel->setObjectName("BankLogoLabel");
        BankLogoLabel->setGeometry(QRect(10, 0, 351, 101));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 351, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_7->addWidget(label_9);

        LE_SignUpUserName = new QLineEdit(layoutWidget);
        LE_SignUpUserName->setObjectName("LE_SignUpUserName");
        LE_SignUpUserName->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);

        horizontalLayout_7->addWidget(LE_SignUpUserName);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_8->addWidget(label_10);

        LE_SignUpPassword = new QLineEdit(layoutWidget);
        LE_SignUpPassword->setObjectName("LE_SignUpPassword");
        LE_SignUpPassword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);

        horizontalLayout_8->addWidget(LE_SignUpPassword);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        LE_SignUpMIP = new QLineEdit(layoutWidget);
        LE_SignUpMIP->setObjectName("LE_SignUpMIP");
        LE_SignUpMIP->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);

        horizontalLayout_3->addWidget(LE_SignUpMIP);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        LE_SignUpAccID = new QLineEdit(layoutWidget);
        LE_SignUpAccID->setObjectName("LE_SignUpAccID");

        horizontalLayout_4->addWidget(LE_SignUpAccID);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        LE_SignUpName = new QLineEdit(layoutWidget);
        LE_SignUpName->setObjectName("LE_SignUpName");

        horizontalLayout_5->addWidget(LE_SignUpName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        PB_SigNUP = new QPushButton(layoutWidget);
        PB_SigNUP->setObjectName("PB_SigNUP");

        verticalLayout_2->addWidget(PB_SigNUP);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        PB_Back_2 = new QPushButton(layoutWidget);
        PB_Back_2->setObjectName("PB_Back_2");

        horizontalLayout_9->addWidget(PB_Back_2);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_9->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 10, 351, 170));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");

        horizontalLayout_10->addWidget(label_12);

        LE_ForgetPasswordUserName = new QLineEdit(layoutWidget1);
        LE_ForgetPasswordUserName->setObjectName("LE_ForgetPasswordUserName");
        LE_ForgetPasswordUserName->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);

        horizontalLayout_10->addWidget(LE_ForgetPasswordUserName);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        horizontalLayout_6->addWidget(label_8);

        LE_ForgetPasswordMIP = new QLineEdit(layoutWidget1);
        LE_ForgetPasswordMIP->setObjectName("LE_ForgetPasswordMIP");

        horizontalLayout_6->addWidget(LE_ForgetPasswordMIP);


        verticalLayout_3->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        PasswordLabel = new QLabel(layoutWidget1);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(PasswordLabel);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        PB_Back = new QPushButton(layoutWidget1);
        PB_Back->setObjectName("PB_Back");

        horizontalLayout_11->addWidget(PB_Back);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");

        horizontalLayout_11->addWidget(label_13);


        verticalLayout_3->addLayout(horizontalLayout_11);

        stackedWidget->addWidget(page_2);
        Connectionlabel = new QLabel(centralwidget);
        Connectionlabel->setObjectName("Connectionlabel");
        Connectionlabel->setGeometry(QRect(210, 300, 151, 31));
        Connectionlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 367, 25));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login page", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Login", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        PB_ForgetPassword->setToolTip(QCoreApplication::translate("Login", "<html><head/><body><p align=\"right\"><span style=\" text-decoration: underline;\">Forgot password?</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PB_ForgetPassword->setText(QCoreApplication::translate("Login", "Forgot password?", nullptr));
        PB_SignUp->setText(QCoreApplication::translate("Login", "SIGN UP", nullptr));
        PB_LogIn->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
        BankLogoLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("Login", "Enter the UserName: ", nullptr));
        label_10->setText(QCoreApplication::translate("Login", "Enter the Password: ", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Enter the MIP: ", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "Enter the Account ID", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "Enter the name: ", nullptr));
        PB_SigNUP->setText(QCoreApplication::translate("Login", "SignUp", nullptr));
        PB_Back_2->setText(QCoreApplication::translate("Login", "Back", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("Login", "Enter the UserName: ", nullptr));
        label_8->setText(QCoreApplication::translate("Login", "Please enter the MIP: ", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "ForgetPassword", nullptr));
        PasswordLabel->setText(QString());
        PB_Back->setText(QCoreApplication::translate("Login", "Back", nullptr));
        label_13->setText(QString());
        Connectionlabel->setText(QCoreApplication::translate("Login", "Server isn't connected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
