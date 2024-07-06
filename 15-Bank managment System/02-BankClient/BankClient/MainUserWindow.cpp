#include "MainUserWindow.h"
#include "ui_MainUserWindow.h"
#include <QValidator>
#include <QMessageBox>
#include "client.h"
MainUserWindow::MainUserWindow(QString username,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainUserWindow)
{
    ui->setupUi(this);
    this->username = username;
    ui->WelcomeLabel->setText("Welcome "+username);
    ui->WelcomeLabel_2->setText("Role: User");
    connect(&Client::getInstance(),&Client::SignalOnDisConnect,this,&MainUserWindow::OnDisConnect);
    connect(&Client::getInstance(),&Client::SignalOnConnect,this,&MainUserWindow::OnConnect);
    connect(&Client::getInstance(),&Client::SignalOnErrorOccurred,this,&MainUserWindow::OnErrorOccurred);
    connect(&Client::getInstance(),&Client::SignalOnStateChange,this,&MainUserWindow::OnStateChange);
    Client::getInstance().ConnectToServer();
    ui->stackedWidget->setCurrentIndex(5);
    ui->LE_TransactionAmount->setValidator(new QIntValidator(0, 1000000, this));
    ui->LE_TransferAmount->setValidator(new QIntValidator(0, 1000000, this));
    ui->LE_TransferAccID->setValidator(new QRegularExpressionValidator(QRegularExpression("^(0|[1-9][0-9]{0,11})$")));
}

MainUserWindow::~MainUserWindow()
{
    delete ui;
}

void MainUserWindow::OnDisConnect()
{
    ui->ServerStateLabel->setText("Server is disconnected");
}

void MainUserWindow::OnErrorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->ServerStateLabel->setText(meta.valueToKey(error));
}
void MainUserWindow::OnStateChange(QAbstractSocket::SocketState state)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->ServerStateLabel->setText(meta.valueToKey(state));
}

void MainUserWindow::OnConnect()
{
    ui->ServerStateLabel->setText("Server is connected");
}

void MainUserWindow::on_PB_GetAccountNumber_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    Client::getInstance().WriteData(QString("GET$AccountID$%1").arg(username));
    QString response = Client::getInstance().readResponse();
    ui->AccNumLabel->setText(QString("Acount number = %1").arg(response));
}


void MainUserWindow::on_PB_ViewAccountBalance_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    Client::getInstance().WriteData(QString("GET$Balance$%1").arg(username));
    this->Balance = Client::getInstance().readResponse().toLong();
    ui->BalanceLabel->setText(QString("Balance = %1").arg(this->Balance));
}



void MainUserWindow::on_PB_MakeTransaction_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    Client::getInstance().WriteData(QString("GET$Balance$%1").arg(username));
    this->Balance = Client::getInstance().readResponse().toLong();
    ui->TransactionBalanceLabel->setText(QString("Your balance= %1").arg(this->Balance));
}



void MainUserWindow::on_PB_Withdraw_clicked()
{
    if(Balance < (ui->LE_TransactionAmount->text().toLong()))
    {
        QMessageBox::warning(this,"Not Done","Your balance is less than the withdraw amount");
    }
    else
    {
        Client::getInstance().WriteData(QString("TRANSACTION$%1$-%2$%3").arg(username,ui->LE_TransactionAmount->text(),ui->LE_TransactionSignature_2->text()));
        QString temp = Client::getInstance().readResponse();
        if(temp == "Error")
            QMessageBox::warning(this,"Not Done","Signature isn't correct");
        else
        {
            this->Balance = temp.toLong();
            ui->TransactionBalanceLabel->setText(QString("Your balance= %1").arg(this->Balance));
            QMessageBox::information(this,"Done","Your withdraw is done successfully");
        }
    }
}


void MainUserWindow::on_PB_Deposit_clicked()
{
    Client::getInstance().WriteData(QString("TRANSACTION$%1$%2$%3").arg(username,ui->LE_TransactionAmount->text(),ui->LE_TransactionSignature_2->text()));
    QString temp = Client::getInstance().readResponse();
    if(temp == "Error")
        QMessageBox::warning(this,"Not Done","Signature isn't correct");
    else
    {
        this->Balance = temp.toLong();
        ui->TransactionBalanceLabel->setText(QString("Your balance= %1").arg(this->Balance));
        QMessageBox::information(this,"Done","Your deposit is done successfully");
    }
}

void MainUserWindow::on_PB_TransferAmount_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    Client::getInstance().WriteData(QString("GET$Balance$%1").arg(username));
    this->Balance = Client::getInstance().readResponse().toLong();
    ui->TransferBalanceLabel->setText(QString("Your balance= %1").arg(this->Balance));
}

void MainUserWindow::on_PB_Transfer_clicked()
{
    if(Balance < (ui->LE_TransferAmount->text().toLong()))
    {
        QMessageBox::warning(this,"Not Done","Your balance is less than the transfered amount");
    }
    else if(ui->LE_TransferAccID->text().size()!=12)
    {
        QMessageBox::warning(this,"Not Done","Account ID must be 12 digits");
    }
    else
    {
        Client::getInstance().WriteData(QString("GETRole$AccountID$%1").arg(ui->LE_TransferAccID->text()));
        if(Client::getInstance().readResponse() == "ADMIN")
            QMessageBox::warning(this,"Not Done","Can't find this Account ID");
        else
        {
            Client::getInstance().WriteData(QString("TRANSFER$%1$%2$%3$%4").arg(username,ui->LE_TransferAccID->text(),ui->LE_TransferAmount->text(),ui->LE_TransferSignature->text()));
            QString temp = Client::getInstance().readResponse();
            if(temp == "Error")
                QMessageBox::warning(this,"Not Done","Signature isn't correct");
            else
            {
                this->Balance = temp.toLong();
                ui->TransferBalanceLabel->setText(QString("Your balance= %1").arg(this->Balance));
                QMessageBox::information(this,"Done","Your transfer is done successfully");
            }
        }
    }
}

QStandardItemModel *MainUserWindow::stringToItemModel(const QString& data)
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

void MainUserWindow::on_PB_ViewTransactionHistory_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    Client::getInstance().WriteData(QString("VIEW$%1").arg(username));
    ui->TV_ViewTransactionHistory->setModel(MainUserWindow::stringToItemModel(Client::getInstance().readResponse()));
}
