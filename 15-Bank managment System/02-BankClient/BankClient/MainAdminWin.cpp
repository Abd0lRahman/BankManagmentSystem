#include "MainAdminWin.h"
#include "ui_MainAdminWin.h"
#include <QMessageBox>
#include <QStandardItemModel>
MainAdminWin::MainAdminWin(QString username, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainAdminWin)
{
    ui->setupUi(this);
    ui->WelcomeLabel->setText("Welcome "+username);
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
}


void MainAdminWin::on_PB_ViewAccountBalance_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainAdminWin::on_PB_ViewTransactionHistory_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainAdminWin::on_PB_ViewBankDataBase_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    Client::getInstance().WriteData(QString("VIEWUSERS"));
    ui->TV_ViewBankDataBase->setModel(MainAdminWin::stringToItemModel(Client::getInstance().readResponse()));
}


void MainAdminWin::on_PB_CreateNewUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainAdminWin::on_PB_DeleteUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->DeleteUserLabel->setText(QString(""));
}


void MainAdminWin::on_PB_UpdateUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->UpdateLabel->setText(QString(""));
}


void MainAdminWin::on_PB_GetAccounNumber_clicked()
{
    Client::getInstance().WriteData(QString("GET$AccountID$%1").arg(ui->LE_GetAccountNumber->text()));
    QString response = Client::getInstance().readResponse();
    ui->AccountNumberLabel->setText(QString("Acount number = %1").arg(response));
}


void MainAdminWin::on_PB_GetAccounBalance_clicked()
{
    if(ui->LE_GetAccountBalance->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    Client::getInstance().WriteData(QString("AGET$Balance$%1").arg(ui->LE_GetAccountBalance->text()));
    QString response = Client::getInstance().readResponse();
    ui->BalanceLabel->setText(QString("Acount number = %1").arg(response));
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
    if(ui->LE_ViewTransactionHistory->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    Client::getInstance().WriteData(QString("AVIEW$%1").arg(ui->LE_ViewTransactionHistory->text()));
    ui->TV_ViewTransactionHistory->setModel(MainAdminWin::stringToItemModel(Client::getInstance().readResponse()));
}


void MainAdminWin::on_PB_DeleteUserSignature_clicked()
{
    if(ui->LE_ViewTransactionHistory->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
        return;
    }
    Client::getInstance().WriteData(QString("DELETE$%1$%2").arg(ui->LE_DeleteUserID->text(),ui->LE_DeleteUserSignature->text()));
    QString response = Client::getInstance().readResponse();
    ui->DeleteUserLabel->setText(QString("Done").arg(response));
}

