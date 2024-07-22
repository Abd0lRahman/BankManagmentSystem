#include "ForgetPasswordCommand.h"

ForgetPasswordCommand::ForgetPasswordCommand() {}

QString ForgetPasswordCommand::execute(QString string)
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
    else if(DB.GetValueFromDataBase("Users","Role","UserName",string.split("$")[1]) == "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong username\n");
        Result = "$$$";
    }
    else if(MIP.ReadTheMIPFile() != string.split("$")[2])
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE wrong MIP\n");
        Result = "$$$$$$";
    }
    else
    {
        Result = DB.GetValueFromDataBase("Users","Password","UserName",string.split("$")[1]);
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    MIP.closeTheMIPFile();
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
