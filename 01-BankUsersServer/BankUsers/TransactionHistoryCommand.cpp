#include "TransactionHistoryCommand.h"

TransactionHistoryCommand::TransactionHistoryCommand() {}

QString TransactionHistoryCommand::execute(QString string)
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
        QString temp= DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[1]);
        Result = DB.GetTableFromDataBase("Transactions","AccountID",temp,"AccountID",string.split("$")[2]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
