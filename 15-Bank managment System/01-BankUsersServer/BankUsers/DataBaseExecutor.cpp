#include "DataBaseExecutor.h"
#include "DataBase.h"
DataBaseExecutor::DataBaseExecutor(QObject *parent)
    : QObject{parent}
{}

QString DataBaseExecutor::ExecuteCommand(QString &command)
{
    DB.OpenDatabase();
    QString Result = "";
    if(command.split("$")[0] == "LOGIN")
    {
        Result = (QString("%1$%2").arg(DB.GetValueFromDataBase("Users","Role","UserName",command.split("$")[1],"Password",command.split("$")[2]),DB.GetValueFromDataBase("Users","UserName","UserName",command.split("$")[1],"Password",command.split("$")[2])));
    }
    else if(command.split("$")[0] == "GET")
    {
        Result= DB.GetValueFromDataBase("Users",command.split("$")[1],"UserName",command.split("$")[2]);
    }
    else if(command.split("$")[0] == "TRANSACTION")
    {
        if(command.split("$")[3] == DB.GetValueFromDataBase("Users","Signature","UserName",command.split("$")[1]))
        {
            Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
            if(DB.UpdateDataBase("Users","Balance",QString::number(Result.toInt() + command.split("$")[2].toInt()),"UserName",command.split("$")[1]) !="false")
                Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
            else
                Result = "Error";
        }
        else
            Result = "Error";
    }
    else if(command.split("$")[0] == "TRANSFER")
    {
        if(command.split("$")[4] == DB.GetValueFromDataBase("Users","Signature","UserName",command.split("$")[1]))
        {
            Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
            qint32 temp = Result.toInt() - command.split("$")[3].toInt();
            if(DB.UpdateDataBase("Users","Balance",QString::number(temp),"UserName",command.split("$")[1])=="DONE")
            {
                Result= DB.GetValueFromDataBase("Users","Balance","AccountID",command.split("$")[2]);
                qint32 temp = Result.toInt() + command.split("$")[3].toInt();
                if(DB.UpdateDataBase("Users","Balance",QString::number(temp),"AccountID",command.split("$")[2])=="DONE")
                {
                    Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
                }
                else
                    Result = "Error";
            }
            else
                Result = "Error";
        }
        else
            Result = "Error";
    }
    else if(command.split("$")[0] == "ISTHERE")
    {
        Result= DB.GetValueFromDataBase("Users","UserName",command.split("$")[1],command.split("$")[2]);
    }
    else if(command.split("$")[0] == "VIEW")
    {
        Result= DB.GetTableFromDataBase("Requests","ChangedUserName",command.split("$")[1]);
    }
    else if(command== "VIEWUSERS")
    {
        Result= DB.GetTableFromDataBase("Users");
    }
    else if(command.split("$")[0] == "AGET")
    {
        Result= DB.GetValueFromDataBase("Users",command.split("$")[1],"AccountID",command.split("$")[2]);
    }
    else if(command.split("$")[0] == "AVIEW")
    {
        QString changedusername = DB.GetValueFromDataBase("Users","UserName","AccountID",command.split("$")[1]);
        Result= DB.GetTableFromDataBase("Requests","ChangedUserName",changedusername);
    }
    else if(command.split("$")[0] == "DELETE")
    {
        Result= DB.DeleteFromDataBase("Users","AccountID",command.split("$")[1],"Signature",command.split("$")[2]);
    }
    qDebug()<<QString("Response is %1").arg(Result);
    DB.CloseDataBase();
    return Result;
}
