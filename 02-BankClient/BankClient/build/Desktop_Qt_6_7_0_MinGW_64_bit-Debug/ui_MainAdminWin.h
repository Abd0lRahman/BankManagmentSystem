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
    QVBoxLayout *verticalLayout2;
    QLabel *WelcomeLabel;
    QHBoxLayout *horizontalLayout90;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *WelcomeLabel_2;
    QLabel *ServerStateLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_12;
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
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_22;
    QLineEdit *LE_ViewTransactionHistory;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_8;
    QLineEdit *LE_count;
    QPushButton *PB_View;
    QLabel *TransactionHisLabel;
    QWidget *page_3;
    QTableView *TV_ViewBankDataBase;
    QWidget *page_4;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *LE_CreateUserID;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_16;
    QLineEdit *LE_CreateFullName;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_18;
    QLineEdit *LE_CreateUserName;
    QHBoxLayout *horizontalLayout_110;
    QLabel *label_19;
    QLineEdit *LE_CreatePassword;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLineEdit *LE_CreateBalance;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_21;
    QLineEdit *LE_CreateEmail;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_20;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_17;
    QLineEdit *LE_CreateSignature;
    QPushButton *PB_Create;
    QLabel *CreateLabel;
    QWidget *page_5;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *LE_DeleteUserID;
    QHBoxLayout *horizontalLayout_900;
    QLabel *label_10;
    QLineEdit *LE_DeleteUserSignature;
    QPushButton *PB_DeleteUserSignature;
    QLabel *DeleteUserLabel;
    QWidget *page_6;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *LE_UpdateUserID;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *LE_UpdateSignature;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *UpdateComboBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *LE_UpdateNewValue;
    QPushButton *PB_Update;
    QLabel *UpdateLabel;

    void setupUi(QDialog *MainAdminWin)
    {
        if (MainAdminWin->objectName().isEmpty())
            MainAdminWin->setObjectName("MainAdminWin");
        MainAdminWin->resize(840, 561);
        layoutWidget = new QWidget(MainAdminWin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-10, 0, 851, 91));
        verticalLayout2 = new QVBoxLayout(layoutWidget);
        verticalLayout2->setObjectName("verticalLayout2");
        verticalLayout2->setContentsMargins(0, 0, 0, 0);
        WelcomeLabel = new QLabel(layoutWidget);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout2->addWidget(WelcomeLabel);

        horizontalLayout90 = new QHBoxLayout();
        horizontalLayout90->setObjectName("horizontalLayout90");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout90->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout90->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout90->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout90->addWidget(label_4);

        WelcomeLabel_2 = new QLabel(layoutWidget);
        WelcomeLabel_2->setObjectName("WelcomeLabel_2");
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout90->addWidget(WelcomeLabel_2);


        verticalLayout2->addLayout(horizontalLayout90);

        ServerStateLabel = new QLabel(MainAdminWin);
        ServerStateLabel->setObjectName("ServerStateLabel");
        ServerStateLabel->setGeometry(QRect(680, 530, 151, 20));
        ServerStateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget1 = new QWidget(MainAdminWin);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 100, 241, 281));
        verticalLayout_12 = new QVBoxLayout(layoutWidget1);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        PB_GetAccountNumber = new QPushButton(layoutWidget1);
        PB_GetAccountNumber->setObjectName("PB_GetAccountNumber");

        verticalLayout_12->addWidget(PB_GetAccountNumber);

        PB_ViewAccountBalance = new QPushButton(layoutWidget1);
        PB_ViewAccountBalance->setObjectName("PB_ViewAccountBalance");

        verticalLayout_12->addWidget(PB_ViewAccountBalance);

        PB_ViewTransactionHistory = new QPushButton(layoutWidget1);
        PB_ViewTransactionHistory->setObjectName("PB_ViewTransactionHistory");

        verticalLayout_12->addWidget(PB_ViewTransactionHistory);

        PB_ViewBankDataBase = new QPushButton(layoutWidget1);
        PB_ViewBankDataBase->setObjectName("PB_ViewBankDataBase");

        verticalLayout_12->addWidget(PB_ViewBankDataBase);

        PB_CreateNewUser = new QPushButton(layoutWidget1);
        PB_CreateNewUser->setObjectName("PB_CreateNewUser");

        verticalLayout_12->addWidget(PB_CreateNewUser);

        PB_DeleteUser = new QPushButton(layoutWidget1);
        PB_DeleteUser->setObjectName("PB_DeleteUser");

        verticalLayout_12->addWidget(PB_DeleteUser);

        PB_UpdateUser = new QPushButton(layoutWidget1);
        PB_UpdateUser->setObjectName("PB_UpdateUser");

        verticalLayout_12->addWidget(PB_UpdateUser);

        stackedWidget = new QStackedWidget(MainAdminWin);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(260, 100, 561, 431));
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
        TV_ViewTransactionHistory->setGeometry(QRect(10, 100, 551, 321));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 10, 551, 101));
        verticalLayout_11 = new QVBoxLayout(layoutWidget3);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName("label_22");

        horizontalLayout_20->addWidget(label_22);

        LE_ViewTransactionHistory = new QLineEdit(layoutWidget3);
        LE_ViewTransactionHistory->setObjectName("LE_ViewTransactionHistory");

        horizontalLayout_20->addWidget(LE_ViewTransactionHistory);


        horizontalLayout_4->addLayout(horizontalLayout_20);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_11->addLayout(horizontalLayout_5);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        horizontalLayout_21->addWidget(label_8);

        LE_count = new QLineEdit(layoutWidget3);
        LE_count->setObjectName("LE_count");

        horizontalLayout_21->addWidget(LE_count);

        PB_View = new QPushButton(layoutWidget3);
        PB_View->setObjectName("PB_View");

        horizontalLayout_21->addWidget(PB_View);


        verticalLayout_11->addLayout(horizontalLayout_21);

        TransactionHisLabel = new QLabel(layoutWidget3);
        TransactionHisLabel->setObjectName("TransactionHisLabel");
        TransactionHisLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(TransactionHisLabel);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        TV_ViewBankDataBase = new QTableView(page_3);
        TV_ViewBankDataBase->setObjectName("TV_ViewBankDataBase");
        TV_ViewBankDataBase->setGeometry(QRect(0, 0, 561, 421));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        layoutWidget_3 = new QWidget(page_4);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 10, 521, 391));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName("label_14");

        horizontalLayout_12->addWidget(label_14);

        LE_CreateUserID = new QLineEdit(layoutWidget_3);
        LE_CreateUserID->setObjectName("LE_CreateUserID");

        horizontalLayout_12->addWidget(LE_CreateUserID);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName("label_16");

        horizontalLayout_14->addWidget(label_16);

        LE_CreateFullName = new QLineEdit(layoutWidget_3);
        LE_CreateFullName->setObjectName("LE_CreateFullName");

        horizontalLayout_14->addWidget(LE_CreateFullName);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName("label_18");

        horizontalLayout_16->addWidget(label_18);

        LE_CreateUserName = new QLineEdit(layoutWidget_3);
        LE_CreateUserName->setObjectName("LE_CreateUserName");

        horizontalLayout_16->addWidget(LE_CreateUserName);


        verticalLayout_10->addLayout(horizontalLayout_16);

        horizontalLayout_110 = new QHBoxLayout();
        horizontalLayout_110->setObjectName("horizontalLayout_110");
        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName("label_19");

        horizontalLayout_110->addWidget(label_19);

        LE_CreatePassword = new QLineEdit(layoutWidget_3);
        LE_CreatePassword->setObjectName("LE_CreatePassword");

        horizontalLayout_110->addWidget(LE_CreatePassword);


        verticalLayout_10->addLayout(horizontalLayout_110);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName("label_15");

        horizontalLayout_13->addWidget(label_15);

        LE_CreateBalance = new QLineEdit(layoutWidget_3);
        LE_CreateBalance->setObjectName("LE_CreateBalance");

        horizontalLayout_13->addWidget(LE_CreateBalance);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName("label_21");

        horizontalLayout_19->addWidget(label_21);

        LE_CreateEmail = new QLineEdit(layoutWidget_3);
        LE_CreateEmail->setObjectName("LE_CreateEmail");

        horizontalLayout_19->addWidget(LE_CreateEmail);


        verticalLayout_10->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName("label_20");

        horizontalLayout_18->addWidget(label_20);

        comboBox = new QComboBox(layoutWidget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_18->addWidget(comboBox);


        verticalLayout_10->addLayout(horizontalLayout_18);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_17 = new QLabel(layoutWidget_3);
        label_17->setObjectName("label_17");

        horizontalLayout_15->addWidget(label_17);

        LE_CreateSignature = new QLineEdit(layoutWidget_3);
        LE_CreateSignature->setObjectName("LE_CreateSignature");

        horizontalLayout_15->addWidget(LE_CreateSignature);


        verticalLayout_10->addLayout(horizontalLayout_15);

        PB_Create = new QPushButton(layoutWidget_3);
        PB_Create->setObjectName("PB_Create");

        verticalLayout_10->addWidget(PB_Create);

        CreateLabel = new QLabel(layoutWidget_3);
        CreateLabel->setObjectName("CreateLabel");
        CreateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(CreateLabel);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        layoutWidget_4 = new QWidget(page_5);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 10, 521, 134));
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

        horizontalLayout_900 = new QHBoxLayout();
        horizontalLayout_900->setObjectName("horizontalLayout_900");
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");

        horizontalLayout_900->addWidget(label_10);

        LE_DeleteUserSignature = new QLineEdit(layoutWidget_4);
        LE_DeleteUserSignature->setObjectName("LE_DeleteUserSignature");

        horizontalLayout_900->addWidget(LE_DeleteUserSignature);


        verticalLayout_8->addLayout(horizontalLayout_900);


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
        layoutWidget4 = new QWidget(page_6);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(0, 20, 521, 206));
        verticalLayout_9 = new QVBoxLayout(layoutWidget4);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        LE_UpdateUserID = new QLineEdit(layoutWidget4);
        LE_UpdateUserID->setObjectName("LE_UpdateUserID");

        horizontalLayout_8->addWidget(LE_UpdateUserID);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName("label_13");

        horizontalLayout_11->addWidget(label_13);

        LE_UpdateSignature = new QLineEdit(layoutWidget4);
        LE_UpdateSignature->setObjectName("LE_UpdateSignature");

        horizontalLayout_11->addWidget(LE_UpdateSignature);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName("label_11");

        horizontalLayout_9->addWidget(label_11);

        UpdateComboBox = new QComboBox(layoutWidget4);
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
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");

        horizontalLayout_10->addWidget(label_12);

        LE_UpdateNewValue = new QLineEdit(layoutWidget4);
        LE_UpdateNewValue->setObjectName("LE_UpdateNewValue");

        horizontalLayout_10->addWidget(LE_UpdateNewValue);


        verticalLayout_9->addLayout(horizontalLayout_10);

        PB_Update = new QPushButton(layoutWidget4);
        PB_Update->setObjectName("PB_Update");

        verticalLayout_9->addWidget(PB_Update);

        UpdateLabel = new QLabel(layoutWidget4);
        UpdateLabel->setObjectName("UpdateLabel");
        UpdateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(UpdateLabel);

        stackedWidget->addWidget(page_6);

        retranslateUi(MainAdminWin);

        stackedWidget->setCurrentIndex(5);


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
        ServerStateLabel->setText(QCoreApplication::translate("MainAdminWin", "Server is connected", nullptr));
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
        BalanceLabel->setText(QString());
        label_22->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_8->setText(QCoreApplication::translate("MainAdminWin", "Count of transactions", nullptr));
        PB_View->setText(QCoreApplication::translate("MainAdminWin", "View", nullptr));
        TransactionHisLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_16->setText(QCoreApplication::translate("MainAdminWin", "Enter the full name: ", nullptr));
        label_18->setText(QCoreApplication::translate("MainAdminWin", "Enter the UserName: ", nullptr));
        label_19->setText(QCoreApplication::translate("MainAdminWin", "Enter the account Password:  ", nullptr));
        label_15->setText(QCoreApplication::translate("MainAdminWin", "Enter the balance:", nullptr));
        label_21->setText(QCoreApplication::translate("MainAdminWin", "Enter the account Email: ", nullptr));
        label_20->setText(QCoreApplication::translate("MainAdminWin", "Choose the Account type:  ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainAdminWin", "Checking", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainAdminWin", "Saving", nullptr));

        label_17->setText(QCoreApplication::translate("MainAdminWin", "Enter the account signature: ", nullptr));
        PB_Create->setText(QCoreApplication::translate("MainAdminWin", "Create", nullptr));
        CreateLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_10->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account signature: ", nullptr));
        PB_DeleteUserSignature->setText(QCoreApplication::translate("MainAdminWin", "Delete", nullptr));
        DeleteUserLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("MainAdminWin", "Enter the Account number: ", nullptr));
        label_13->setText(QCoreApplication::translate("MainAdminWin", "Enter the account signature: ", nullptr));
        label_11->setText(QCoreApplication::translate("MainAdminWin", "What do you want to change: ", nullptr));
        UpdateComboBox->setItemText(0, QCoreApplication::translate("MainAdminWin", "AccountID", nullptr));
        UpdateComboBox->setItemText(1, QCoreApplication::translate("MainAdminWin", "UserName", nullptr));
        UpdateComboBox->setItemText(2, QCoreApplication::translate("MainAdminWin", "Password", nullptr));
        UpdateComboBox->setItemText(3, QCoreApplication::translate("MainAdminWin", "EMail", nullptr));
        UpdateComboBox->setItemText(4, QCoreApplication::translate("MainAdminWin", "Signature", nullptr));

        label_12->setText(QCoreApplication::translate("MainAdminWin", "Enter the new value: ", nullptr));
        PB_Update->setText(QCoreApplication::translate("MainAdminWin", "Update", nullptr));
        UpdateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainAdminWin: public Ui_MainAdminWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINADMINWIN_H
