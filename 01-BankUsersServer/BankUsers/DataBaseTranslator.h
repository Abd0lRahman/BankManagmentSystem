#ifndef DATABASETRANSLATOR_H
#define DATABASETRANSLATOR_H

#include "DataBase.h"
class DataBaseTranslator
{
public:
    DataBaseTranslator();
public slots:
    bool ExecuteTheRequest(QString& content);
private:
    DataBase DB;
};

#endif // DATABASETRANSLATOR_H
