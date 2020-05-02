#include "newplayerplugin.h"

#include <QDebug>




NewPlayerPlugin::NewPlayerPlugin(QObject *parent) :
    IPlugin(parent)
{
}

/*
bool NewPlayerPlugin::configure(Core *core){
    this->m_core = core;
}*/

bool NewPlayerPlugin::initialize()
{
    qDebug()<<"Plugin Carregado...";

    /*
    //ChampionshipManager *auxiliar = core->uiManager();

   QPixmap pixmap("/home/gabriel/Documentos/Championship Manager/NewPlayerPlugin/Resources/newplayer.png");
   QIcon ic(pixmap);

   QPushButton *button = new QPushButton;

   button->setIcon(ic);
   button->setIconSize(pixmap.rect().size());
   button->setFixedSize(pixmap.rect().size());

   //core->uiManager()->setMainMenuButton(button);

    core->m_uiManager->teste();
    //core->m_uiManager->setMainMenuButton(button);
    //core->m_uiManager->setToolBarButton(button);
    //core->uiManager()->setMainMenuButton(button);
     */

    return true;
}


QString NewPlayerPlugin::name(){
    return "Plugin de Player";
}

NewPlayerPlugin::~NewPlayerPlugin(){

}



