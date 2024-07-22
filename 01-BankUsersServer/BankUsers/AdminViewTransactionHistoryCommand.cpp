#include "AdminViewTransactionHistoryCommand.h"

AdminViewTransactionHistoryCommand::AdminViewTransactionHistoryCommand() {}

QString AdminViewTransactionHistoryCommand::execute(QString string)
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
    else if(DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[1]) == "" || DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[1]) == "ADMIN")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong AccountID\n");
        Result = "$$";
    }
    else
    {
        Result= DB.GetTableFromDataBase("Transactions","AccountID",string.split("$")[1],"AccountID",string.split("$")[2]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
