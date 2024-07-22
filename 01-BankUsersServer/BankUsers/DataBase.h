#ifndef DATABASE_H
#define DATABASE_H

#include "qsqlquerymodel.h"
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCoreApplication>

class DataBase : public QObject
{
    Q_OBJECT
private:
    QString dbPath = QCoreApplication::applicationDirPath() +"/BankDataBase.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","ThreadConnection");
public:
    DataBase(QObject *parent = nullptr);

    bool OpenDatabase();
    void CloseDataBase();

    QString InsertARawInDataBase11Index(QString tablename, QString valuesinorder);
    QString InsertARawInDataBase3Index(QString tablename, QString valuesinorder);

    QString UpdateDataBase(QString tablename, QString columnname,
                           QString newvalue, QString staticolumnname,
                           QString valueofstaticcolumnname,
                           QString staticolumnname2 = "",
                           QString valueofstaticcolumnname2 = "");
    QString DeleteFromDataBase(QString tablename, QString columnname1,
                               QString columnvalue1,
                               QString staticolumnname2 = "",
                               QString valueofstaticcolumnname2 = "");
    QString GetValueFromDataBase(QString tablename, QString columnname,
                                 QString staticolumnname,
                                 QString valueofstaticcolumnname);
    QString GetValueFromDataBase(QString tablename, QString columnname,
                                 QString staticolumnname,
                                 QString valueofstaticcolumnname,
                                 QString staticolumnname2,
                                 QString valueofstaticcolumnname2);
    QString GetTableFromDataBase(QString tablename, QString columnname = "",
                                 QString value = "", QString tableNname = "",
                                 QString count = "");
    ~DataBase();
};

#endif // DATABASE_H
