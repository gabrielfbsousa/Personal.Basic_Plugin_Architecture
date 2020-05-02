#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include "champwindow.h"


class UiController
{
public:
    UiController();

    void setMainMenuButton(QPushButton *buttonToAdd);
    void setToolBarButton(QPushButton *buttonToAdd);

    ChampWindow *m_mainWindow;
};

#endif // UICONTROLLER_H
