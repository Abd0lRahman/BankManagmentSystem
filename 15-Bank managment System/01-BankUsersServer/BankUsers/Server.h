#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTextStream>
#include <ServerHandler.h>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void StartServer();

signals:

    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle) override; //called when a client wants to connect
private:
    QTextStream qin;
    QTextStream qout;
    qint32 port;
};
#endif // SERVER_H