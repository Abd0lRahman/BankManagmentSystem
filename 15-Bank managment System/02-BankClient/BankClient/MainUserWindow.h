#ifndef MAINUSERWINDOW_H
#define MAINUSERWINDOW_H

#include <QDialog>
#include <QMetaEnum>
#include <QStandardItemModel>
#include <QSqlQuery>
#include "client.h"

namespace Ui {
class MainUserWindow;
}

class MainUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainUserWindow(QString username,QWidget *parent = nullptr);
    ~MainUserWindow();
public slots:
    void OnDisConnect();
    void OnErrorOccurred(QAbstractSocket::SocketError error);
    void OnStateChange(QAbstractSocket::SocketState state);
    void OnConnect();
private slots:
    void on_PB_GetAccountNumber_clicked();

    void on_PB_ViewAccountBalance_clicked();

    void on_PB_ViewTransactionHistory_clicked();

    void on_PB_MakeTransaction_clicked();

    void on_PB_TransferAmount_clicked();

    void on_PB_Withdraw_clicked();

    void on_PB_Deposit_clicked();

    void on_PB_Transfer_clicked();

private:
    QStandardItemModel* stringToItemModel(const QString &data);
    Ui::MainUserWindow *ui;
    QString username;
    qint64 Balance;
};

#endif // MAINUSERWINDOW_H
