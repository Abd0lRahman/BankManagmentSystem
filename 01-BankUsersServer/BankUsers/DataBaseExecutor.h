#ifndef DATABASEEXECUTOR_H
#define DATABASEEXECUTOR_H

#include <QObject>
#include <QFile>
#include <QDateTime>
#include <QRandomGenerator>

class DataBaseExecutor : public QObject
{
    Q_OBJECT
public:
    explicit DataBaseExecutor(QObject *parent = nullptr);
    QString TranslateTheString(QString &command);
signals:
};

#endif // DATABASEEXECUTOR_H
