#ifndef TRANSACTIONHISTORYCOMMAND_H
#define TRANSACTIONHISTORYCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class TransactionHistoryCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    TransactionHistoryCommand();
    QString execute(QString string)override;
};

#endif // TRANSACTIONHISTORYCOMMAND_H
