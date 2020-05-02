#ifndef CHAMPWINDOW_H
#define CHAMPWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class ChampWindow;
}

class ChampWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChampWindow(QWidget *parent = 0);
    ~ChampWindow();

    void setMainMenuButton(QPushButton *buttonToAdd);
    void setToolBarButton(QPushButton *buttonToAdd);

private:
    Ui::ChampWindow *ui;
};

#endif // CHAMPWINDOW_H
