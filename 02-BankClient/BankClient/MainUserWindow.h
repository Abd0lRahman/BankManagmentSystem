#ifndef MAINUSERWINDOW_H
#define MAINUSERWINDOW_H

#include "ClientGUIAbstract.h"
#include <QDialog>
#include <QMetaEnum>
#include <QStandardItemModel>
#include <QSqlQuery>

namespace Ui {
class MainUserWindow;
}

class MainUserWindow : public ClientGUIAbstract
{
    Q_OBJECT

public:
    explicit MainUserWindow(QString fullname, QString username,QWidget *parent = nullptr);
    ~MainUserWindow();

private slots:
    void on_PB_GetAccountNumber_clicked();

    void on_PB_ViewAccountBalance_clicked();

    void on_PB_ViewTransactionHistory_clicked();

    void on_PB_MakeTransaction_clicked();

    void on_PB_TransferAmount_clicked();

    void on_PB_Withdraw_clicked();

    void on_PB_Deposit_clicked();

    void on_PB_Transfer_clicked();

    void on_PB_ViewHis_clicked();

    void on_PB_LogOut_clicked();

private:
    QStandardItemModel* stringToItemModel(const QString &data);
    Ui::MainUserWindow *ui;
    QString username;
    QString fullname;
    qint64 Balance;
};

#endif // MAINUSERWINDOW_H
