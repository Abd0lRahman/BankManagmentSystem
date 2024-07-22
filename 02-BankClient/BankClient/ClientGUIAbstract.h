#ifndef CLIENTGUIABSTRACT_H
#define CLIENTGUIABSTRACT_H

#include <QDialog>
#include "client.h"
#include <QMetaEnum>

namespace Ui {
class ClientGUIAbstract;
}

class ClientGUIAbstract : public QDialog
{
    Q_OBJECT

public:
    explicit ClientGUIAbstract(QWidget *parent = nullptr);
    ~ClientGUIAbstract();
    bool connected = true;
public slots:
    void OnConnect();
    void OnDisConnect();
    void OnErrorOccurred(QAbstractSocket::SocketError error);
    void OnStateChange(QAbstractSocket::SocketState state);
    void ErrorInServerFiles();
private:
    Ui::ClientGUIAbstract *ui;
};

#endif // CLIENTGUIABSTRACT_H
