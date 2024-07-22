#include "CreateUserCommand.h"

CreateUserCommand::CreateUserCommand() {}

QString CreateUserCommand::execute(QString string)
{
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString Result="";
    if(!DB.OpenDatabase())
    {
        Result = "$";
    }
    else if(!logfile.OpenTheLogFile())
    {
        Result = "$";
    }
    else
    {
        DB.InsertARawInDataBase11Index("Users",string.split("$").mid(1).join("$"));
        QString Values = string.split("$")[1] + "$" + currentDateTime + "$" + string.split("$")[6];
        DB.InsertARawInDataBase3Index("Transactions",Values);
        email.UserCreated(string.split("$")[8], string.split("$")[3],string.split("$")[1],string.split("$")[4],string.split("$")[5]);
        Result = "DONE";
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
