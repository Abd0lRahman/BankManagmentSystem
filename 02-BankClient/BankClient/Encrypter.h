#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include "client.h"
#include <QObject>

class Encrypter : public QObject
{
    Q_OBJECT
public:
    explicit Encrypter(QObject *parent = nullptr);
    static void Encrypt(QString &data);
    static void Decrypt(QString &data);
    friend class Client;
};

#endif // ENCRYPTER_H
