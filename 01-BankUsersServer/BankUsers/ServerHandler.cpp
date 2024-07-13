#include "ServerHandler.h"
#include "Encrypter.h"
#include <QCryptographicHash>
ServerHandler::ServerHandler(qint32 id, QObject *parent)
    : QThread{parent}
{
    this->id = id;
    connect(this,&ServerHandler::ExecCommand,&DBExecutor,&DataBaseExecutor::ExecuteCommand);
}

void ServerHandler::run()
{
    qDebug()<<"Client "<<id<<" is running on Thread: "<<QThread::currentThreadId();
    socket = new QTcpSocket;
    socket->setSocketDescriptor(id);

    connect(socket,&QTcpSocket::readyRead,this,&ServerHandler::ReceiveMessage,Qt::DirectConnection);
    connect(socket,&QTcpSocket::disconnected,this,&ServerHandler::ONDisconnect,Qt::DirectConnection);

    exec(); //start the event loop To run the thread
}

void ServerHandler::SendMessage(QString message)
{
    if(socket->isOpen())
    {
        socket->write(message.toUtf8());
        Encrypter::Encrypt(message);
    }
    else
    {
        qDebug()<<"Can't send a message no client is connected";
    }
}

void ServerHandler::ReceiveMessage()
{
    QString DataRecieved = QString(socket->readAll());
    Encrypter::Decrypt(DataRecieved);
    qDebug()<<"Recived data: "<<DataRecieved;
    DataBaseExecutor DBExecutor;
    QString Result = DBExecutor.ExecuteCommand(DataRecieved);
    Encrypter::Encrypt(Result);
    socket->write(Result.toUtf8());
}

void ServerHandler::ONDisconnect()
{
    if(socket->isOpen())
    {
        socket->close();
        qDebug()<<"Client "<< id <<" has disconnected";
    }
}
