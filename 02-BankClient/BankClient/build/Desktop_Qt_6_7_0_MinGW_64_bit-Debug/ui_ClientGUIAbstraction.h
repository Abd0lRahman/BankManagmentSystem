/********************************************************************************
** Form generated from reading UI file 'ClientGUIAbstraction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTGUIABSTRACTION_H
#define UI_CLIENTGUIABSTRACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientGUIAbstraction
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientGUIAbstraction)
    {
        if (ClientGUIAbstraction->objectName().isEmpty())
            ClientGUIAbstraction->setObjectName("ClientGUIAbstraction");
        ClientGUIAbstraction->resize(800, 600);
        centralwidget = new QWidget(ClientGUIAbstraction);
        centralwidget->setObjectName("centralwidget");
        ClientGUIAbstraction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientGUIAbstraction);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ClientGUIAbstraction->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientGUIAbstraction);
        statusbar->setObjectName("statusbar");
        ClientGUIAbstraction->setStatusBar(statusbar);

        retranslateUi(ClientGUIAbstraction);

        QMetaObject::connectSlotsByName(ClientGUIAbstraction);
    } // setupUi

    void retranslateUi(QMainWindow *ClientGUIAbstraction)
    {
        ClientGUIAbstraction->setWindowTitle(QCoreApplication::translate("ClientGUIAbstraction", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientGUIAbstraction: public Ui_ClientGUIAbstraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTGUIABSTRACTION_H
