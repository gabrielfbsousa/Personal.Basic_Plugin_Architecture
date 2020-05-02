#include "plugincontroller.h"

//#include <ChampionshipInterfaces/iplugin.h>

#include <../ChampionshipInterfaces/iplugin.h>

#include <QPluginLoader>
#include <QUrl>
#include <QDir>
#include <QList>
#include <QDebug>

#include "core.h"

#define IID


PluginController::PluginController(Core *core) : m_plugins(new QList<IPlugin *>)
{

        qDebug()<<"Loading plugins...";
        QDir currentDir("./plugins");
        //QDir currentDir("/home/gabriel/ChampionshipManager/plugins");
        qDebug()<<""<< currentDir.dirName();
        qDebug()<<""<< currentDir.absolutePath();

        IPlugin *iplugin = 0;


        foreach (QString plugin, currentDir.entryList(QDir::Files))
        {

            qDebug()<<"Found one plugin...";
            QPluginLoader loader(currentDir.absoluteFilePath(plugin));
            qDebug()<<"Found one plugin..."<<loader.fileName();
            bool isOk = loader.load();
            iplugin = dynamic_cast<IPlugin *>(loader.instance());
           // QObject *newplugin = loader.instance();

            qDebug()<<"Plugin confirmed...";



            if (iplugin)
            {
                qDebug()<<"Beggining to load the plugin...";
                //iplugin->configure(core);
                iplugin->initialize();
                m_plugins->append(iplugin);
                qDebug()<<"Loaded a new plugins...";
            }

        }



}

QList<IPlugin *> *PluginController::loadedPlugins() const
{
    return m_plugins;
}


