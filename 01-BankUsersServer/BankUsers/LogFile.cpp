#include "LogFile.h"
#include "qdebug.h"


LogFile::LogFile()
{
    Requestsfile.setFileName("01-LogFile.txt");
    logfile.setDevice(&Requestsfile);
}

void LogFile::closeTheLogFile()
{
    Requestsfile.close();
}

void LogFile::WriteInTheLogFile(QString str)
{
    logfile<<str.replace("$"," ");
}

bool LogFile::OpenTheLogFile()
{
    if(!Requestsfile.open(QIODevice::WriteOnly  | QIODevice::Append))
    {
        qDebug()<<"Can't open the Requests file";
        logfile<<"Error in server can't open Requests file\n";
        return false;
    }
    else
        return true;
}
