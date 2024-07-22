#ifndef INVOKER_H
#define INVOKER_H
#include <Command.h>
class Invoker
{
public:
    Invoker();
    QString execution(Command* command, QString str);
};
#endif // INVOKER_H
