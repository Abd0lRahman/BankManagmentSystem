#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <QObject>

class Encrypter : public QObject
{
    Q_OBJECT
public:
    explicit Encrypter(QObject *parent = nullptr);

signals:
public slots:
    void DecryptRecievedData(QString DataRecived);
};

#endif // ENCRYPTER_H
