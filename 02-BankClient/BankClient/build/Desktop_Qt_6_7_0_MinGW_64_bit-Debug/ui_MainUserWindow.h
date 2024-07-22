/********************************************************************************
** Form generated from reading UI file 'MainUserWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUSERWINDOW_H
#define UI_MAINUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_MainUserWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *WelcomeLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_LogOut;
    QLabel *label;
    QLabel *label_2;
    QLabel *WelcomeLabel_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PB_GetAccountNumber;
    QPushButton *PB_ViewAccountBalance;
    QPushButton *PB_ViewTransactionHistory;
    QPushButton *PB_MakeTransaction;
    QPushButton *PB_TransferAmount;
    QStackedWidget *stackedWidget;
    QWidget *GetAccountNumber;
    QLabel *AccNumLabel;
    QWidget *ViewAccountBalance;
    QLabel *BalanceLabel;
    QWidget *ViewTransactionHistory;
    QTableView *TV_ViewTransactionHistory;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *LE_Count;
    QPushButton *PB_ViewHis;
    QWidget *MakeTransaction;
    QLabel *TransactionBalanceLabel;
    QLabel *Status;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *LE_TransactionAmount;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *LE_TransactionSignature_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PB_Deposit;
    QPushButton *PB_Withdraw;
    QWidget *TransferAmount;
    QLabel *TransferBalanceLabel;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *LE_TransferAccID;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *LE_TransferAmount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *LE_TransferSignature;
    QPushButton *PB_Transfer;
    QWidget *EmptyPage;
    QLabel *logo2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_7;
    QLabel *BankLogoLabel;

    void setupUi(QDialog *MainUserWindow)
    {
        if (MainUserWindow->objectName().isEmpty())
            MainUserWindow->setObjectName("MainUserWindow");
        MainUserWindow->resize(850, 560);
        layoutWidget = new QWidget(MainUserWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 831, 91));
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
        PB_LogOut = new QPushButton(layoutWidget);
        PB_LogOut->setObjectName("PB_LogOut");

        horizontalLayout->addWidget(PB_LogOut);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        WelcomeLabel_2 = new QLabel(layoutWidget);
        WelcomeLabel_2->setObjectName("WelcomeLabel_2");
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(WelcomeLabel_2);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(MainUserWindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 130, 231, 201));
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

        PB_MakeTransaction = new QPushButton(layoutWidget1);
        PB_MakeTransaction->setObjectName("PB_MakeTransaction");

        verticalLayout_2->addWidget(PB_MakeTransaction);

        PB_TransferAmount = new QPushButton(layoutWidget1);
        PB_TransferAmount->setObjectName("PB_TransferAmount");

        verticalLayout_2->addWidget(PB_TransferAmount);

        stackedWidget = new QStackedWidget(MainUserWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(240, 140, 581, 381));
        GetAccountNumber = new QWidget();
        GetAccountNumber->setObjectName("GetAccountNumber");
        AccNumLabel = new QLabel(GetAccountNumber);
        AccNumLabel->setObjectName("AccNumLabel");
        AccNumLabel->setGeometry(QRect(0, 70, 541, 61));
        AccNumLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        stackedWidget->addWidget(GetAccountNumber);
        ViewAccountBalance = new QWidget();
        ViewAccountBalance->setObjectName("ViewAccountBalance");
        BalanceLabel = new QLabel(ViewAccountBalance);
        BalanceLabel->setObjectName("BalanceLabel");
        BalanceLabel->setGeometry(QRect(0, 70, 541, 51));
        BalanceLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 16pt \"Segoe UI\";"));
        stackedWidget->addWidget(ViewAccountBalance);
        ViewTransactionHistory = new QWidget();
        ViewTransactionHistory->setObjectName("ViewTransactionHistory");
        TV_ViewTransactionHistory = new QTableView(ViewTransactionHistory);
        TV_ViewTransactionHistory->setObjectName("TV_ViewTransactionHistory");
        TV_ViewTransactionHistory->setGeometry(QRect(10, 30, 561, 391));
        TV_ViewTransactionHistory->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        TV_ViewTransactionHistory->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        layoutWidget_2 = new QWidget(ViewTransactionHistory);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 0, 321, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        LE_Count = new QLineEdit(layoutWidget_2);
        LE_Count->setObjectName("LE_Count");
        LE_Count->setInputMethodHints(Qt::ImhDialableCharactersOnly|Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        LE_Count->setClearButtonEnabled(false);

        horizontalLayout_8->addWidget(LE_Count);

        PB_ViewHis = new QPushButton(layoutWidget_2);
        PB_ViewHis->setObjectName("PB_ViewHis");

        horizontalLayout_8->addWidget(PB_ViewHis);

        stackedWidget->addWidget(ViewTransactionHistory);
        MakeTransaction = new QWidget();
        MakeTransaction->setObjectName("MakeTransaction");
        TransactionBalanceLabel = new QLabel(MakeTransaction);
        TransactionBalanceLabel->setObjectName("TransactionBalanceLabel");
        TransactionBalanceLabel->setGeometry(QRect(10, 10, 361, 21));
        Status = new QLabel(MakeTransaction);
        Status->setObjectName("Status");
        Status->setGeometry(QRect(30, 120, 361, 21));
        layoutWidget2 = new QWidget(MakeTransaction);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 30, 481, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        LE_TransactionAmount = new QLineEdit(layoutWidget2);
        LE_TransactionAmount->setObjectName("LE_TransactionAmount");
        LE_TransactionAmount->setInputMethodHints(Qt::ImhDialableCharactersOnly|Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        LE_TransactionAmount->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(LE_TransactionAmount);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        LE_TransactionSignature_2 = new QLineEdit(layoutWidget2);
        LE_TransactionSignature_2->setObjectName("LE_TransactionSignature_2");

        horizontalLayout_7->addWidget(LE_TransactionSignature_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        PB_Deposit = new QPushButton(layoutWidget2);
        PB_Deposit->setObjectName("PB_Deposit");

        horizontalLayout_3->addWidget(PB_Deposit);

        PB_Withdraw = new QPushButton(layoutWidget2);
        PB_Withdraw->setObjectName("PB_Withdraw");

        horizontalLayout_3->addWidget(PB_Withdraw);


        verticalLayout_3->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(MakeTransaction);
        TransferAmount = new QWidget();
        TransferAmount->setObjectName("TransferAmount");
        TransferBalanceLabel = new QLabel(TransferAmount);
        TransferBalanceLabel->setObjectName("TransferBalanceLabel");
        TransferBalanceLabel->setGeometry(QRect(10, 10, 141, 20));
        layoutWidget3 = new QWidget(TransferAmount);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 30, 521, 171));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        LE_TransferAccID = new QLineEdit(layoutWidget3);
        LE_TransferAccID->setObjectName("LE_TransferAccID");

        horizontalLayout_4->addWidget(LE_TransferAccID);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        LE_TransferAmount = new QLineEdit(layoutWidget3);
        LE_TransferAmount->setObjectName("LE_TransferAmount");

        horizontalLayout_5->addWidget(LE_TransferAmount);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        LE_TransferSignature = new QLineEdit(layoutWidget3);
        LE_TransferSignature->setObjectName("LE_TransferSignature");

        horizontalLayout_6->addWidget(LE_TransferSignature);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_4);

        PB_Transfer = new QPushButton(layoutWidget3);
        PB_Transfer->setObjectName("PB_Transfer");

        verticalLayout_5->addWidget(PB_Transfer);

        stackedWidget->addWidget(TransferAmount);
        EmptyPage = new QWidget();
        EmptyPage->setObjectName("EmptyPage");
        logo2 = new QLabel(EmptyPage);
        logo2->setObjectName("logo2");
        logo2->setGeometry(QRect(10, 10, 561, 381));
        stackedWidget->addWidget(EmptyPage);
        layoutWidget4 = new QWidget(MainUserWindow);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(MainUserWindow);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(layoutWidget5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        BankLogoLabel = new QLabel(MainUserWindow);
        BankLogoLabel->setObjectName("BankLogoLabel");
        BankLogoLabel->setGeometry(QRect(0, 340, 241, 211));

        retranslateUi(MainUserWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainUserWindow);
    } // setupUi

    void retranslateUi(QDialog *MainUserWindow)
    {
        MainUserWindow->setWindowTitle(QCoreApplication::translate("MainUserWindow", "User view", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("MainUserWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#0000ff;\">Welcome </span></p></body></html>", nullptr));
        PB_LogOut->setText(QCoreApplication::translate("MainUserWindow", "Log out", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        WelcomeLabel_2->setText(QCoreApplication::translate("MainUserWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0004;\">Role: </span></p></body></html>", nullptr));
        PB_GetAccountNumber->setText(QCoreApplication::translate("MainUserWindow", "Get Account Number", nullptr));
        PB_ViewAccountBalance->setText(QCoreApplication::translate("MainUserWindow", "View Account Balance", nullptr));
        PB_ViewTransactionHistory->setText(QCoreApplication::translate("MainUserWindow", "View Transaction History", nullptr));
        PB_MakeTransaction->setText(QCoreApplication::translate("MainUserWindow", "Make Transaction", nullptr));
        PB_TransferAmount->setText(QCoreApplication::translate("MainUserWindow", "Transfer Amount", nullptr));
        AccNumLabel->setText(QCoreApplication::translate("MainUserWindow", "<html><head/><body><p align=\"center\">Your account number is</p></body></html>", nullptr));
        BalanceLabel->setText(QCoreApplication::translate("MainUserWindow", "<html><head/><body><p align=\"center\">Your account balance=</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainUserWindow", "Count of transactions:  ", nullptr));
        PB_ViewHis->setText(QCoreApplication::translate("MainUserWindow", "View", nullptr));
        TransactionBalanceLabel->setText(QCoreApplication::translate("MainUserWindow", "Your Balance = ", nullptr));
        Status->setText(QString());
        label_4->setText(QCoreApplication::translate("MainUserWindow", "Transaction amount: ", nullptr));
        label_7->setText(QCoreApplication::translate("MainUserWindow", "Please enter your signature: ", nullptr));
        PB_Deposit->setText(QCoreApplication::translate("MainUserWindow", "Deposit", nullptr));
        PB_Withdraw->setText(QCoreApplication::translate("MainUserWindow", "Withdraw", nullptr));
        TransferBalanceLabel->setText(QCoreApplication::translate("MainUserWindow", "Your balance= ", nullptr));
        label_3->setText(QCoreApplication::translate("MainUserWindow", "Please enter the account ID: ", nullptr));
        label_5->setText(QCoreApplication::translate("MainUserWindow", "Please enter the amount to transfer: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainUserWindow", "Please enter your signature: ", nullptr));
        PB_Transfer->setText(QCoreApplication::translate("MainUserWindow", "Transfer", nullptr));
        logo2->setText(QString());
        BankLogoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainUserWindow: public Ui_MainUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUSERWINDOW_H
