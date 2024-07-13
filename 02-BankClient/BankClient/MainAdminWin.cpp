#include "MainAdminWin.h"
#include "ui_MainAdminWin.h"
#include <QMessageBox>
#include <QStandardItemModel>
#include <QDateTime>
#include <QCryptographicHash>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>


MainAdminWin::MainAdminWin(QString fullname, QString username, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainAdminWin)
{
    ui->setupUi(this);
    this->username = username;
    ui->WelcomeLabel->setText("Welcome "+fullname);
    ui->WelcomeLabel_2->setText("Role: Admin");
    connect(&Client::getInstance(),&Client::SignalOnDisConnect,this,&MainAdminWin::OnDisConnect);
    connect(&Client::getInstance(),&Client::SignalOnErrorOccurred,this,&MainAdminWin::OnErrorOccurred);
    connect(&Client::getInstance(),&Client::SignalOnStateChange,this,&MainAdminWin::OnStateChange);
    connect(&Client::getInstance(),&Client::SignalOnConnect,this,&MainAdminWin::OnConnect);
    Client::getInstance().ConnectToServer();
    ui->stackedWidget->setCurrentIndex(0);
    ui->LE_DeleteUserID->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_UpdateUserID->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_GetAccountBalance->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_ViewTransactionHistory->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_CreateUserID->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_CreateFullName->setValidator(new QRegularExpressionValidator(QRegularExpression("^[A-Za-z\\s]+$")));
    ui->LE_CreateBalance->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
    ui->LE_CreateEmail->setValidator(new QRegularExpressionValidator(QRegularExpression("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$")));
    ui->LE_count->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
}

MainAdminWin::~MainAdminWin()
{
    delete ui;
}

void MainAdminWin::OnConnect()
{
    ui->ServerStateLabel->setText("Server is connected");
}

void MainAdminWin::OnDisConnect()
{
    ui->ServerStateLabel->setText("Server is disconnected");
}

void MainAdminWin::OnStateChange(QAbstractSocket::SocketState state)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->ServerStateLabel->setText(meta.valueToKey(state));
}

void MainAdminWin::OnErrorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->ServerStateLabel->setText(meta.valueToKey(error));
}

void MainAdminWin::on_PB_GetAccountNumber_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->AccountNumberLabel->clear();
}


void MainAdminWin::on_PB_ViewAccountBalance_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->BalanceLabel->clear();
}


void MainAdminWin::on_PB_ViewTransactionHistory_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->TransactionHisLabel->clear();
    ui->LE_count->clear();
}


void MainAdminWin::on_PB_ViewBankDataBase_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    Client::getInstance().WriteData(QString("View Data Base$%1").arg(username));
    QString resonse = Client::getInstance().readResponse();
    if(resonse == "$")
    {
        ui->TV_ViewBankDataBase->deleteLater();
    }
    else
        ui->TV_ViewBankDataBase->setModel(MainAdminWin::stringToItemModel(resonse));
}


void MainAdminWin::on_PB_CreateNewUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->CreateLabel->clear();
    ui->LE_CreateBalance->clear();
    ui->LE_CreateEmail->clear();
    ui->LE_CreateFullName->clear();
    ui->LE_CreatePassword->clear();
    ui->LE_CreateSignature->clear();
    ui->LE_CreateUserID->clear();
    ui->LE_CreateUserName->clear();
}


void MainAdminWin::on_PB_DeleteUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->DeleteUserLabel->setText(QString(""));
    ui->DeleteUserLabel->clear();
    ui->LE_DeleteUserID->clear();
    ui->LE_DeleteUserSignature->clear();

}


void MainAdminWin::on_PB_UpdateUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->UpdateLabel->setText(QString(""));
    ui->LE_UpdateNewValue->setEchoMode(QLineEdit::Normal);
    ui->UpdateLabel->clear();
    ui->LE_UpdateNewValue->clear();
    ui->LE_UpdateSignature->clear();
    ui->LE_UpdateUserID->clear();
}


void MainAdminWin::on_PB_GetAccounNumber_clicked()
{
    Client::getInstance().WriteData(QString("Get AccID$%1").arg(ui->LE_GetAccountNumber->text()));
    QString response = Client::getInstance().readResponse();
    if(response == "$$$")
    {
        QMessageBox::warning(this,"Error","Username isn't correct");
        ui->AccountNumberLabel->clear();
    }
    else if(response == "$")
            ui->AccountNumberLabel->clear();
    else
        ui->AccountNumberLabel->setText(QString("Acount number = %1").arg(response));
}


