#include "login.h"
#include "MainAdminWin.h"
#include "MainUserWindow.h"
#include "qmetaobject.h"
#include "ui_login.h"
#include "client.h"
#include <QValidator>
#include <QPixmap>
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    connect(&Client::getInstance(),&Client::SignalOnConnect,this,&Login::OnConnect);
    connect(&Client::getInstance(),&Client::SignalOnDisConnect,this,&Login::OnDisConnect);
    connect(&Client::getInstance(),&Client::SignalOnErrorOccurred,this,&Login::OnErrorOccurred);
    connect(&Client::getInstance(),&Client::SignalOnStateChange,this,&Login::OnStateChange);
    connect(&Client::getInstance(),&Client::SignalErrorInServerFiles,this,&Login::ErrorInServerFiles);
    ui->LE_SignUpAccID->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    Client::getInstance().ConnectToServer();
    ui->stackedWidget->setCurrentIndex(0);
    ui->LE_Password->setEchoMode(QLineEdit::Password);
    ui->LE_SignUpPassword->setEchoMode(QLineEdit::Password);
    ui->LE_ForgetPasswordMIP->setEchoMode(QLineEdit::Password);
    ui->LE_SignUpMIP->setEchoMode(QLineEdit::Password);
    ui->BankLogoLabel->setPixmap(QPixmap("BankLogo.PNG").scaled(350,200,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}
void Login::OnConnect()

{
    ui->Connectionlabel->setText("Server is connected");
}

void Login::OnDisConnect()
{
    ui->Connectionlabel->setText("Server is disconnected");
}

void Login::OnErrorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->Connectionlabel->setText(meta.valueToKey(error));
}

void Login::OnStateChange(QAbstractSocket::SocketState state)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->Connectionlabel->setText(meta.valueToKey(state));
}

void Login::on_PB_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->PasswordLabel->clear();
    ui->LE_UserName->clear();
    ui->LE_Password->clear();
    ui->LE_SignUpName->clear();
    ui->LE_SignUpAccID->clear();
    ui->LE_SignUpMIP->clear();
    ui->LE_ForgetPasswordMIP->clear();
    ui->LE_SignUpUserName->clear();
    ui->LE_SignUpPassword->clear();
}
void Login::on_PB_Back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->PasswordLabel->clear();
    ui->LE_UserName->clear();
    ui->LE_Password->clear();
    ui->LE_SignUpName->clear();
    ui->LE_SignUpAccID->clear();
    ui->LE_SignUpMIP->clear();
    ui->LE_ForgetPasswordMIP->clear();
    ui->LE_SignUpUserName->clear();
    ui->LE_SignUpPassword->clear();
}
void Login::on_PB_SignUp_clicked()
{
    ui->LE_SignUpMIP->clear();
    ui->LE_SignUpName->clear();
    ui->LE_SignUpAccID->clear();
    ui->LE_SignUpUserName->clear();
    ui->LE_SignUpPassword->clear();
    ui->stackedWidget->setCurrentIndex(1);
}

void Login::on_PB_ForgetPassword_clicked()
{
    ui->LE_ForgetPasswordMIP->clear();
    ui->LE_ForgetPasswordUserName->clear();
    ui->PasswordLabel->clear();
    ui->stackedWidget->setCurrentIndex(2);
}

