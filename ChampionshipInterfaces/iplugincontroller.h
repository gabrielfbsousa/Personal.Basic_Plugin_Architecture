#ifndef IPLUGINCONTROLLER_H
#define IPLUGINCONTROLLER_H

#include <QList>

#include <../ChampionshipInterfaces/iplugin.h>

#include "championshipinterfaces_global.h"

class CHAMPIONSHIPINTERFACESSHARED_EXPORT IPluginController
{

public:
    IPluginController() {}
    virtual QList<IPlugin *> *loadedPlugins() const = 0;
};


#endif // IPLUGINCONTROLLER_H
