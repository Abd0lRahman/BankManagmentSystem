#include "LoginCommand.h"

LoginCommand::LoginCommand()
{

}

QString LoginCommand::execute(QString string)
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
    else if(DB.GetValueFromDataBase("Users","Role","UserName",string.split("$")[1]) == "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" wrong username not DONE\n");
        Result = "$$$";
    }
    else if(DB.GetValueFromDataBase("Users","Role","UserName",string.split("$")[1],"Password",string.split("$")[2]) == "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" wrong Password not DONE\n");
        Result = "$$$$";
    }
    else
    {
        Result = DB.GetValueFromDataBase("Users","Role","UserName",string.split("$")[1]);
        Result.append("$"+DB.GetValueFromDataBase("Users","FullName","UserName",string.split("$")[1],"Password",string.split("$")[2]));
        Result.append("$"+DB.GetValueFromDataBase("Users","UserName","UserName",string.split("$")[1],"Password",string.split("$")[2]));
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
