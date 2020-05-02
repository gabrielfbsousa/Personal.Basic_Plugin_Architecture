#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setMainMenuButton(QPushButton *buttonToAdd){
    ui->formLayout->addWidget(buttonToAdd);
}

void MainWindow::setToolBarButton(QPushButton *buttonToAdd){
    ui->horizontalLayout->addWidget(buttonToAdd);
}
