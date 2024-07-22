#ifndef FORGETPASSWORDCOMMAND_H
#define FORGETPASSWORDCOMMAND_H

#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "MIPFile.h"

class ForgetPasswordCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    MIPFile MIP;
public:
    ForgetPasswordCommand();
    QString execute(QString string)override;
};

#endif // FORGETPASSWORDCOMMAND_H
