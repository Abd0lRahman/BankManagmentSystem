#ifndef CHECKUSERDATACOMMAND_H
#define CHECKUSERDATACOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "email.h"
class CheckUserDataCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    Email email;
public:
    CheckUserDataCommand();
    QString execute(QString string)override;
};

#endif // CHECKUSERDATACOMMAND_H
