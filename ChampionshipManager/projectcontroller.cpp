#include "projectcontroller.h"

#include "core.h"

#include "uicontroller.h"

ProjectController::ProjectController(UiController *controller)
{


    //core->uiController()->setMainMenuButton();
    QPixmap bkgnd("/home/gabriel/Documentos/Championship Manager/ChampionshipManager/Resources/fifabackground.png");
         //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
         QPalette palette;
         palette.setBrush(QPalette::Background, bkgnd);
         controller->m_mainWindow->setPalette(palette);

         QPixmap pixmap("/home/gabriel/Documentos/Championship Manager/ChampionshipManager/Resources/newplayer.png");
         QIcon ic(pixmap);

         QPushButton *button = new QPushButton;

         button->setIcon(ic);
         button->setIconSize(pixmap.rect().size());
         button->setFixedSize(pixmap.rect().size());

         //setMainMenuButton(button);
         //controller->uiController()->setMainMenuButton(button);
        controller->setMainMenuButton(button);

         QPushButton *homeButton = new QPushButton();
         QPixmap map("/home/gabriel/Documentos/Championship Manager/ChampionshipManager/Resources/home.png");
         QIcon ic3(map);

         homeButton->setFixedSize(ic.actualSize(ic3.availableSizes().first()));//never larger than ic.availableSizes().first()
         //homeButton->setText("");
         homeButton->setIcon(ic3);
         homeButton->setFlat(true);
         homeButton->setIconSize(QSize(110,28));
         homeButton->setBaseSize(QSize(154,28));

         //setToolBarButton(homeButton);
         //controller->uiController()->setToolBarButton(homeButton);
        controller->setToolBarButton(homeButton);

         QPushButton *playerButton = new QPushButton();
         QPixmap map2("/home/gabriel/Documentos/Championship Manager/ChampionshipManager/Resources/player18.png");
         QIcon ic4(map);
         playerButton->setIcon(ic4);
         playerButton->setIconSize(pixmap.rect().size());
         playerButton->setFixedSize(pixmap.rect().size());

         //setToolBarButton(playerButton);
         //controller->uiController()->setToolBarButton(button);
        //controller->setToolBarButton(playerButton);
}
