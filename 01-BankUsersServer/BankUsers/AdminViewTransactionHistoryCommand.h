#ifndef ADMINVIEWTRANSACTIONHISTORYCOMMAND_H
#define ADMINVIEWTRANSACTIONHISTORYCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class AdminViewTransactionHistoryCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    AdminViewTransactionHistoryCommand();
    QString execute(QString string)override;
};

#endif // ADMINVIEWTRANSACTIONHISTORYCOMMAND_H
