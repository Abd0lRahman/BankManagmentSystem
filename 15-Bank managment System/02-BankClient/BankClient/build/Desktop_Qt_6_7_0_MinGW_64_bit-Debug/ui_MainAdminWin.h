/********************************************************************************
** Form generated from reading UI file 'MainAdminWin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINADMINWIN_H
#define UI_MAINADMINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAdminWin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *WelcomeLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *WelcomeLabel_2;
    QLabel *ServerStateLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PB_GetAccountNumber;
    QPushButton *PB_ViewAccountBalance;
    QPushButton *PB_ViewTransactionHistory;
    QPushButton *PB_ViewBankDataBase;
    QPushButton *PB_CreateNewUser;
    QPushButton *PB_DeleteUser;
    QPushButton *PB_UpdateUser;
    QStackedWidget *stackedWidget;
    QWidget *EmtyPage;
    QWidget *GetAccountNumber;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *LE_GetAccountNumber;
    QPushButton *PB_GetAccounNumber;
    QLabel *AccountNumberLabel;
    QWidget *page_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *LE_GetAccountBalance;
    QPushButton *PB_GetAccounBalance;
    QLabel *BalanceLabel;
    QWidget *page;
    QTableView *TV_ViewTransactionHistory;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *LE_ViewTransactionHistory;
    QPushButton *PB_View;
    QWidget *page_3;
    QTableView *TV_ViewBankDataBase;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *LE_DeleteUserID;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *LE_DeleteUserSignature;
    QPushButton *PB_DeleteUserSignature;
    QLabel *DeleteUserLabel;
    QWidget *page_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *LE_UpdateUserID;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *UpdateComboBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *LE_UpdateNewValue;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *LE_UpdateSignature;
    QPushButton *PB_Update;
    QLabel *UpdateLabel;

    void setupUi(QDialog *MainAdminWin)
    {
        if (MainAdminWin->objectName().isEmpty())
            MainAdminWin->setObjectName("MainAdminWin");
        MainAdminWin->resize(780, 412);
        layoutWidget = new QWidget(MainAdminWin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-10, 0, 791, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        WelcomeLabel = new QLabel(layoutWidget);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(WelcomeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        WelcomeLabel_2 = new QLabel(layoutWidget);
        WelcomeLabel_2->setObjectName("WelcomeLabel_2");
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(WelcomeLabel_2);


        verticalLayout->addLayout(horizontalLayout);

        ServerStateLabel = new QLabel(MainAdminWin);
        ServerStateLabel->setObjectName("ServerStateLabel");
        ServerStateLabel->setGeometry(QRect(620, 390, 151, 20));
        ServerStateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget1 = new QWidget(MainAdminWin);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 100, 241, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PB_GetAccountNumber = new QPushButton(layoutWidget1);
        PB_GetAccountNumber->setObjectName("PB_GetAccountNumber");

        verticalLayout_2->addWidget(PB_GetAccountNumber);

        PB_ViewAccountBalance = new QPushButton(layoutWidget1);
        PB_ViewAccountBalance->setObjectName("PB_ViewAccountBalance");

        verticalLayout_2->addWidget(PB_ViewAccountBalance);

        PB_ViewTransactionHistory = new QPushButton(layoutWidget1);
        PB_ViewTransactionHistory->setObjectName("PB_ViewTransactionHistory");

        verticalLayout_2->addWidget(PB_ViewTransactionHistory);

        PB_ViewBankDataBase = new QPushButton(layoutWidget1);
        PB_ViewBankDataBase->setObjectName("PB_ViewBankDataBase");

        verticalLayout_2->addWidget(PB_ViewBankDataBase);

        PB_CreateNewUser = new QPushButton(layoutWidget1);
        PB_CreateNewUser->setObjectName("PB_CreateNewUser");

        verticalLayout_2->addWidget(PB_CreateNewUser);

        PB_DeleteUser = new QPushButton(layoutWidget1);
        PB_DeleteUser->setObjectName("PB_DeleteUser");

        verticalLayout_2->addWidget(PB_DeleteUser);

        PB_UpdateUser = new QPushButton(layoutWidget1);
        PB_UpdateUser->setObjectName("PB_UpdateUser");

        verticalLayout_2->addWidget(PB_UpdateUser);

        stackedWidget = new QStackedWidget(MainAdminWin);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(260, 100, 511, 291));
        EmtyPage = new QWidget();
        EmtyPage->setObjectName("EmtyPage");
        stackedWidget->addWidget(EmtyPage);
        GetAccountNumber = new QWidget();
        GetAccountNumber->setObjectName("GetAccountNumber");
        layoutWidget2 = new QWidget(GetAccountNumber);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 20, 481, 97));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        LE_GetAccountNumber = new QLineEdit(layoutWidget2);
        LE_GetAccountNumber->setObjectName("LE_GetAccountNumber");

        horizontalLayout_2->addWidget(LE_GetAccountNumber);


        verticalLayout_3->addLayout(horizontalLayout_2);

        PB_GetAccounNumber = new QPushButton(layoutWidget2);
        PB_GetAccounNumber->setObjectName("PB_GetAccounNumber");

        verticalLayout_3->addWidget(PB_GetAccounNumber);


        verticalLayout_4->addLayout(verticalLayout_3);

        AccountNumberLabel = new QLabel(layoutWidget2);
        AccountNumberLabel->setObjectName("AccountNumberLabel");
        AccountNumberLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(AccountNumberLabel);

        stackedWidget->addWidget(GetAccountNumber);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 20, 481, 97));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        LE_GetAccountBalance = new QLineEdit(layoutWidget_2);
        LE_GetAccountBalance->setObjectName("LE_GetAccountBalance");

        horizontalLayout_3->addWidget(LE_GetAccountBalance);


        verticalLayout_6->addLayout(horizontalLayout_3);

        PB_GetAccounBalance = new QPushButton(layoutWidget_2);
        PB_GetAccounBalance->setObjectName("PB_GetAccounBalance");

        verticalLayout_6->addWidget(PB_GetAccounBalance);


        verticalLayout_5->addLayout(verticalLayout_6);

        BalanceLabel = new QLabel(layoutWidget_2);
        BalanceLabel->setObjectName("BalanceLabel");
        BalanceLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(BalanceLabel);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        TV_ViewTransactionHistory = new QTableView(page);
        TV_ViewTransactionHistory->setObjectName("TV_ViewTransactionHistory");
        TV_ViewTransactionHistory->setGeometry(QRect(10, 50, 471, 231));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 10, 471, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        LE_ViewTransactionHistory = new QLineEdit(layoutWidget3);
        LE_ViewTransactionHistory->setObjectName("LE_ViewTransactionHistory");

        horizontalLayout_4->addWidget(LE_ViewTransactionHistory);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        PB_View = new QPushButton(layoutWidget3);
        PB_View->setObjectName("PB_View");

        horizontalLayout_5->addWidget(PB_View);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        TV_ViewBankDataBase = new QTableView(page_3);
        TV_ViewBankDataBase->setObjectName("TV_ViewBankDataBase");
        TV_ViewBankDataBase->setGeometry(QRect(0, 0, 511, 291));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        layoutWidget_4 = new QWidget(page_5);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 10, 481, 134));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName("label_9");

        horizontalLayout_6->addWidget(label_9);

        LE_DeleteUserID = new QLineEdit(layoutWidget_4);
        LE_DeleteUserID->setObjectName("LE_DeleteUserID");

        horizontalLayout_6->addWidget(LE_DeleteUserID);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        LE_DeleteUserSignature = new QLineEdit(layoutWidget_4);
        LE_DeleteUserSignature->setObjectName("LE_DeleteUserSignature");

        horizontalLayout_7->addWidget(LE_DeleteUserSignature);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_7->addLayout(verticalLayout_8);

        PB_DeleteUserSignature = new QPushButton(layoutWidget_4);
        PB_DeleteUserSignature->setObjectName("PB_DeleteUserSignature");

        verticalLayout_7->addWidget(PB_DeleteUserSignature);

        DeleteUserLabel = new QLabel(layoutWidget_4);
        DeleteUserLabel->setObjectName("DeleteUserLabel");
        DeleteUserLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(DeleteUserLabel);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        widget = new QWidget(page_6);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 471, 206));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        LE_UpdateUserID = new QLineEdit(widget);
        LE_UpdateUserID->setObjectName("LE_UpdateUserID");

        horizontalLayout_8->addWidget(LE_UpdateUserID);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        horizontalLayout_9->addWidget(label_11);

        UpdateComboBox = new QComboBox(widget);
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->addItem(QString());
        UpdateComboBox->setObjectName("UpdateComboBox");

        horizontalLayout_9->addWidget(UpdateComboBox);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");

        horizontalLayout_10->addWidget(label_12);

        LE_UpdateNewValue = new QLineEdit(widget);
        LE_UpdateNewValue->setObjectName("LE_UpdateNewValue");

        horizontalLayout_10->addWidget(LE_UpdateNewValue);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");

        horizontalLayout_11->addWidget(label_13);

        LE_UpdateSignature = new QLineEdit(widget);
        LE_UpdateSignature->setObjectName("LE_UpdateSignature");

        horizontalLayout_11->addWidget(LE_UpdateSignature);


        verticalLayout_9->addLayout(horizontalLayout_11);

        PB_Update = new QPushButton(widget);
        PB_Update->setObjectName("PB_Update");

        verticalLayout_9->addWidget(PB_Update);

        UpdateLabel = new QLabel(widget);
        UpdateLabel->setObjectName("UpdateLabel");
        UpdateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(UpdateLabel);

        stackedWidget->addWidget(page_6);

        retranslateUi(MainAdminWin);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainAdminWin);
    } // setupUi

    void retranslateUi(QDialog *MainAdminWin)
    {
        MainAdminWin->setWindowTitle(QCoreApplication::translate("MainAdminWin", "Dialog", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("MainAdminWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#0000ff;\">Welcome </span></p></body></html>", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        WelcomeLabel_2->setText(QCoreApplication::translate("MainAdminWin", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0004;\">Role: </span></p></body></html>", nullptr));
        ServerStateLabel->setText(QCoreApplication::translate("MainAdminWin", "Server isn't connected", nullptr));
        PB_GetAccountNumber->setText(QCoreApplication::translate("MainAdminWin", "Get account number", nullptr));
        PB_ViewAccountBalance->setText(QCoreApplication::translate("MainAdminWin", "View accountBalance", nullptr));
        PB_ViewTransactionHistory->setText(QCoreApplication::translate("MainAdminWin", "View transaction history", nullptr));
        PB_ViewBankDataBase->setText(QCoreApplication::translate("MainAdminWin", "View Bank DataBase", nullptr));
        PB_CreateNewUser->setText(QCoreApplication::translate("MainAdminWin", "Create New User", nullptr));
        PB_DeleteUser->setText(QCoreApplication::translate("MainAdminWin", "Delete User", nullptr));
        PB_UpdateUser->setText(QCoreApplication::translate("MainAdminWin", "Update User", nullptr));
        label_5->setText(QCoreApplication::translate("MainAdminWin", "Enter the user name: ", nullptr));
        PB_GetAccounNumber->setText(QCoreApplication::translate("MainAdminWin", "Get Account Number", nullptr));
        AccountNumberLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        PB_GetAccounBalance->setText(QCoreApplication::translate("MainAdminWin", "Get Account Balance", nullptr));
        BalanceLabel->setText(QCoreApplication::translate("MainAdminWin", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        PB_View->setText(QCoreApplication::translate("MainAdminWin", "View", nullptr));
        label_9->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_10->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account signature: ", nullptr));
        PB_DeleteUserSignature->setText(QCoreApplication::translate("MainAdminWin", "Delete", nullptr));
        DeleteUserLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_11->setText(QCoreApplication::translate("MainAdminWin", "What do you want to change: ", nullptr));
        UpdateComboBox->setItemText(0, QCoreApplication::translate("MainAdminWin", "Account number", nullptr));
        UpdateComboBox->setItemText(1, QCoreApplication::translate("MainAdminWin", "Account User name", nullptr));
        UpdateComboBox->setItemText(2, QCoreApplication::translate("MainAdminWin", "Account Password", nullptr));
        UpdateComboBox->setItemText(3, QCoreApplication::translate("MainAdminWin", "Account National ID", nullptr));
        UpdateComboBox->setItemText(4, QCoreApplication::translate("MainAdminWin", "Account Name", nullptr));
        UpdateComboBox->setItemText(5, QCoreApplication::translate("MainAdminWin", "Account Type", nullptr));
        UpdateComboBox->setItemText(6, QCoreApplication::translate("MainAdminWin", "Account interset rate", nullptr));
        UpdateComboBox->setItemText(7, QCoreApplication::translate("MainAdminWin", "Account type", nullptr));

        label_12->setText(QCoreApplication::translate("MainAdminWin", "Enter the new value: ", nullptr));
        label_13->setText(QCoreApplication::translate("MainAdminWin", "Enter the account signature: ", nullptr));
        PB_Update->setText(QCoreApplication::translate("MainAdminWin", "Update", nullptr));
        UpdateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainAdminWin: public Ui_MainAdminWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINADMINWIN_H
