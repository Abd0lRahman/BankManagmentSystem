#ifndef TRANSFERCOMMAND_H
#define TRANSFERCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "email.h"
class TransferCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    Email email;
public:
    TransferCommand();
    QString execute(QString string)override;
};

#endif // TRANSFERCOMMAND_H
