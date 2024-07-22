#ifndef TRANSACTIONCOMMAND_H
#define TRANSACTIONCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "email.h"
class TransactionCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    Email email;
public:
    TransactionCommand();
    QString execute(QString string)override;
};

#endif // TRANSACTIONCOMMAND_H
