#include "GetAccIDCommand.h"

GetAccIDCommand::GetAccIDCommand() {}

QString GetAccIDCommand::execute(QString string)
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
    else if(DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[1])=="")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong UserName\n");
        Result = "$$$";
    }
    else
    {
        Result= DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[1]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
