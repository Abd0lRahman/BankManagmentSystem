/********************************************************************************
** Form generated from reading UI file 'MainWin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *WelcomeLabel;
    QLabel *WelcomeLabel_2;

    void setupUi(QDialog *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName("MainWin");
        MainWin->resize(879, 806);
        pushButton = new QPushButton(MainWin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 130, 83, 29));
        pushButton_2 = new QPushButton(MainWin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 110, 83, 29));
        pushButton_3 = new QPushButton(MainWin);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 160, 83, 29));
        pushButton_4 = new QPushButton(MainWin);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(540, 150, 83, 29));
        pushButton_5 = new QPushButton(MainWin);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(640, 140, 83, 29));
        pushButton_6 = new QPushButton(MainWin);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(400, 160, 83, 29));
        widget = new QWidget(MainWin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 881, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        WelcomeLabel = new QLabel(widget);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(WelcomeLabel);

        WelcomeLabel_2 = new QLabel(widget);
        WelcomeLabel_2->setObjectName("WelcomeLabel_2");
        WelcomeLabel_2->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";\n"
"color: rgb(255, 170, 255);"));
        WelcomeLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(WelcomeLabel_2);


        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QDialog *MainWin)
    {
        MainWin->setWindowTitle(QCoreApplication::translate("MainWin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWin", "PushButton", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#0000ff;\">Welcome </span></p></body></html>", nullptr));
        WelcomeLabel_2->setText(QCoreApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#0000ff;\">Account ID: </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
