#include "DataBaseExecutor.h"
#include "AdminViewTransactionHistoryCommand.h"
#include "CheckUserDataCommand.h"
#include "CreateUserCommand.h"
#include "DeleteUserCommand.h"
#include "ForgetPasswordCommand.h"
#include "GetAccIDCommand.h"
#include "GetAccountIDAndBalance.h"
#include "GetBalanceCommand.h"
#include "Invoker.h"
#include "LoginCommand.h"
#include "SignUpCommand.h"
#include "TransactionCommand.h"
#include "TransactionHistoryCommand.h"
#include "TransferCommand.h"
#include "UpdateUserDataCommand.h"
#include "ViewDataBaseCommand.h"

DataBaseExecutor::DataBaseExecutor(QObject *parent)
    : QObject{parent}
{}

QString DataBaseExecutor::TranslateTheString(QString &command)
{
    //Declare and initializing variables
    QString Result = "";
    if(command.split("$")[0] == "LOGIN")
    {
        LoginCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "SIGNUP")
    {
        SignUpCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "Get Password")
    {
        ForgetPasswordCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "GET")
    {
        GetAccountIDAndBalance com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "View Transaction History")
    {
        TransactionHistoryCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "TRANSACTION")
    {
        TransactionCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "TRANSFER")
    {
        TransferCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "View Data Base")
    {
        ViewDataBaseCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "Get AccID")
    {
        GetAccIDCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "Get Balance")
    {
        GetBalanceCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "Admin View Transaction History")
    {
        AdminViewTransactionHistoryCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "DELETE")
    {
        DeleteUserCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "UPDATE User data")
    {
        UpdateUserDataCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "Check User data")
    {
        CheckUserDataCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else if(command.split("$")[0] == "CREATE")
    {
        CreateUserCommand com;
        Invoker invoke;
        Result = invoke.execution(&com,command);
    }
    else
    {
        Result = "";
    }
    qDebug()<<QString("Response is %1").arg(Result);
    return Result;
}
