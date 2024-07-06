#include "DataBase.h"
#include <QSqlError>
#include <QCoreApplication>
#include <QSqlQueryModel>

void DataBase::CloseDataBase()
{
    db.close();

}
DataBase::DataBase(QObject *parent)
    : QObject{parent}
{
    db.setDatabaseName(dbPath);
}

bool DataBase::OpenDatabase()
{
    if (!db.open())
    {
        qDebug() << "Error: connection with database failed";
        return false;
    }
    else
    {
        qDebug() << "Database: connection ok";
        return true;
    }
}

QString DataBase::InsertARawInDataBase(QString tablename, QString valuesinorder)
{
    QString success = "";
    qDebug()<< tablename +'\n'+ valuesinorder.split(" ")[0]+"\n"+valuesinorder.split(" ")[1]+"\n"+valuesinorder.split(" ")[2] + valuesinorder.split(" ")[3]+"\n"+valuesinorder.split(" ")[4]+"\n"+valuesinorder.split(" ")[5]+"\n"+valuesinorder.split(" ")[6],valuesinorder.split(" ")[7]+"\n"+valuesinorder.split(" ")[8]+"\n"+valuesinorder.split(" ")[9]+"\n"+valuesinorder.split(" ")[10]+"\n"+valuesinorder.split(" ")[11]+"\n"+valuesinorder.split(" ")[12]+"\n";
    query.prepare((QString("INSERT INTO %1 VALUES (\"%2\",\"%3\",\"%4\",\"%5\",\"%6\",\"%7\",\"%8\",\"%9\",\"%10\",\"%11\",\"%12\",\"%13\");").arg(tablename,valuesinorder.split(" ")[0],valuesinorder.split(" ")[1],valuesinorder.split(" ")[2] + valuesinorder.split(" ")[3],valuesinorder.split(" ")[4],valuesinorder.split(" ")[5],valuesinorder.split(" ")[6],valuesinorder.split(" ")[7],valuesinorder.split(" ")[8],valuesinorder.split(" ")[9],valuesinorder.split(" ")[10],valuesinorder.split(" ")[11],valuesinorder.split(" ")[12])).toUtf8());
    if (query.exec())
    {
        success = "DONE";
    }
    else
    {
        qDebug() << "Insert in data base is failed: " << query.lastError();
    }

    return success;
}

QString DataBase::UpdateDataBase(QString tablename,QString columnname, QString newvalue, QString staticolumnname, QString valueofstaticcolumnname)
{
    QString success = "";
    query.prepare((QString("UPDATE %1 SET %2 = \"%3\" WHERE %4 = \"%5\"").arg(tablename,columnname,newvalue,staticolumnname,valueofstaticcolumnname)).toUtf8());
    if (query.exec())
    {
        success = "DONE";
    }
    else
    {
        qDebug() << "update in data base is failed: " << query.lastError();
    }

    return success;
}

QString DataBase::DeleteFromDataBase(QString tablename,QString columnname1, QString columnvalue1, QString staticolumnname2="", QString valueofstaticcolumnname2="")
{
    QString success = "";
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

    return success;
}

QString DataBase::GetValueFromDataBase(QString tablename, QString columnname, QString staticolumnname, QString valueofstaticcolumnname)
{
    QString result = "false";
    query.prepare((QString("SELECT %1 from %2 WHERE %4 = \"%5\"").arg(columnname,tablename,staticolumnname,valueofstaticcolumnname)).toUtf8());
    if (query.exec())
    {
        query.first();
        result = query.value(0).toString();
    }
    else
    {
        qDebug() << "Get value from data base failed: " << query.lastError();
    }

    return result;
}
QString DataBase::GetValueFromDataBase(QString tablename, QString columnname, QString staticolumnname, QString valueofstaticcolumnname , QString staticolumnname2, QString valueofstaticcolumnname2)
{
    QString result = "";
    query.prepare((QString("SELECT %1 from %2 WHERE %3 = \"%4\" and %5 =\"%6\"").arg(columnname,tablename,staticolumnname,valueofstaticcolumnname,staticolumnname2,valueofstaticcolumnname2)).toUtf8());
    if (query.exec())
    {
        query.first();
        result = query.value(0).toString();
    }
    else
    {
        qDebug() << "Get value from data base failed: " << query.lastError();
    }

    return result;
}

QString DataBase::GetTableFromDataBase(QString tablename, QString columnname, QString value)
{
    QString result = "";
    QSqlQueryModel* model = new QSqlQueryModel();

    if(columnname == "")
        query.prepare((QString("SELECT * from %1").arg(tablename)).toUtf8());
    else
        query.prepare((QString("SELECT * from %1 WHERE %2 = \"%3\"").arg(tablename,columnname,value)).toUtf8());

    query.exec();
    model->setQuery(query);

    int rowCount = model->rowCount();
    int columnCount = model->columnCount();

    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QVariant data = model->data(model->index(row, col));
            result += data.toString();
            if (col < columnCount - 1) {
                result += ", ";  // Add a delimiter between columns
            }
        }
        result += "\n";  // Add a newline at the end of each row
    }

    return result;
}
DataBase::~DataBase() {
    db.close();

}
