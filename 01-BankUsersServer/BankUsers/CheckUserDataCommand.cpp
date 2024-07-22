#include "CheckUserDataCommand.h"
#include <QRandomGenerator>
CheckUserDataCommand::CheckUserDataCommand() {}

QString CheckUserDataCommand::execute(QString string)
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
    else if(DB.GetValueFromDataBase("Users","UserName","AccountID",string.split("$")[1]) != "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE account id already exist\n");
        Result = "$$$$$$$";
    }
    else if(DB.GetValueFromDataBase("Users","AccountID","UserName",string.split("$")[4]) != "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE Username already exist\n");
        Result = "$$$$$$$$";
    }
    else if(DB.GetValueFromDataBase("Users","AccountID","Email",string.split("$")[8]) != "")
    {
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" not DONE email already exist\n");
        Result = "$$$$$$$$$";
    }
    else
    {
        std::uniform_int_distribution<int> distribution(100000,999999);
        QString verificationcode = QString::number(distribution(*QRandomGenerator::global()));
        email.isEmailright(string.split("$")[8],verificationcode);
        Result = verificationcode;
        logfile.WriteInTheLogFile(string.replace("$"," "));
        logfile.WriteInTheLogFile(" DONE\n");
    }
    logfile.closeTheLogFile();
    DB.CloseDataBase();
    return Result;
}
