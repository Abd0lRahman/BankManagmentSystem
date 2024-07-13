#include "DataBaseExecutor.h"
#include "DataBase.h"
#include "qcryptographichash.h"

DataBaseExecutor::DataBaseExecutor(QObject *parent)
    : QObject{parent}
{}

QString DataBaseExecutor::ExecuteCommand(QString &command)
{
    //Declare and initializing variables
    QString Result = "";
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    //Declare and initializing files
    QFile MIPfile("D:\\Study\\1- Embedded System\\20-IMT Embedded linux\\15-Bank managment System\\01-BankUsersServer\\BankUsers\\build\\Desktop_Qt_6_7_0_MinGW_64_bit-Debug\\debug\\00-MIP.txt");
    QTextStream MIP(&MIPfile);
    QFile Requestsfile("D:\\Study\\1- Embedded System\\20-IMT Embedded linux\\15-Bank managment System\\01-BankUsersServer\\BankUsers\\build\\Desktop_Qt_6_7_0_MinGW_64_bit-Debug\\debug\\01-LogFile.txt");
    QTextStream logfile(&Requestsfile);
    bool flag =true;

    //Open files
    if(!DB.OpenDatabase())
    {
        qDebug()<<"Can't open the database file";
        logfile<<"Error in server can't open database file\n";
        Result = "$";
    }
    else if(!MIPfile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Can't open the MIP file";
        logfile<<"Error in server can't open MIP file\n";
        Result = "$";
    }
    else if(!Requestsfile.open(QIODevice::WriteOnly  | QIODevice::Append))
    {
        qDebug()<<"Can't open the Requests file";
        logfile<<"Error in server can't open Requests file\n";
        Result = "$";
    }
    else
    {
        if(command.split("$")[0] == "LOGIN")
        {
            if(DB.GetValueFromDataBase("Users","Role","UserName",command.split("$")[1]) == "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" wrong username not DONE\n";
                Result = "$$$";
            }
            else if(DB.GetValueFromDataBase("Users","Role","UserName",command.split("$")[1],"Password",command.split("$")[2]) == "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" wrong Password not DONE\n";
                Result = "$$$$";
            }
            else
            {
                Result = DB.GetValueFromDataBase("Users","Role","UserName",command.split("$")[1]);
                Result.append("$"+DB.GetValueFromDataBase("Users","FullName","UserName",command.split("$")[1],"Password",command.split("$")[2]));
                Result.append("$"+DB.GetValueFromDataBase("Users","UserName","UserName",command.split("$")[1],"Password",command.split("$")[2]));
            }
        }
        else if(command.split("$")[0] == "SIGNUP")
        {
            if(MIP.readAll()!= command.split("$")[1])
            {
                flag = false; logfile<<command.replace("$"," ")<<" wrong MIP not DONE\n";
                Result = "$$$$$$";
            }
            else if(DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[2]) != "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" Duplicated User Name not DONE\n";
                Result = "$$$$$$$$";
            }

            else if(DB.GetValueFromDataBase("Users","UserName","AccountID",command.split("$")[5]) != "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" Duplicated Account ID not DONE\n";
                Result = "$$$$$$$";
            }
            else
            {
                QString Values = command.split("$")[5] + "$ADMIN" + "$" + command.split("$")[4] + "$" + command.split("$")[2] + "$" + command.split("$")[3];
                DB.InsertARawInDataBase11Index("Users",Values);
                Result = command.split("$")[4] + "$" + command.split("$")[2];
            }
        }
        else if(command.split("$")[0] == "Get Password")
        {
            if(DB.GetValueFromDataBase("Users","Role","UserName",command.split("$")[1]) == "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong username\n";
                Result = "$$$";
            }
            else if(MIP.readAll() != command.split("$")[2])
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong MIP\n";
                Result = "$$$$$$";
            }
            else
            {
                Result = DB.GetValueFromDataBase("Users","Password","UserName",command.split("$")[1]);
            }
        }
        else if(command.split("$")[0] == "GET")
        {
            Result= DB.GetValueFromDataBase("Users",command.split("$")[1],"UserName",command.split("$")[2]);
        }
        else if(command.split("$")[0] == "View Transaction History")
        {
            QString temp= DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[1]);
            Result = DB.GetTableFromDataBase("Transactions","AccountID",temp,"AccountID",command.split("$")[2]);
        }
        else if(command.split("$")[0] == "TRANSACTION")
        {
            if(command.split("$")[3] != DB.GetValueFromDataBase("Users","Signature","UserName",command.split("$")[1]))
            {
                flag = false; logfile<<command.replace("$"," ")<<" wrong signature not DONE\n";
                Result = "$$$$$";
            }
            else
            {
                QString temp= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
                DB.UpdateDataBase("Users","Balance",QString::number(temp.toInt() + command.split("$")[2].toInt()),"UserName",command.split("$")[1]);
                Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
                QString Values = DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[1]) + "$" + currentDateTime + "$" + command.split("$")[2];
                DB.InsertARawInDataBase3Index("Transactions",Values);
                email.TransactionIsDone(DB.GetValueFromDataBase("Users","EMail","UserName",command.split("$")[1]), DB.GetValueFromDataBase("Users","FullName","UserName",command.split("$")[1]),command.split("$")[2],QString::number(temp.toInt() + command.split("$")[2].toInt()));
            }
        }
        else if(command.split("$")[0] == "TRANSFER")
        {
            if(command.split("$")[4] != DB.GetValueFromDataBase("Users","Signature","UserName",command.split("$")[1]))
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong signature\n";
                Result = "$$$$$";
            }
            else if(DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[2])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[2])=="ADMIN")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong AccountID\n";
                Result = "$$";
            }
            else
            {
                //Update sender balance
                QString SenderBalance= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
                qint32 NewBalance = SenderBalance.toInt() - command.split("$")[3].toInt();
                DB.UpdateDataBase("Users","Balance",QString::number(NewBalance),"UserName",command.split("$")[1]);

                //update recieverbalance
                QString TheOtherBalance= DB.GetValueFromDataBase("Users","Balance","AccountID",command.split("$")[2]);
                qint32 TheOtheNewrBalance = TheOtherBalance.toInt() + command.split("$")[3].toInt();
                DB.UpdateDataBase("Users","Balance",QString::number(TheOtheNewrBalance),"AccountID",command.split("$")[2]);

                //update the transaction table
                QString Values = DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[1]) + "$" + currentDateTime + "$" + "-"+command.split("$")[3];
                DB.InsertARawInDataBase3Index("Transactions",Values);
                QString Values2 = command.split("$")[2] + "$" + currentDateTime + "$" + command.split("$")[3];
                DB.InsertARawInDataBase3Index("Transactions",Values2);

                //get the sender new balance
                Result= DB.GetValueFromDataBase("Users","Balance","UserName",command.split("$")[1]);
                email.TransferIsDone(DB.GetValueFromDataBase("Users","EMail","UserName",command.split("$")[1]),DB.GetValueFromDataBase("Users","FullName","UserName",command.split("$")[1]),command.split("$")[3],QString::number(NewBalance),command.split("$")[2]);
            }
        }
        else if(command.split("$")[0] == "View Data Base")
        {
            Result= DB.GetTableFromDataBase("Users");
        }
        else if(command.split("$")[0] == "Get AccID")
        {
            if(DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[1])=="")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong UserName\n";
                Result = "$$$";
            }
            else
            {
                Result= DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[1]);
            }
        }
        else if(command.split("$")[0] == "Get Balance")
        {
            if(DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="ADMIN")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong AccountID\n";
                Result = "$$";
            }
            else
            {
                Result= DB.GetValueFromDataBase("Users","Balance","AccountID",command.split("$")[1]);
            }
        }
        else if(command.split("$")[0] == "Admin View Transaction History")
        {
            if(DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1]) == "" || DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1]) == "ADMIN")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong AccountID\n";
                Result = "$$";
            }
            else
            {
                Result= DB.GetTableFromDataBase("Transactions","AccountID",command.split("$")[1],"AccountID",command.split("$")[2]);
            }
        }
        else if(command.split("$")[0] == "DELETE")
        {
            if(DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="ADMIN")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong AccountID\n";
                Result = "$$";
            }
            else if(command.split("$")[2] != DB.GetValueFromDataBase("Users","Signature","AccountID",command.split("$")[1]))
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong signature\n";
                Result = "$$$$$";
            }
            else
            {
                email.AccountDeleted(DB.GetValueFromDataBase("Users","EMail","AccountID",command.split("$")[1]),DB.GetValueFromDataBase("Users","FullName","AccountID",command.split("$")[1]),command.split("$")[1]);
                DB.DeleteFromDataBase("Users","AccountID",command.split("$")[1]);
                DB.DeleteFromDataBase("Transactions","AccountID",command.split("$")[1]);
                Result= "DONE";

            }
        }
        else if(command.split("$")[0] == "UPDATE User data")
        {
            //UPDATE$AccID$AccSignature$ColumnNAME$NEWVALUE

            if(DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="" || DB.GetValueFromDataBase("Users","Role","AccountID",command.split("$")[1])=="ADMIN")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong AccountID\n";
                Result = "$$";
            }
            else if(command.split("$")[2] != DB.GetValueFromDataBase("Users","Signature","AccountID",command.split("$")[1]))
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE wrong signature\n";
                Result = "$$$$$";
            }
            else
            {
                if(command.split("$")[3] == "AccountID")
                {
                    if(DB.GetValueFromDataBase("Users","UserName","AccountID",command.split("$")[4]) != "")
                    {
                        flag = false; logfile<<command.replace("$"," ")<<" Duplicated Account ID not DONE\n";
                        Result = "$$$$$$$";
                    }
                    else
                    {
                        DB.UpdateDataBase("Users",command.split("$")[3],command.split("$")[4],"Signature",command.split("$")[2],"AccountID",command.split("$")[1]);
                        DB.UpdateDataBase("Transaction",command.split("$")[3],command.split("$")[4],"AccountID",command.split("$")[1]);
                        Result = "DONE";
                    }
                }
                else if(command.split("$")[3] == "EMail")
                {
                    if(DB.GetValueFromDataBase("Users","UserName","EMail",command.split("$")[4]) != "")
                    {
                        flag = false; logfile<<command.replace("$"," ")<<" Duplicated Email not DONE\n";
                        Result = "$$$$$$$$$";
                    }
                    else
                    {
                        DB.UpdateDataBase("Users",command.split("$")[3],command.split("$")[4],"Signature",command.split("$")[2],"AccountID",command.split("$")[1]);
                        Result = "DONE";
                    }
                }
                else if(command.split("$")[3] == "UserName")
                {
                    if(DB.GetValueFromDataBase("Users","UserName","UserName",command.split("$")[4]) != "")
                    {
                        flag = false; logfile<<command.replace("$"," ")<<" Duplicated Email not DONE\n";
                        Result = "$$$$$$$$";
                    }
                    else
                    {
                        DB.UpdateDataBase("Users",command.split("$")[3],command.split("$")[4],"Signature",command.split("$")[2],"AccountID",command.split("$")[1]);
                        Result = "DONE";
                    }
                }
                else if(command.split("$")[3] == "Password")
                {
                    DB.UpdateDataBase("Users",command.split("$")[3],command.split("$")[4],"Signature",command.split("$")[2],"AccountID",command.split("$")[1]);
                    Result = "DONE";
                }
                else if(command.split("$")[3] == "Signature")
                {
                    DB.UpdateDataBase("Users",command.split("$")[3],QCryptographicHash::hash(command.split("$")[4].toLocal8Bit(),QCryptographicHash::Sha256).toHex(),"Signature",command.split("$")[2],"AccountID",command.split("$")[1]);
                    Result = "DONE";

                }
            }
        }
        else if(command.split("$")[0] == "Check User data")
        {
            if(DB.GetValueFromDataBase("Users","UserName","AccountID",command.split("$")[1]) != "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE account id already exist\n";
                Result = "$$$$$$$";
            }
            else if(DB.GetValueFromDataBase("Users","AccountID","UserName",command.split("$")[4]) != "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE Username already exist\n";
                Result = "$$$$$$$$";
            }
            else if(DB.GetValueFromDataBase("Users","AccountID","Email",command.split("$")[8]) != "")
            {
                flag = false; logfile<<command.replace("$"," ")<<" not DONE email already exist\n";
                Result = "$$$$$$$$$";
            }
            else
            {
                std::uniform_int_distribution<int> distribution(100000,999999);
                QString verificationcode = QString::number(distribution(*QRandomGenerator::global()));
                email.isEmailright(command.split("$")[8],verificationcode);
                Result = verificationcode;
            }
        }
        else if(command.split("$")[0] == "CREATE")
        {
            DB.InsertARawInDataBase11Index("Users",command.split("$").mid(1).join("$"));
            QString Values = command.split("$")[1] + "$" + currentDateTime + "$" + command.split("$")[6];
            DB.InsertARawInDataBase3Index("Transactions",Values);
            email.UserCreated(command.split("$")[8], command.split("$")[3],command.split("$")[1],command.split("$")[4],command.split("$")[5]);
            Result = "DONE";
        }
    }
    qDebug()<<QString("Response is %1").arg(Result);
    if(flag == true)
        logfile<<command.replace("$"," ")<<" DONE\n";
    DB.CloseDataBase();
    MIPfile.close();
    Requestsfile.close();
    return Result;
}
