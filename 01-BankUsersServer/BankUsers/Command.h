#ifndef COMMAND_H
#define COMMAND_H
#include <QString>

class Command
{
public:
    virtual QString execute(QString)=0;
};

#endif // COMMAND_H
