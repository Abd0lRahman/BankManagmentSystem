#include "DataBase.h"
#include <QSqlError>
#include <QCoreApplication>
#include <QSqlQueryModel>


DataBase::DataBase(QObject *parent)
    : QObject{parent}
{}

bool DataBase::OpenDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qWarning() << "Failed to open database:" << db.lastError().text();
        return false;
    }

    return true;
}

QString DataBase:: InsertARawInDataBase11Index(QString tablename, QString valuesinorder)
{
    QStringList valuesList = valuesinorder.split('$');
    QSqlQuery query(db);
    // Ensure there are at least 11 values, filling with NULL if necessary
    while (valuesList.size() < 10)
    {
        valuesList.append("NULL");
    }

    // Prepare the SQL insert query
    QString queryString = QString("INSERT INTO %1 VALUES (:value1, :value2, :value3, :value4, :value5, :value6, :value7, :value8, :value9, :value10)").arg(tablename);

    query.prepare(queryString);

    // Bind values to the query
    for (int i = 0; i < 10; ++i)
    {
        query.bindValue(":value" + QString::number(i + 1), valuesList.at(i));
    }

    // Execute the query
    if (!query.exec())
    {
        qDebug() << "Insert failed: " << query.lastError();
        return "";
    }
    query.finish();
    return "DONE";
}

QString DataBase::InsertARawInDataBase3Index(QString tablename, QString valuesinorder)
{
    QStringList valuesList = valuesinorder.split('$');
    QSqlQuery query(db);
    // Ensure there are at least 11 values, filling with NULL if necessary
    while (valuesList.size() < 3)
    {
        valuesList.append("NULL");
    }

    // Prepare the SQL insert query
    QString queryString = QString("INSERT INTO %1 VALUES (:value1, :value2, :value3)").arg(tablename);

    query.prepare(queryString);

    // Bind values to the query
    for (int i = 0; i < 3; ++i)
    {
        query.bindValue(":value" + QString::number(i + 1), valuesList.at(i));
    }

    // Execute the query
    if (!query.exec())
    {
        qDebug() << "Insert failed: " << query.lastError();
        return "";
    }
    query.finish();
    return "DONE";
}


QString DataBase::UpdateDataBase(QString tablename,QString columnname, QString newvalue, QString staticolumnname, QString valueofstaticcolumnname, QString staticolumnname2, QString valueofstaticcolumnname2)
{
    QString success = "";
    QSqlQuery query(db);
    if(staticolumnname2 == "")
    {
        query.prepare((QString("UPDATE %1 SET %2 = \"%3\" WHERE %4 = \"%5\"").arg(tablename,columnname,newvalue,staticolumnname,valueofstaticcolumnname)).toUtf8());
    }
    else
    {
        query.prepare((QString("UPDATE %1 SET %2 = \"%3\" WHERE %4 = \"%5\" and %6 = \"%7\" ").arg(tablename,columnname,newvalue,staticolumnname,valueofstaticcolumnname,staticolumnname2,valueofstaticcolumnname2)).toUtf8());
    }
    if (query.exec())
    {
        success = "DONE";
    }
    else
    {
        qDebug() << "update in data base is failed: " << query.lastError();
    }
    query.finish();
    return success;
}

QString DataBase::DeleteFromDataBase(QString tablename,QString columnname1, QString columnvalue1, QString staticolumnname2, QString valueofstaticcolumnname2)
{
    QString success = "";
    QSqlQuery query(db);
    if(staticolumnname2 == "")
        query.prepare((QString("DELETE FROM %1 WHERE %2 = \"%3\"").arg(tablename,columnname1,columnvalue1)).toUtf8());
    else
        query.prepare((QString("DELETE FROM %1 WHERE %2 = \"%3\" and %4 = \"%5\"").arg(tablename,columnname1,columnvalue1,staticolumnname2,valueofstaticcolumnname2)).toUtf8());
    if (query.exec())
    {
        success = "DONE";
    }
    else
    {
        qDebug() << "Delete from data base is failed: " << query.lastError();
    }
    query.finish();
    return success;
}

QString DataBase::GetValueFromDataBase(QString tablename, QString columnname, QString staticolumnname, QString valueofstaticcolumnname)
{
    QString result = "";
    QSqlQuery query(db);
    if (query.exec((QString("SELECT %1 from %2 WHERE %4 = \"%5\"").arg(columnname,tablename,staticolumnname,valueofstaticcolumnname)).toUtf8()))
    {
        query.first();
        result = query.value(0).toString();
    }
    else
    {
        qDebug() << "Get value from data base failed: " << query.lastError();
    }
    query.finish();
    return result;
}
QString DataBase::GetValueFromDataBase(QString tablename, QString columnname, QString staticolumnname, QString valueofstaticcolumnname , QString staticolumnname2, QString valueofstaticcolumnname2)
{
    QString result = "";
    QSqlQuery query(db);
    if (query.exec((QString("SELECT %1 from %2 WHERE %3 = \"%4\" and %5 =\"%6\"").arg(columnname,tablename,staticolumnname,valueofstaticcolumnname,staticolumnname2,valueofstaticcolumnname2)).toUtf8()))
    {
        query.first();
        result = query.value(0).toString();
    }
    else
    {
        qDebug() << "Get value from data base failed: " << query.lastError();
    }
    query.finish();
    return result;
}

QString DataBase::GetTableFromDataBase(QString tablename, QString columnname, QString value, QString tableNname ,QString count)
{
    QString result = "";
    QSqlQuery query(db);
    QSqlQueryModel* model = new QSqlQueryModel();

    if(columnname == "")
        if(tableNname =="" )
            query.prepare((QString("SELECT * from %1 ORDER BY `Date` DESC").arg(tablename)).toUtf8());
        else
            query.prepare((QString("SELECT Date,AccountID from %1 ORDER BY `Date` DESC").arg(tablename)).toUtf8());
    else
        query.prepare((QString("SELECT * from %1 WHERE %2 = \"%3\" ORDER BY `Date` DESC").arg(tablename,columnname,value)).toUtf8());

    query.exec();
    model->setQuery(query);
    int rowCount = model->rowCount();
    int columnCount = model->columnCount();
    if(count == "")
        count = QString::number(rowCount);

    for (int row = 0; row < rowCount && row < count.toInt(); ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QVariant data = model->data(model->index(row, col));
            result += data.toString();
            if (col < columnCount - 1) {
                result += ", ";  // Add a delimiter between columns
            }
        }
        result += "\n";  // Add a newline at the end of each row
    }
    query.finish();
    return result;
}
DataBase::~DataBase() {
    if (QSqlDatabase::contains("ThreadConnection"))
    {
        QSqlDatabase::removeDatabase("ThreadConnection");
    }

    db.close();
    QSqlDatabase::removeDatabase("ThreadConnection");
}
void DataBase::CloseDataBase()
{
    if (QSqlDatabase::contains("ThreadConnection"))
    {
        QSqlDatabase::removeDatabase("ThreadConnection");
    }
    db.close();
    QSqlDatabase::removeDatabase("ThreadConnection");
}
