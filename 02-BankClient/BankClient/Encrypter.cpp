#include "Encrypter.h"

Encrypter::Encrypter(QObject *parent)
    : QObject{parent}
{}

void Encrypter::Encrypt(QString &data)
{
    QString TheString = "";
    int index=0;
    for(auto i:data)
    {
        index++;
        TheString.append(QChar(i.unicode()+index));
        if(index == 3)
            index=0;
    }
    data = TheString;
}

void Encrypter::Decrypt(QString &data)
{
    QString TheString = "";
    int index=0;
    for(auto i:data)
    {
        index++;
        TheString.append(QChar(i.unicode()-index));
        if(index == 3)
            index=0;
    }
    data = TheString;
}
