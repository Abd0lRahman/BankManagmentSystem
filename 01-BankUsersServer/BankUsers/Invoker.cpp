#include "Invoker.h"

Invoker::Invoker() {}

QString Invoker::execution(Command *command,QString str)
{
    return command->execute(str);
}
