#include "GetAccountIDAndBalance.h"

GetAccountIDAndBalance::GetAccountIDAndBalance() {}

QString GetAccountIDAndBalance::execute(QString string)
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
    else
    {
        Result= DB.GetValueFromDataBase("Users",string.split("$")[1],"UserName",string.split("$")[2]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
