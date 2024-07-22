#ifndef GETACCIDCOMMAND_H
#define GETACCIDCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class GetAccIDCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    GetAccIDCommand();
    QString execute(QString string)override;
};

#endif // GETACCIDCOMMAND_H