void MainAdminWin::on_PB_GetAccounBalance_clicked()
{
    if(ui->LE_GetAccountBalance->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    Client::getInstance().WriteData(QString("Get Balance$%1").arg(ui->LE_GetAccountBalance->text()));
    QString response = Client::getInstance().readResponse();
    if(response == "$$")
        QMessageBox::warning(this,"Error","AccountID isn't correct");
    else if(response == "$")
        ui->BalanceLabel->clear();
    else
        ui->BalanceLabel->setText(QString("Acount balance = %1").arg(response));
}

QStandardItemModel *MainAdminWin::stringToItemModel(const QString& data)
{
    QStandardItemModel* model = new QStandardItemModel();
    QStringList rows = data.split('\n', Qt::SkipEmptyParts);

    for (int row = 0; row < rows.size(); ++row) {
        QStringList columns = rows[row].split(", ");
        QList<QStandardItem*> items;
        for (const QString& column : columns) {
            items.append(new QStandardItem(column));
        }
        model->appendRow(items);
    }

    return model;
}

void MainAdminWin::on_PB_View_clicked()
{
    if(ui->LE_count->text() == "" || ui->LE_count->text() == "0")
        QMessageBox::warning(this,"Not Done","Transaction count can't be empty");
    else if(ui->LE_ViewTransactionHistory->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    else
    {
        Client::getInstance().WriteData(QString("Admin View Transaction History$%1$%2$%3").arg(ui->LE_ViewTransactionHistory->text(),ui->LE_count->text(),username));
        QString response = Client::getInstance().readResponse();
        if(response == "$$")
            QMessageBox::warning(this,"Error","AccountID isn't correct");
        else if(response == "$")
        {
            ui->TV_ViewTransactionHistory->deleteLater();
        }
        else
        {
            ui->TV_ViewTransactionHistory->setModel(MainAdminWin::stringToItemModel(response));
            ui->TV_ViewTransactionHistory->hideColumn(0);
            ui->LE_count->clear();
        }
    }
}


void MainAdminWin::on_PB_DeleteUserSignature_clicked()
{
    if(ui->LE_DeleteUserID->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    Client::getInstance().WriteData(QString("DELETE$%1$%2").arg(ui->LE_DeleteUserID->text(),QCryptographicHash::hash(ui->LE_DeleteUserSignature->text().toLocal8Bit(),QCryptographicHash::Sha256).toHex()));
    QString response = Client::getInstance().readResponse();
    if(response == "$$")
    {
        ui->DeleteUserLabel->clear();
        QMessageBox::warning(this,"Error","AccountID isn't correct");
    }
    else if(response == "$$$$$")
    {
        ui->DeleteUserLabel->clear();
        QMessageBox::warning(this,"Error","Signature isn't correct");
    }
    else if(response == "$")
        ui->DeleteUserLabel->clear();
    else
        ui->DeleteUserLabel->setText(QString("Done").arg(response));
}


void MainAdminWin::on_PB_Update_clicked()
{
    if(ui->LE_UpdateUserID->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    else if(ui->LE_UpdateSignature->text().isEmpty())
    {
        QMessageBox::warning(this,"Not Done","Signature is empty");
        return;
    }
    else if(ui->LE_UpdateNewValue->text().isEmpty())
    {
        QMessageBox::warning(this,"Not Done","new value is empty");
        return;
    }
    else if(ui->LE_UpdateUserID->text().contains("$") || ui->LE_UpdateUserID->text().contains(" ") || ui->LE_UpdateUserID->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
        return;
    }
    else if(ui->LE_UpdateSignature->text().contains("$") || ui->LE_UpdateSignature->text().contains(" ") || ui->LE_UpdateSignature->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
        return;
    }
    //UPDATE$AccID$AccSignature$ColumnNAME$NEWVALUE
    else
    {
        Client::getInstance().WriteData(QString("UPDATE User data$%1$%2$%3$%4").arg(ui->LE_UpdateUserID->text(),QCryptographicHash::hash(ui->LE_UpdateSignature->text().toLocal8Bit(),QCryptographicHash::Sha256).toHex(),ui->UpdateComboBox->currentText(),ui->LE_UpdateNewValue->text()));
        QString response = Client::getInstance().readResponse();
        if(response == "$$")
        {
            QMessageBox::warning(this,"Wrong","Account ID is wrong");
        }
        else if(response == "$$$$$")
        {
            QMessageBox::warning(this,"Wrong","signature is wrong");
        }
        else if(response == "$$$$$$$")
        {
            QMessageBox::warning(this,"Wrong","New AccountID is already exist");
        }
        else if(response == "$$$$$$$$$")
        {
            QMessageBox::warning(this,"Wrong","New email is already in use");
        }
        else if(response == "$$$$$$$$")
        {
            QMessageBox::warning(this,"Wrong","New username is already exist");
        }
        else
        {
            ui->UpdateLabel->setText(QString("%1").arg(response));
        }
    }
}


void MainAdminWin::on_PB_Create_clicked()
{
    if(ui->LE_CreateFullName->text().isEmpty())
    {
        QMessageBox::warning(this,"Name is empty","Please enter the name");
        return;
    }
    else if(ui->LE_CreateFullName->text().contains("$") ||  ui->LE_CreateFullName->text().contains("\\"))
    {
        QMessageBox::warning(this,"Email is empty","Name can't have '$'  or '\\'");
        return;
    }
    else if(ui->LE_CreateUserName->text().isEmpty())
    {
        QMessageBox::warning(this,"User name is empty","Please enter the user name");
        return;
    }
    else if(ui->LE_CreateUserName->text().contains("$") || ui->LE_CreateUserName->text().contains(" ") || ui->LE_CreateUserName->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong user name","User name can't have '$'  or '\\' or spaces");
        return;
    }
    else if(ui->LE_CreateUserID->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    else if(ui->LE_CreateBalance->text().isEmpty())
    {
        QMessageBox::warning(this,"Balance is empty","Please enter the balance");
        return;
    }
    else if(ui->LE_CreateEmail->text().isEmpty())
    {
        QMessageBox::warning(this,"Email is empty","Please enter the Email");
        return;
    }
    else if(ui->LE_CreateSignature->text().isEmpty())
    {
        QMessageBox::warning(this,"Signature is empty","Please enter the Signature");
        return;
    }
    else if(ui->LE_CreateEmail->text().contains("$") || ui->LE_CreateEmail->text().contains(" ") || ui->LE_CreateEmail->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong Email","Email can't have '$'  or '\\' or spaces");
        return;
    }
    else if(ui->LE_CreateSignature->text().contains("$") || ui->LE_CreateSignature->text().contains(" ") || ui->LE_CreateSignature->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong Signature","Signature can't have '$' or '\\' or spaces");
        return;
    }
    else if(ui->LE_CreatePassword->text().isEmpty())
    {
        QMessageBox::warning(this,"Password is empty","Please enter the Password");
        return;
    }
    else if(ui->LE_CreatePassword->text().contains("$") || ui->LE_CreatePassword->text().contains(" ") || ui->LE_CreatePassword->text().contains("\\"))
    {
        QMessageBox::warning(this,"Wrong password","password can't have '$' or '\\' or spaces");
        return;
    }
    else
    {
        Client::getInstance().WriteData(QString("Check User data$%1$USER$%2$%3$%4$%5$%6$%7$%8$%9").arg(ui->LE_CreateUserID->text(),ui->LE_CreateFullName->text(),ui->LE_CreateUserName->text(),ui->LE_CreatePassword->text(),ui->LE_CreateBalance->text(),QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"),ui->LE_CreateEmail->text(),QCryptographicHash::hash(ui->LE_CreateSignature->text().toLocal8Bit(),QCryptographicHash::Sha256).toHex(),ui->comboBox->currentText()));
        QString response = Client::getInstance().readResponse();
        if(response =="$$$$$$$")
            QMessageBox::warning(this,"Error in create USER","The Account ID is already taken try different one");
        else if(response =="$$$$$$$$")
            QMessageBox::warning(this,"Error in create USER","The user name is already taken try different one");
        else if(response =="$$$$$$$$$")
            QMessageBox::warning(this,"Error in create USER","The Email is already taken try different one");
        else if(response == "$")
            ui->CreateLabel->clear();
        else
        {
            this->emailverficationcode = response;
            engine.load(QUrl(QString("qrc:/EmailVerification.qml")));
            if (engine.rootObjects().isEmpty())
            {
                qWarning() << "Failed to load QML file.";
            }
            QQmlContext* root = engine.rootContext();
            root->setContextProperty("MainAdminWin",this);
        }
    }
}

void MainAdminWin::emailVerfication(QString verficationcode)
{
    if(this->emailverficationcode == verficationcode)
    {
        ui->CreateLabel->setText("Done");
        Client::getInstance().WriteData(QString("CREATE$%1$USER$%2$%3$%4$%5$%6$%7$%8$%9").arg(ui->LE_CreateUserID->text(),ui->LE_CreateFullName->text(),ui->LE_CreateUserName->text(),ui->LE_CreatePassword->text(),ui->LE_CreateBalance->text(),QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"),ui->LE_CreateEmail->text(),QCryptographicHash::hash(ui->LE_CreateSignature->text().toLocal8Bit(),QCryptographicHash::Sha256).toHex(),ui->comboBox->currentText()));
        QString response = Client::getInstance().readResponse();
        return;
    }
    else
    {
        QMessageBox *msgBox = new QMessageBox;
        msgBox->setWindowTitle("Error in create USER");
        msgBox->setText("The verfication code is wrong");
        msgBox->setWindowFlags(Qt::WindowStaysOnTopHint);
        msgBox->raise();
        msgBox->show();
        return;
    }
}
