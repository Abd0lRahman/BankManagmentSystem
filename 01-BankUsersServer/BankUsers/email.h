#ifndef EMAIL_H
#define EMAIL_H

#include <QObject>
#include "smtp.h"

class Email : public QObject
{
    Q_OBJECT
public:
    explicit Email(QObject *parent = nullptr);
    void UserCreated(QString email, QString fullname, QString accid, QString username, QString password);
    void TransactionIsDone(QString email, QString fullname, QString amount, QString Balance);
    void TransferIsDone(QString email, QString fullname, QString amount, QString Balance, QString accid);
    void AccountDeleted(QString email,QString fullname,QString accid);
    void isEmailright(QString email, QString verificationcode);

private:
    Smtp* smtp;

signals:
};

#endif // EMAIL_H
