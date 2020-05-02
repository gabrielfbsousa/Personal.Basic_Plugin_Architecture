#include "core.h"
#include "championshipmanager.h"
#include <QApplication>
#include <championshipmanager.h>

#include "plugincontroller.h"
#include "uicontroller.h"
#include "projectcontroller.h"

#include "champwindow.h"

Core::Core(int argc, char *argv[]){
    QApplication a(argc, argv);

    m_pluginController = new PluginController(this);
    m_uiController = new UiController();
    m_projectController = new ProjectController(m_uiController);

    m_uiController->m_mainWindow->show();

    a.exec();
}

UiController *Core::uiController() const
{
    return m_uiController;
}

IPluginController *Core::pluginController() const
{
    return m_pluginController;
}
