#include "ClientGUIAbstract.h"
#include "ui_ClientGUIAbstract.h"
#include <QMessageBox>
ClientGUIAbstract::ClientGUIAbstract(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientGUIAbstract)
{
    ui->setupUi(this);
    connect(&Client::getInstance(),&Client::SignalOnConnect,this,&ClientGUIAbstract::OnConnect);
    connect(&Client::getInstance(),&Client::SignalOnDisConnect,this,&ClientGUIAbstract::OnDisConnect);
    connect(&Client::getInstance(),&Client::SignalOnErrorOccurred,this,&ClientGUIAbstract::OnErrorOccurred);
    connect(&Client::getInstance(),&Client::SignalOnStateChange,this,&ClientGUIAbstract::OnStateChange);
    connect(&Client::getInstance(),&Client::SignalErrorInServerFiles,this,&ClientGUIAbstract::ErrorInServerFiles);
    Client::getInstance().ConnectToServer();
}

ClientGUIAbstract::~ClientGUIAbstract()
{
    delete ui;
}
void ClientGUIAbstract::OnConnect()

{
    ui->Connectionlabel->setText("Server is connected");
    connected = true;
}

void ClientGUIAbstract::OnDisConnect()
{
    QMessageBox::warning(this,"Problem in the Server","The application will close please wait then restart");
    ui->Connectionlabel->setText("Server is disconnected");
    connected = false;
    Client::getInstance().DisconnectFromServer();
    QApplication::quit();
}

void ClientGUIAbstract::OnErrorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->Connectionlabel->setText(meta.valueToKey(error));
    if(error == QAbstractSocket::ConnectionRefusedError)
        QMessageBox::warning(this,"Can't connect to the server","Please contact the specialist");
}

void ClientGUIAbstract::OnStateChange(QAbstractSocket::SocketState state)
{
    QMetaEnum meta = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->Connectionlabel->setText(meta.valueToKey(state));
}
void ClientGUIAbstract::ErrorInServerFiles()
{
    QMessageBox::warning(this,"Problem in the Server","The application will close please wait then restart");
    ui->Connectionlabel->setText("Server is disconnected");
    connected = false;
    Client::getInstance().DisconnectFromServer();
    QApplication::quit();
}
