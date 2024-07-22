#ifndef DELETEUSERCOMMAND_H
#define DELETEUSERCOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
#include "email.h"
class DeleteUserCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
    Email email;
public:
    DeleteUserCommand();
    QString execute(QString string)override;
};

#endif // DELETEUSERCOMMAND_H
