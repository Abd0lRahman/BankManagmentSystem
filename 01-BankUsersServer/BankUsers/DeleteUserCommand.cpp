#include "DeleteUserCommand.h"

DeleteUserCommand::DeleteUserCommand() {}

QString DeleteUserCommand::execute(QString string)
{
    QString Result="";
    if(!DB.OpenDatabase())
    {
        Result = "$";
    }
    else if(!logfile.OpenTheLogFile())
    {
        Result = "$";
    }
    else if(DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[1])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[1])=="ADMIN")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong AccountID\n");
        Result = "$$";
    }
    else if(string.split("$")[2] != DB.GetValueFromDataBase("Users","Signature","AccountID",string.split("$")[1]))
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong signature\n");
        Result = "$$$$$";
    }
    else
    {
        email.AccountDeleted(DB.GetValueFromDataBase("Users","EMail","AccountID",string.split("$")[1]),DB.GetValueFromDataBase("Users","FullName","AccountID",string.split("$")[1]),string.split("$")[1]);
        DB.DeleteFromDataBase("Users","AccountID",string.split("$")[1]);
        DB.DeleteFromDataBase("Transactions","AccountID",string.split("$")[1]);
        Result= "DONE";
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
