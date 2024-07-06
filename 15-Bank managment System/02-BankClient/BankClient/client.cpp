#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{
    connect(&socket,&QTcpSocket::connected,this,&Client::OnConnect);
    connect(&socket,&QTcpSocket::disconnected,this,&Client::OnDisConnect);
    connect(&socket,&QTcpSocket::errorOccurred,this,&Client::OnErrorOccurred);
    connect(&socket,&QTcpSocket::stateChanged,this,&Client::OnStateChange);
    //Get the local IP
    for(const QHostAddress &address:QNetworkInterface::allAddresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol && address!= QHostAddress(QHostAddress(QHostAddress::LocalHost)))
        {
            ip = address.toString();
        }
    }
}

Client &Client::getInstance()
{
    static Client instance;
    return instance;
}

void Client::ConnectToServer(qint32 port)
{
    if(socket.isOpen())
    {
        if(this->port == port)
        {
            return;
        }
        else
        {
            socket.close();
            this->port =port;
            socket.connectToHost(this->ip,this->port);
        }
    }
    else
    {
        this->port =port;
        socket.connectToHost(this->ip,this->port);
    }
}

void Client::DisconnectFromServer()
{
    if(socket.isOpen())
        socket.close();
}

void Client::WriteData(QString data)
{
    if(socket.isOpen())
    {
        socket.write(data.toUtf8());
    }
}

void Client::OnConnect()
{
    emit SignalOnConnect();
}

void Client::OnDisConnect()
{
    emit SignalOnDisConnect();
}

void Client::OnErrorOccurred(QAbstractSocket::SocketError error)
{
    emit SignalOnErrorOccurred(error);
}

void Client::OnStateChange(QAbstractSocket::SocketState state)
{
    emit SignalOnStateChange(state);
}

QString Client::readResponse()
{
    QByteArray response = "";
    if (socket.waitForReadyRead(1000)) {
        response = socket.readAll();
        qDebug() << "Received response:" << response;
    }
    return response;
}
