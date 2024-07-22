#ifndef SERVICE_H
#define SERVICE_H

#include <windows.h>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QDebug>

class Service
{
public:
    Service();
    void RunTheService();
    void serviceCtrlHandler(DWORD request);
    int runTheApplication();

private:
    SERVICE_STATUS ServiceStatus;
    SERVICE_STATUS_HANDLE hStatus;

    QString getExecutablePath();
    QString getExecutableDirectory();
};
#endif // SERVICE_H
