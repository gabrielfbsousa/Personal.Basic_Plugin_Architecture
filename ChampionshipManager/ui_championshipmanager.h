/********************************************************************************
** Form generated from reading UI file 'championshipmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAMPIONSHIPMANAGER_H
#define UI_CHAMPIONSHIPMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChampionshipManager
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChampionshipManager)
    {
        if (ChampionshipManager->objectName().isEmpty())
            ChampionshipManager->setObjectName(QStringLiteral("ChampionshipManager"));
        ChampionshipManager->resize(685, 385);
        centralWidget = new QWidget(ChampionshipManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 70, 631, 291));
        formLayoutWidget = new QWidget(widget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 631, 291));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 631, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ChampionshipManager->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ChampionshipManager);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ChampionshipManager->setStatusBar(statusBar);

        retranslateUi(ChampionshipManager);

        QMetaObject::connectSlotsByName(ChampionshipManager);
    } // setupUi

    void retranslateUi(QMainWindow *ChampionshipManager)
    {
        ChampionshipManager->setWindowTitle(QApplication::translate("ChampionshipManager", "ChampionshipManager", 0));
    } // retranslateUi

};

namespace Ui {
    class ChampionshipManager: public Ui_ChampionshipManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAMPIONSHIPMANAGER_H
