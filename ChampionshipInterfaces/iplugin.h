#ifndef IPLUGIN_H
#define IPLUGIN_H

#include "championshipinterfaces_global.h"

#include <../ChampionshipManager/core.h>

#include "icore.h"

#include <QtCore/QObject>
#include <QtCore/QString>


class CHAMPIONSHIPINTERFACESSHARED_EXPORT IPlugin : public QObject
{
    //Q_OBJECT

public:
    IPlugin(QObject *parent = 0)  : QObject(parent) {}
    ~IPlugin() {}

    //IPlugin(QObject *parent = 0);
    //~IPlugin();

  //  virtual bool configure(Core *core) = 0;

    virtual bool initialize()  = 0;

    virtual QString name() = 0;

protected:
    QString _name;
};


Q_DECLARE_INTERFACE(IPlugin, "home.gabriel.ChampionshipInterfaces.IPlugin")

#endif // IPLUGIN_H

