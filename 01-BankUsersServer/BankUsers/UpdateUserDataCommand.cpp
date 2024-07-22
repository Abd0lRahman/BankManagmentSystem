#include "UpdateUserDataCommand.h"
#include "qcryptographichash.h"

UpdateUserDataCommand::UpdateUserDataCommand() {}

QString UpdateUserDataCommand::execute(QString string)
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
        if(string.split("$")[3] == "AccountID")
        {
            if(DB.GetValueFromDataBase("Users","UserName","AccountID",string.split("$")[4]) != "")
            {
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" Duplicated Account ID not DONE\n");
                Result = "$$$$$$$";
            }
            else
            {
                DB.UpdateDataBase("Users",string.split("$")[3],string.split("$")[4],"Signature",string.split("$")[2],"AccountID",string.split("$")[1]);
                DB.UpdateDataBase("Transactions",string.split("$")[3],string.split("$")[4],"AccountID",string.split("$")[1]);
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" DONE\n");
                Result = "DONE";
            }
        }
        else if(string.split("$")[3] == "EMail")
        {
            if(DB.GetValueFromDataBase("Users","UserName","EMail",string.split("$")[4]) != "")
            {
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" Duplicated Email not DONE\n");
                Result = "$$$$$$$$$";
            }
            else
            {
                DB.UpdateDataBase("Users",string.split("$")[3],string.split("$")[4],"Signature",string.split("$")[2],"AccountID",string.split("$")[1]);
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" DONE\n");
                Result = "DONE";
            }
        }
        else if(string.split("$")[3] == "UserName")
        {
            if(DB.GetValueFromDataBase("Users","UserName","UserName",string.split("$")[4]) != "")
            {
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" Duplicated Username not DONE\n");
                Result = "$$$$$$$$";
            }
            else
            {
                DB.UpdateDataBase("Users",string.split("$")[3],string.split("$")[4],"Signature",string.split("$")[2],"AccountID",string.split("$")[1]);
                logfile.WriteInTheLogFile(string.replace("$"," "));
                logfile.WriteInTheLogFile(" DONE\n");
                Result = "DONE";
            }
        }
        else if(string.split("$")[3] == "Password")
        {
            DB.UpdateDataBase("Users",string.split("$")[3],string.split("$")[4],"Signature",string.split("$")[2],"AccountID",string.split("$")[1]);
            logfile.WriteInTheLogFile(string.replace("$"," "));
            logfile.WriteInTheLogFile(" DONE\n");
            Result = "DONE";
        }
        else if(string.split("$")[3] == "Signature")
        {
            DB.UpdateDataBase("Users",string.split("$")[3],QCryptographicHash::hash(string.split("$")[4].toLocal8Bit(),QCryptographicHash::Sha256).toHex(),"Signature",string.split("$")[2],"AccountID",string.split("$")[1]);
            logfile.WriteInTheLogFile(string.replace("$"," "));
            logfile.WriteInTheLogFile(" DONE\n");
            Result = "DONE";
        }
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
