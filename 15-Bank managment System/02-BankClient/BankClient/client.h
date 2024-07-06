#ifndef CLIENT_H
#define CLIENT_H

#include "qabstractitemmodel.h"
#include <QObject>
#include <QTcpSocket>
#include <QNetworkInterface>

class Client : public QObject
{

private:
    QString ip;
    qint32 port;
    QTcpSocket socket;
    Q_OBJECT
    explicit Client(QObject *parent = nullptr);
    Client(const Client &) = delete;
    void operator=(const Client &) = delete;

public:
    static Client &getInstance();
    void ConnectToServer(qint32 port=12345);
    void DisconnectFromServer();
    void WriteData(QString data);
    QString readResponse();
private slots:
    void OnConnect();
    void OnDisConnect();
    void OnErrorOccurred(QAbstractSocket::SocketError error);
    void OnStateChange(QAbstractSocket::SocketState state);
signals:
    void SignalOnConnect();
    void SignalOnDisConnect();
    void SignalOnErrorOccurred(QAbstractSocket::SocketError error);
    void SignalOnStateChange(QAbstractSocket::SocketState state);
};
#endif // CLIENT_H
