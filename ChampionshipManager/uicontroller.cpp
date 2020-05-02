#include "uicontroller.h"

UiController::UiController()
{
    m_mainWindow = new ChampWindow();
}


void UiController::setMainMenuButton(QPushButton *buttonToAdd){
    m_mainWindow->setMainMenuButton(buttonToAdd);
}

void UiController::setToolBarButton(QPushButton *buttonToAdd){
    m_mainWindow->setToolBarButton(buttonToAdd);
}
