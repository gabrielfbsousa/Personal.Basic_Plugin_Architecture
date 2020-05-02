#ifndef NEWPLAYERPLUGIN_H
#define NEWPLAYERPLUGIN_H

//# define Q_PLUGIN_METADATA(x)

#include "newplayerplugin_global.h"


#include <../ChampionshipInterfaces/iplugin.h>
//#include <../ChampionshipManager/core.h>

QT_BEGIN_NAMESPACE

class NewPlayerPlugin : public IPlugin
{

    Q_OBJECT


    Q_PLUGIN_METADATA(IID "org.qt.ChampionshipInterfaces.IPlugin" FILE "NewPlayerPlugin.json")

    Q_INTERFACES(IPlugin)


public:
    NewPlayerPlugin(QObject *parent = 0);

    virtual ~NewPlayerPlugin();
   // virtual bool configure(Core *core);
    virtual bool initialize();
    QString name();

   // Core m_core;

};
QT_END_NAMESPACE

#endif // NEWPLAYERPLUGIN_H
