#ifndef LOGINCOMMAND_H
#define LOGINCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"

class LoginCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    LoginCommand();
    QString execute(QString)override;
};

#endif // LOGINCOMMAND_H
