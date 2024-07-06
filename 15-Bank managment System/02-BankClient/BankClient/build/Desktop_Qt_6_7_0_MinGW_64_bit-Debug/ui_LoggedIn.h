/********************************************************************************
** Form generated from reading UI file 'LoggedIn.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGEDIN_H
#define UI_LOGGEDIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoggedIn
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *WelcomeLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoggedIn)
    {
        if (LoggedIn->objectName().isEmpty())
            LoggedIn->setObjectName("LoggedIn");
        LoggedIn->resize(800, 600);
        centralwidget = new QWidget(LoggedIn);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 50, 83, 29));
        WelcomeLabel = new QLabel(centralwidget);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setGeometry(QRect(340, 220, 101, 20));
        LoggedIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoggedIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        LoggedIn->setMenuBar(menubar);
        statusbar = new QStatusBar(LoggedIn);
        statusbar->setObjectName("statusbar");
        LoggedIn->setStatusBar(statusbar);

        retranslateUi(LoggedIn);

        QMetaObject::connectSlotsByName(LoggedIn);
    } // setupUi

    void retranslateUi(QMainWindow *LoggedIn)
    {
        LoggedIn->setWindowTitle(QCoreApplication::translate("LoggedIn", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("LoggedIn", "Create User", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("LoggedIn", "Welcome \"\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoggedIn: public Ui_LoggedIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGEDIN_H
