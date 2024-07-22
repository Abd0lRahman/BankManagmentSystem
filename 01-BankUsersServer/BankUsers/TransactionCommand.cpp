#include "TransactionCommand.h"

TransactionCommand::TransactionCommand() {}

QString TransactionCommand::execute(QString string)
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
    else if(string.split("$")[3] != DB.GetValueFromDataBase("Users","Signature","UserName",string.split("$")[1]))
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" wrong signature not DONE\n");
        Result = "$$$$$";
    }
    else
    {
        QString temp= DB.GetValueFromDataBase("Users","Balance","UserName",string.split("$")[1]);
        DB.UpdateDataBase("Users","Balance",QString::number(temp.toInt() + string.split("$")[2].toInt()),"UserName",string.split("$")[1]);
        Result= DB.GetValueFromDataBase("Users","Balance","UserName",string.split("$")[1]);
        QString Values = DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[1]) + "$" + currentDateTime + "$" + string.split("$")[2];
        DB.InsertARawInDataBase3Index("Transactions",Values);
        email.TransactionIsDone(DB.GetValueFromDataBase("Users","EMail","UserName",string.split("$")[1]), DB.GetValueFromDataBase("Users","FullName","UserName",string.split("$")[1]),string.split("$")[2],QString::number(temp.toInt() + string.split("$")[2].toInt()));
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
