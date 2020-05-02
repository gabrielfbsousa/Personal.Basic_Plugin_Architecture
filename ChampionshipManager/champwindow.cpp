#include "champwindow.h"
#include "ui_champwindow.h"

ChampWindow::ChampWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChampWindow)
{
    ui->setupUi(this);
}

ChampWindow::~ChampWindow()
{
    delete ui;
}

void ChampWindow::setMainMenuButton(QPushButton *buttonToAdd){
    ui->formLayout->addWidget(buttonToAdd);
}

void ChampWindow::setToolBarButton(QPushButton *buttonToAdd){
    ui->horizontalLayout->addWidget(buttonToAdd);
}
