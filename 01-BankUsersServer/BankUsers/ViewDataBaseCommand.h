#ifndef VIEWDATABASECOMMAND_H
#define VIEWDATABASECOMMAND_H
#include "Command.h"
#include "DataBase.h"
#include "LogFile.h"
class ViewDataBaseCommand:public Command
{
private:
    DataBase DB;
    LogFile logfile;
public:
    ViewDataBaseCommand();
    QString execute(QString string)override;
};

#endif // VIEWDATABASECOMMAND_H
