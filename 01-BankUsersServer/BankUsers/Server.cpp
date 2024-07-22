#include "Server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent},qin(stdin),qout(stdout)
{

}

void Server::StartServer()
{
    if(this->listen(QHostAddress::Any,port))
    {
        qout<<"Server is listening to port: "<<port<<Qt::endl;
        qout.flush();
    }
    else
    {
        qout<<"Server can't listen to port: "<<port<<Qt::endl;
        qout.flush();
    }
}

void Server::incomingConnection(qintptr handle)
{
    qDebug()<<"Client: "<<handle<<" is connincting";
    ServerHandler* serverhandler = new ServerHandler(handle);
    connect(serverhandler,&QThread::finished,serverhandler,&QThread::deleteLater); //delete the thread for this handler after finishing it
    serverhandler->start(); //start the thread
}
