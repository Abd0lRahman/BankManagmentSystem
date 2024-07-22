#ifndef MIPFILE_H
#define MIPFILE_H
#include <QString>
#include <QFile>
#include<QTextStream>
class MIPFile
{
private:
    QFile MIPfile;
    QTextStream MIP;
public:
    MIPFile();
    void closeTheMIPFile();
    bool OpenTheMIPFile();
    QString ReadTheMIPFile();
};

#endif // MIPFILE_H
