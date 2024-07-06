#ifndef DATABASEEXECUTOR_H
#define DATABASEEXECUTOR_H

#include <QObject>
#include "DataBase.h"

class DataBaseExecutor : public QObject
{
    Q_OBJECT
public:
    explicit DataBaseExecutor(QObject *parent = nullptr);
    QString ExecuteCommand(QString &command);
private:
    DataBase DB;
signals:
};

#endif // DATABASEEXECUTOR_H
