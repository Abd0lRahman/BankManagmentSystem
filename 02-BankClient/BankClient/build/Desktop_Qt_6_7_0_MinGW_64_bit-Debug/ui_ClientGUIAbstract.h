/********************************************************************************
** Form generated from reading UI file 'ClientGUIAbstract.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTGUIABSTRACT_H
#define UI_CLIENTGUIABSTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ClientGUIAbstract
{
public:
    QLabel *Connectionlabel;

    void setupUi(QDialog *ClientGUIAbstract)
    {
        if (ClientGUIAbstract->objectName().isEmpty())
            ClientGUIAbstract->setObjectName("ClientGUIAbstract");
        ClientGUIAbstract->resize(850, 560);
        Connectionlabel = new QLabel(ClientGUIAbstract);
        Connectionlabel->setObjectName("Connectionlabel");
        Connectionlabel->setGeometry(QRect(690, 530, 151, 20));
        Connectionlabel->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        retranslateUi(ClientGUIAbstract);

        QMetaObject::connectSlotsByName(ClientGUIAbstract);
    } // setupUi

    void retranslateUi(QDialog *ClientGUIAbstract)
    {
        ClientGUIAbstract->setWindowTitle(QCoreApplication::translate("ClientGUIAbstract", "Dialog", nullptr));
        Connectionlabel->setText(QCoreApplication::translate("ClientGUIAbstract", "Server is connected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientGUIAbstract: public Ui_ClientGUIAbstract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTGUIABSTRACT_H
