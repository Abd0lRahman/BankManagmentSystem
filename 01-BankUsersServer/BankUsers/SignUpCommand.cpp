#include "SignUpCommand.h"

SignUpCommand::SignUpCommand() {}

QString SignUpCommand::execute(QString string)
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
    else if(!MIP.OpenTheMIPFile())
    {
        Result = "$";
    }
    else if(MIP.ReadTheMIPFile() != string.split("$")[1])
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" wrong MIP not DONE\n");
        Result = "$$$$$$";
    }
    else if(DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[2]) != "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" Duplicated User Name not DONE\n");
        Result = "$$$$$$$$";
    }
    else if(DB.GetValueFromDataBase("Users","UserName","AccountID",string.split("$")[5]) != "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" Duplicated Account ID not DONE\n");
        Result = "$$$$$$$";
    }
    else
    {
        QString Values = string.split("$")[5] + "$ADMIN" + "$" + string.split("$")[4] + "$" + string.split("$")[2] + "$" + string.split("$")[3];
        DB.InsertARawInDataBase11Index("Users",Values);
        Result = string.split("$")[4] + "$" + string.split("$")[2];
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    MIP.closeTheMIPFile();
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
