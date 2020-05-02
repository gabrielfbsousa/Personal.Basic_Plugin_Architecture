#ifndef ICHAMPIONSHIPPLUGIN_H
#define ICHAMPIONSHIPPLUGIN_H

#include "championshipinterfaces_global.h"

#include <QtCore/QObject>
#include <QGenericPlugin>

class ICore;

class CHAMPIONSHIPINTERFACESSHARED_EXPORT  IChampionshipPlugin : public QGenericPlugin
{
public:
    IChampionshipPlugin(QGenericPlugin *parent = 0) : QGenericPlugin(parent) {}
    ~IChampionshipPlugin() {}
    virtual bool initialize(ICore *core) = 0;
    virtual QString menuType() {}
};

Q_DECLARE_INTERFACE(IChampionshipPlugin, "org.qt.ChampionshipInterfaces.IChampionshipPlugin")



#endif // ICHAMPIONSHIPPLUGIN_H
