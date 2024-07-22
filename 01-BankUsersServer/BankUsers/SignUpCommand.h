#ifndef SIGNUPCOMMAND_H
#define SIGNUPCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "MIPFile.h"
class SignUpCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    MIPFile MIP;
public:
    SignUpCommand();
    QString execute(QString string)override;
};

#endif // SIGNUPCOMMAND_H
