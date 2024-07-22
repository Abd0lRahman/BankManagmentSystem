#include "email.h"

Email::Email(QObject *parent)
    : QObject{parent}
{
    smtp = new Smtp("managmentbank9@gmail.com","jfop hynn jfpp zgnc","smtp.gmail.com",465);
}

void Email::UserCreated(QString email, QString fullname, QString accid, QString username, QString password)
{
    smtp->sendMail("managmentbank9@gmail.com",email, "Welcome to our Bank managment system",
                   QString("Dear %1,\n"
                           "Hello we are bank management system team\n"
                           "your account created successfully with:\n"
                           "account id: %2\n"
                           "User name: %3\n"
                           "Password: %4\n"
                           "regards,\n"
                           "Bank management team").arg(fullname,accid,username,password));

}

void Email::TransactionIsDone(QString email,QString fullname, QString amount, QString Balance)
{
    if(amount.toInt() > 0)
    {
        smtp->sendMail("managmentbank9@gmail.com",email, "Transaction Is Done",
                       QString("Dear %1,\n"
                               "Hello we are bank management system team\n"
                               "your deposite is done\n"
                               "a %2$ is added to your balance\n"
                               "your new balance is: %3\n"
                               "regards,\n"
                               "Bank management team").arg(fullname,amount,Balance));
    }
    else
    {
        smtp->sendMail("managmentbank9@gmail.com",email, "Transaction Is Done",
                       QString("Dear %1,\n"
                               "Hello we are bank management system team\n"
                               "your withdraw is done\n"
                               "a %2$ is removed from your balance\n"
                               "your new balance is: %3\n"
                               "regards,\n"
                               "Bank management team").arg(fullname,(amount.remove("-")),Balance));
    }
}

void Email::TransferIsDone(QString email, QString fullname, QString amount, QString Balance, QString accid)
{
    smtp->sendMail("managmentbank9@gmail.com",email, "Transfer Is Done",
                   QString("Dear %1,\n"
                           "Hello we are bank management system team\n"
                           "your transfer is done!\n"
                           "a %2$ is removed from your balance and sent to account:%3\n"
                           "your new balance is: %4\n"
                           "regards,\n"
                           "Bank management team").arg(fullname,amount,accid,Balance));
}

void Email::AccountDeleted(QString email, QString fullname, QString accid)
{
    smtp->sendMail("managmentbank9@gmail.com",email, "Good bye from our Bank management system",
                   QString("Dear %1,\n"
                           "Hello we are bank management system team\n"
                           "your account removed successfully with:\n"
                           "account id: %2\n"
                           "regards,\n"
                           "Bank management team").arg(fullname,accid));
}

void Email::isEmailright(QString email, QString verificationcode)
{
    smtp->sendMail("managmentbank9@gmail.com",email, "verification code",
                   QString("Dears,\n"
                           "Hello we are bank management system team\n"
                           "your verification code is: %1\n"
                           "If you are not the person who made the request, please disregard this email\n"
                           "regards,\n"
                           "Bank management team").arg(verificationcode));
}
