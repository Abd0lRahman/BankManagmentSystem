#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include <QMessageBox>
#include "ClientGUIAbstract.h"

namespace Ui {
class LoginPage;
}

class LoginPage : public ClientGUIAbstract
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();
private slots:
    void on_PB_LogIn_clicked();

    void on_PB_SignUp_clicked();

    void on_PB_ForgetPassword_clicked();

    void on_PB_SigNUP_clicked();

    void on_PB_Back_clicked();

    void on_PB_Back_2_clicked();

    void on_PB_ForgetPass_clicked();

private:
    Ui::LoginPage *ui;
};
#endif // LOGINPAGE_H
