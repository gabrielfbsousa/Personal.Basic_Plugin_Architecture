#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QScrollArea>
#include <QPushButton>

class UiController;

namespace Ui {
class MainWindow;
}

class MainWindow : public QScrollArea
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    void setMainMenuButton(QPushButton *buttonToAdd);
    void setToolBarButton(QPushButton *buttonToAdd);
    //void showUi();
private:

};

#endif // MAINWINDOW_H
