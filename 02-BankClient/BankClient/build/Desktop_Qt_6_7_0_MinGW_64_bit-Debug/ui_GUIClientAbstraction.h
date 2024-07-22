/********************************************************************************
** Form generated from reading UI file 'GUIClientAbstraction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICLIENTABSTRACTION_H
#define UI_GUICLIENTABSTRACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_GUIClientAbstraction
{
public:
    QLabel *Connectionlabel;

    void setupUi(QDialog *GUIClientAbstraction)
    {
        if (GUIClientAbstraction->objectName().isEmpty())
            GUIClientAbstraction->setObjectName("GUIClientAbstraction");
        GUIClientAbstraction->resize(400, 300);
        Connectionlabel = new QLabel(GUIClientAbstraction);
        Connectionlabel->setObjectName("Connectionlabel");
        Connectionlabel->setGeometry(QRect(160, 50, 63, 20));

        retranslateUi(GUIClientAbstraction);

        QMetaObject::connectSlotsByName(GUIClientAbstraction);
    } // setupUi

    void retranslateUi(QDialog *GUIClientAbstraction)
    {
        GUIClientAbstraction->setWindowTitle(QCoreApplication::translate("GUIClientAbstraction", "Dialog", nullptr));
        Connectionlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GUIClientAbstraction: public Ui_GUIClientAbstraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICLIENTABSTRACTION_H
