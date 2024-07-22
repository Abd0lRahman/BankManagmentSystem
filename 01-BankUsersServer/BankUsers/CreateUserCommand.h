#ifndef CREATEUSERCOMMAND_H
#define CREATEUSERCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "email.h"
class CreateUserCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    Email email;
public:
    CreateUserCommand();
    QString execute(QString string)override;
};

#endif // CREATEUSERCOMMAND_H
