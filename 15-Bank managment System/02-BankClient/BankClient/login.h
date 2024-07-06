#ifndef LOGIN_H
#define LOGIN_H

#include "MainAdminWin.h"
#include "client.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QMetaEnum>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
private slots:
    void on_PB_LogIn_clicked();

    void on_PB_SignUp_clicked();

    void on_PB_ForgetPassword_clicked();
    void on_PB_SigNUP_clicked();

public slots:
    void OnConnect();
    void OnDisConnect();
    void OnErrorOccurred(QAbstractSocket::SocketError error);
    void OnStateChange(QAbstractSocket::SocketState state);

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