void Login::on_PB_LogIn_clicked()
{
    if(ui->LE_UserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else
    {
        if(ui->LE_UserName->text().contains("$") || ui->LE_UserName->text().contains(" ")  || ui->LE_UserName->text().contains("\\"))
        {
            QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
            return;
        }
        if(ui->LE_Password->text().isEmpty())
        {
            QMessageBox::warning(this,"Password is empty","Please enter the Password");
            return;
        }
        else
        {
            if(ui->LE_Password->text().contains("$") || ui->LE_Password->text().contains(" ") || ui->LE_Password->text().contains(" "))
            {
                QMessageBox::warning(this,"Wrong password","password can't have '$'  or '\\ or spaces");
                return;
            }
            Client::getInstance().WriteData(QString("LOGIN$%1$%2").arg(ui->LE_UserName->text(),ui->LE_Password->text()));
            QString response = Client::getInstance().readResponse();
            if(response =="$")
            {
                ui->LE_Password->clear();
                ui->LE_UserName->clear();
            }
            else if(response =="$$$$")
            {
                QMessageBox::warning(this,"Error in signing in","password isn't correct");
            }
            else if(response =="$$$")
            {
                QMessageBox::warning(this,"Error in signing in","User name isn't correct");
            }
            else
            {
                hide();
                if(response.split("$")[0] == "ADMIN")
                {
                    MainAdminWin SecoundWindow(response.split("$")[1],response.split("$")[2]);
                    SecoundWindow.setModal(true);
                    SecoundWindow.exec();
                }
                else if(response.split("$")[0] == "USER")
                {
                    MainUserWindow SecoundWindow(response.split("$")[1],response.split("$")[2]);
                    SecoundWindow.setModal(true);
                    SecoundWindow.exec();
                }
                else
                {
                    QMessageBox::warning(this,"Error in signing in","Can't define the role");
                }
            }
        }
    }
}

void Login::on_PB_SigNUP_clicked()
{
    if(ui->LE_SignUpUserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else
    {
        if(ui->LE_SignUpUserName->text().contains("$") || ui->LE_SignUpUserName->text().contains(" ") || ui->LE_SignUpUserName->text().contains("\\"))
        {
            QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
            return;
        }
        if(ui->LE_SignUpPassword->text().isEmpty())
        {
            QMessageBox::warning(this,"Password is empty","Please enter the Password");
            return;
        }
        else
        {
            if(ui->LE_SignUpPassword->text().contains("$") || ui->LE_SignUpPassword->text().contains(" ")  || ui->LE_SignUpPassword->text().contains("\\"))
            {
                QMessageBox::warning(this,"Wrong password","password can't have '$'  or '\\' or spaces");
                return;
            }
        }
    }
    if(ui->LE_SignUpAccID->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
    }
    else
    {
        Client::getInstance().WriteData(QString("SIGNUP$%1$%2$%3$%4$%5").arg(ui->LE_SignUpMIP->text(),ui->LE_SignUpUserName->text(),ui->LE_SignUpPassword->text(),ui->LE_SignUpName->text(),ui->LE_SignUpAccID->text()));
        QString response = Client::getInstance().readResponse();
        if(response =="$$$$$$$")
            QMessageBox::warning(this,"Error in signing up","The Account ID is used");
        else if(response =="$$$$$$")
            QMessageBox::warning(this,"Error in signing up","The MIP isn't correct");
        else if(response =="$$$$$$$$")
            QMessageBox::warning(this,"Error in signing up","The user name is used");
        else if(response.split("$")[0]!="")
        {
            hide();
            MainAdminWin SecoundWindow(response.split("$")[0],response.split("$")[1]);
            SecoundWindow.setModal(true);
            SecoundWindow.exec();
        }
    }
}
void Login::on_pushButton_clicked()
{
    if(ui->LE_ForgetPasswordUserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else if(ui->LE_ForgetPasswordUserName->text().contains("$") || ui->LE_ForgetPasswordUserName->text().contains(" ") || ui->LE_ForgetPasswordUserName->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
        return;
    }
    else
    {
        Client::getInstance().WriteData(QString("Get Password$%1$%2").arg(ui->LE_ForgetPasswordUserName->text(),ui->LE_ForgetPasswordMIP->text()));
        QString response = Client::getInstance().readResponse();
        if(response =="$$$")
        {
            QMessageBox::warning(this,"Error in retrieve your password","The user name isn't correct");
            ui->stackedWidget->setCurrentIndex(0);
        }
        else if(response =="$$$$$$")
        {
            QMessageBox::warning(this,"Error in retrieve your password","The MIP isn't correct");
            ui->stackedWidget->setCurrentIndex(0);
        }
        else if(response =="$")
        {
            ui->stackedWidget->setCurrentIndex(0);
        }
        else
            ui->PasswordLabel->setText(QString("your password is %1").arg(response));
    }
}
