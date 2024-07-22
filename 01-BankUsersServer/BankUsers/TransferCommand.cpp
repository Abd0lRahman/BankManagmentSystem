#include "TransferCommand.h"

TransferCommand::TransferCommand() {}

QString TransferCommand::execute(QString string)
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
    else if(string.split("$")[4] != DB.GetValueFromDataBase("Users","Signature","UserName",string.split("$")[1]))
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong signature\n");
        Result = "$$$$$";
    }
    else if(DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[2])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",string.split("$")[2])=="ADMIN")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong AccountID\n");
        Result = "$$";
    }
    else
    {
        //Update sender balance
        QString SenderBalance= DB.GetValueFromDataBase("Users","Balance","UserName",string.split("$")[1]);
        qint32 NewBalance = SenderBalance.toInt() - string.split("$")[3].toInt();
        DB.UpdateDataBase("Users","Balance",QString::number(NewBalance),"UserName",string.split("$")[1]);

        //update recieverbalance
        QString TheOtherBalance= DB.GetValueFromDataBase("Users","Balance","AccountID",string.split("$")[2]);
        qint32 TheOtheNewrBalance = TheOtherBalance.toInt() + string.split("$")[3].toInt();
        DB.UpdateDataBase("Users","Balance",QString::number(TheOtheNewrBalance),"AccountID",string.split("$")[2]);

        //update the transaction table
        QString Values = DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[1]) + "$" + currentDateTime + "$" + "-"+string.split("$")[3];
        DB.InsertARawInDataBase3Index("Transactions",Values);
        QString Values2 = string.split("$")[2] + "$" + currentDateTime + "$" + string.split("$")[3];
        DB.InsertARawInDataBase3Index("Transactions",Values2);

        //get the sender new balance
        Result= DB.GetValueFromDataBase("Users","Balance","UserName",string.split("$")[1]);
        email.TransferIsDone(DB.GetValueFromDataBase("Users","EMail","UserName",string.split("$")[1]),DB.GetValueFromDataBase("Users","FullName","UserName",string.split("$")[1]),string.split("$")[3],QString::number(NewBalance),string.split("$")[2]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
