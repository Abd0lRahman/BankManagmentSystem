#ifndef LOGFILE_H
#define LOGFILE_H
#include <QString>
#include <QFile>
#include<QTextStream>

class LogFile
{
private:
    QFile Requestsfile;
    QTextStream logfile;
public:
    LogFile();
    void closeTheLogFile();
    void WriteInTheLogFile(QString str);
    bool OpenTheLogFile();
};

#endif // LOGFILE_H
