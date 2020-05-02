#ifndef CORE_H
#define CORE_H

#include <../ChampionshipManager/championshipmanager.h>
#include <../ChampionshipManager/uicontroller.h>
#include <../ChampionshipManager/projectcontroller.h>

//#include "projectcontroller.h"


class IUIController;
class IPluginController;
class ProjectController;

class Core
{
public:
    Core(int argc, char *argv[]);
    virtual IPluginController *pluginController() const;
    virtual UiController *uiController() const;

    IPluginController *m_pluginController;
    UiController *m_uiController;
    ProjectController *m_projectController;

//private:

};

#endif // CORE_H
