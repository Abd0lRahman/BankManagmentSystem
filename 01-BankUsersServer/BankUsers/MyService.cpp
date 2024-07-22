#include "MyService.h"

#include <QTimer>
MyService::MyService(int &argc, char **argv)
    : Service{argc, argv}
{

}

QtService::Service::CommandResult MyService::MyService::onStart()
{
    qDebug() << "Service was started";

    return QtService::Service::CommandResult::Completed; //service is now assumed started
}


QtService::Service::CommandResult MyService::onStop(int &exitCode)
{
    qDebug() << "Stop received";
    // do some complicated stopping stuff asynchronously that takes some time...
    QTimer::singleShot(3000, this, [this](){
        emit stopped(EXIT_SUCCESS);
    });
    return QtService::Service::CommandResult::Completed; // service is still stopping until "stopped" has been emitted
}

QtService::Service::CommandResult MyService::onPause()
{

}

QtService::Service::CommandResult MyService::onResume()
{

}
