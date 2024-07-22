#ifndef UPDATEUSERDATACOMMAND_H
#define UPDATEUSERDATACOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class UpdateUserDataCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    UpdateUserDataCommand();
    QString execute(QString string)override;
};

#endif // UPDATEUSERDATACOMMAND_H
