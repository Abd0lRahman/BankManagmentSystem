#ifndef GETACCOUNTIDANDBALANCE_H
#define GETACCOUNTIDANDBALANCE_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class GetAccountIDAndBalance:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    GetAccountIDAndBalance();
    QString execute(QString string)override;
};

#endif // GETACCOUNTIDANDBALANCE_H
