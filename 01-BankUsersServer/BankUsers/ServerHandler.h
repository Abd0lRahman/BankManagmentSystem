#ifndef SERVERHANDLER_H
#define SERVERHANDLER_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include "DataBaseExecutor.h"

class ServerHandler : public QThread
{
    Q_OBJECT
public:
    explicit ServerHandler(qint32 id, QObject *parent = nullptr);
    void SendMessage(QString message);

signals:
    void SignalDataReceived(QString& content);
    void ExecCommand(QString& content);
private:
    qint32 id;
    QTcpSocket* socket;
    DataBaseExecutor DBExecutor;
public slots:
    void ReceiveMessage();
    void ONDisconnect();
    // QThread interface
protected:
    void run() override;
};

#endif // SERVERHANDLER_H
