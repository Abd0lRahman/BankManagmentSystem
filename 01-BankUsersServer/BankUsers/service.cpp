#include <service.h>
#include <Server.h>
void WINAPI ServiceMain(DWORD argc, LPTSTR* argv);
void WINAPI ServiceCtrlHandler(DWORD request);
Service::Service()
{

}

void Service::RunTheService()
{
    SERVICE_TABLE_ENTRY ServiceTable[2];
    ServiceTable[0].lpServiceName = const_cast<LPWSTR>(L"MyQtService");
    ServiceTable[0].lpServiceProc = (LPSERVICE_MAIN_FUNCTION)ServiceMain;
    ServiceTable[1].lpServiceName = NULL;
    ServiceTable[1].lpServiceProc = NULL;
    StartServiceCtrlDispatcher(ServiceTable);
}


void Service::serviceCtrlHandler(DWORD request)
{

}

QString Service::getExecutablePath()
{
    TCHAR buffer[MAX_PATH];
    GetModuleFileName(NULL, buffer, MAX_PATH);
    return QString::fromWCharArray(buffer);
}

QString Service::getExecutableDirectory()
{
    QString path = getExecutablePath();
    QFileInfo fileInfo(path);
    return fileInfo.absolutePath();
}

int Service::runTheApplication()
{
    int argc = 0;
    char** argv = nullptr;
    QCoreApplication app(argc, argv);
    QString workingDirectory = getExecutableDirectory();
    QDir::setCurrent(workingDirectory);
    Server server;
    server.StartServer();

    return app.exec();
}

void WINAPI ServiceMain()
{
    ServiceStatus.dwServiceType = SERVICE_WIN32;
    ServiceStatus.dwCurrentState = SERVICE_START_PENDING;
    ServiceStatus.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_SHUTDOWN;
    ServiceStatus.dwWin32ExitCode = 0;
    ServiceStatus.dwServiceSpecificExitCode = 0;
    ServiceStatus.dwCheckPoint = 0;
    ServiceStatus.dwWaitHint = 0;

    hStatus = RegisterServiceCtrlHandler(_T("MyQtService"), ServiceCtrlHandler);
    if (hStatus == (SERVICE_STATUS_HANDLE)0) {
        return;
    }

    // Initialize service status
    ServiceStatus.dwCurrentState = SERVICE_RUNNING;
    SetServiceStatus(hStatus, &ServiceStatus);

    Service s;
    s.runTheApplication();
}

void WINAPI ServiceCtrlHandler(DWORD request)
{
    switch (request) {
    case SERVICE_CONTROL_STOP:
    case SERVICE_CONTROL_SHUTDOWN:
        ServiceStatus.dwWin32ExitCode = 0;
        ServiceStatus.dwCurrentState = SERVICE_STOPPED;
        SetServiceStatus(hStatus, &ServiceStatus);
        return;

    default:
        break;
    }

    SetServiceStatus(hStatus, &ServiceStatus);
}
