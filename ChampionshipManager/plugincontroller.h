#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <../ChampionshipInterfaces/iplugincontroller.h>
#include <../ChampionshipInterfaces/iplugin.h>

#include "core.h"


#include <QList>


class PluginController : public IPluginController
{
public:
    PluginController(Core *core);
    virtual QList<IPlugin *> *loadedPlugins() const;
private:
    QList<IPlugin *> *m_plugins;
};


#endif // PLUGINCONTROLLER_H
