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
    QPushButton *PB_ForgetPassword;
    QLabel *Connectionlabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_SignUp;
    QPushButton *PB_LogIn;
    QWidget *page_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
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
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(898, 720);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 320, 309, 20));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(160, 320, 361, 261));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 341, 236));
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

        Connectionlabel = new QLabel(verticalLayoutWidget);
        Connectionlabel->setObjectName("Connectionlabel");

        verticalLayout->addWidget(Connectionlabel);

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

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widget = new QWidget(page_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 351, 142));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        LE_SignUpMIP = new QLineEdit(widget);
        LE_SignUpMIP->setObjectName("LE_SignUpMIP");

        horizontalLayout_3->addWidget(LE_SignUpMIP);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        LE_SignUpAccID = new QLineEdit(widget);
        LE_SignUpAccID->setObjectName("LE_SignUpAccID");

        horizontalLayout_4->addWidget(LE_SignUpAccID);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        LE_SignUpName = new QLineEdit(widget);
        LE_SignUpName->setObjectName("LE_SignUpName");

        horizontalLayout_5->addWidget(LE_SignUpName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        PB_SigNUP = new QPushButton(widget);
        PB_SigNUP->setObjectName("PB_SigNUP");

        verticalLayout_2->addWidget(PB_SigNUP);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 898, 25));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


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
#if QT_CONFIG(tooltip)
        PB_ForgetPassword->setToolTip(QCoreApplication::translate("Login", "<html><head/><body><p align=\"right\"><span style=\" text-decoration: underline;\">Forgot password?</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PB_ForgetPassword->setText(QCoreApplication::translate("Login", "Forgot password?", nullptr));
        Connectionlabel->setText(QCoreApplication::translate("Login", "Server isn't connected", nullptr));
        PB_SignUp->setText(QCoreApplication::translate("Login", "SIGN UP", nullptr));
        PB_LogIn->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Enter the MIP: ", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "Enter the Account ID", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "Enter your your name: ", nullptr));
        PB_SigNUP->setText(QCoreApplication::translate("Login", "SignUp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
