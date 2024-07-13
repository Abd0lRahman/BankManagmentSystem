#ifndef MAINADMINWIN_H
#define MAINADMINWIN_H

#include <QDialog>
#include "client.h"
#include "qstandarditemmodel.h"
#include <QMetaEnum>
#include <QQmlApplicationEngine>

namespace Ui {
class MainAdminWin;
}

class MainAdminWin : public QDialog
{
    Q_OBJECT

public:
    explicit MainAdminWin(QString fullname,QString username,QWidget *parent = nullptr);
    ~MainAdminWin();
public slots:
    void OnConnect();
    void OnDisConnect();
    void OnErrorOccurred(QAbstractSocket::SocketError error);
    void OnStateChange(QAbstractSocket::SocketState state);
    void emailVerfication(QString verficationcode);

private slots:
    void on_PB_GetAccountNumber_clicked();

    void on_PB_ViewAccountBalance_clicked();

    void on_PB_ViewTransactionHistory_clicked();

    void on_PB_ViewBankDataBase_clicked();

    void on_PB_CreateNewUser_clicked();

    void on_PB_DeleteUser_clicked();

    void on_PB_UpdateUser_clicked();

    void on_PB_GetAccounNumber_clicked();

    void on_PB_GetAccounBalance_clicked();

    void on_PB_View_clicked();

    void on_PB_DeleteUserSignature_clicked();

    void on_PB_Update_clicked();

    void on_PB_Create_clicked();

private:
    Ui::MainAdminWin *ui;
    QString username;
    QString fullname;
    QStandardItemModel *stringToItemModel(const QString& data);
    QString emailverficationcode;
    QQmlApplicationEngine engine;
};

#endif // MAINADMINWIN_H
