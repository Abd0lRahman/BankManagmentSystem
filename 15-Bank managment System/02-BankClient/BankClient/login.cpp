#include "login.h"
#include "MainAdminWin.h"
#include "MainUserWindow.h"
#include "qmetaobject.h"
#include "ui_login.h"
#include "client.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    connect(&Client::getInstance(),&Client::SignalOnConnect,this,&Login::OnConnect);
    connect(&Client::getInstance(),&Client::SignalOnDisConnect,this,&Login::OnDisConnect);
    connect(&Client::getInstance(),&Client::SignalOnErrorOccurred,this,&Login::OnErrorOccurred);
    connect(&Client::getInstance(),&Client::SignalOnStateChange,this,&Login::OnStateChange);
    Client::getInstance().ConnectToServer();
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

void Login::on_PB_LogIn_clicked()
{
    if(ui->LE_UserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else
    {
        if(ui->LE_Password->text().isEmpty())
        {
            QMessageBox::warning(this,"Password is empty","Please enter the Password");
            return;
        }
        else
        {
            Client::getInstance().WriteData(QString("LOGIN$%1$%2").arg(ui->LE_UserName->text(),ui->LE_Password->text()));
            QString response = Client::getInstance().readResponse();
            if(response =="$")
            {
                QMessageBox::warning(this,"Error in signing in","User name and password isn't correct");
            }
            else
            {
                hide();
                if(response.split("$")[0] == "ADMIN")
                {
                    MainAdminWin SecoundWindow(response.split("$")[1]);
                    SecoundWindow.setModal(true);
                    SecoundWindow.exec();
                }
                else if(response.split("$")[0] == "USER")
                {
                    MainUserWindow SecoundWindow(response.split("$")[1]);
                    SecoundWindow.setModal(true);
                    SecoundWindow.exec();
                }
            }
        }
    }
}


void Login::on_PB_SignUp_clicked()
{
    if(ui->LE_UserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else
    {
        if(ui->LE_Password->text().isEmpty())
        {
            QMessageBox::warning(this,"Password is empty","Please enter the Password");
            return;
        }
        else
        {
            ui->stackedWidget->setCurrentIndex(1);
        }
    }
}


void Login::on_PB_ForgetPassword_clicked()
{
    if(ui->LE_UserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else
    {
        Client::getInstance().WriteData(QString("FOTGETPASSWORD$%1").arg(ui->LE_UserName->text()));
        QMessageBox::warning(this,"Error in retrieve your password","The MIP isn't correct");

    }
}

void Login::on_PB_SigNUP_clicked()
{
    // Client::getInstance().WriteData(QString("SIGNUP$%1$%2$3$%4$%5").arg(ui->LE_SignUpMIP->text(),ui->LE_UserName->text(),ui->LE_Password->text(),ui->LE_SignUpName,ui->));
    // QString response = Client::getInstance().readResponse();
    // if(response =="$")
    //     QMessageBox::warning(this,"Error in signing up","The MIP isn't correct");
}

