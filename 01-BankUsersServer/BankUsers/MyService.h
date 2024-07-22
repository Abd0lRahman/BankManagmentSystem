#ifndef MYSERVICE_H
#define MYSERVICE_H

#include <QObject>

#include <QtService/service.h>

class MyService : public QtService::Service
{
    Q_OBJECT
public:
    explicit MyService(int &argc, char **argv); //the reference here is important!
protected:
    CommandResult onStart() override;
    CommandResult onStop(int &exitCode) override;
    CommandResult onPause() override;
    CommandResult onResume() override;

signals:
};

#endif // MYSERVICE_H
