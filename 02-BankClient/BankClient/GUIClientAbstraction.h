#ifndef GUICLIENTABSTRACTION_H
#define GUICLIENTABSTRACTION_H

#include <QObject>

class GUIClientAbstraction : public QObject
{
    Q_OBJECT
public:
    explicit GUIClientAbstraction(QObject *parent = nullptr);

signals:
};

#endif // GUICLIENTABSTRACTION_H
