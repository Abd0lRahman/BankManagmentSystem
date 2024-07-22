#ifndef GETBALANCECOMMAND_H
#define GETBALANCECOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class GetBalanceCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    GetBalanceCommand();
    QString execute(QString string)override;
};

#endif // GETBALANCECOMMAND_H
