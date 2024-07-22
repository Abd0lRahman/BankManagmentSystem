#include "MIPFile.h"
#include "qdebug.h"

MIPFile::MIPFile()
{
    MIPfile.setFileName("00-MIP.txt");
    MIP.setDevice(&MIPfile);
}

void MIPFile::closeTheMIPFile()
{
    MIPfile.close();
}

bool MIPFile::OpenTheMIPFile()
{
    if(!MIPfile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Can't open the MIP file";
        return false;
    }
    else
        return true;
}

QString MIPFile::ReadTheMIPFile()
{
    return MIP.readAll();
}
