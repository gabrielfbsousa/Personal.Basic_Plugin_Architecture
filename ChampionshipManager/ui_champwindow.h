/********************************************************************************
** Form generated from reading UI file 'champwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAMPWINDOW_H
#define UI_CHAMPWINDOW_H

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

class Ui_ChampWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChampWindow)
    {
        if (ChampWindow->objectName().isEmpty())
            ChampWindow->setObjectName(QStringLiteral("ChampWindow"));
        ChampWindow->resize(800, 600);
        centralwidget = new QWidget(ChampWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 100, 761, 471));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 761, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ChampWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ChampWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChampWindow->setStatusBar(statusbar);

        retranslateUi(ChampWindow);

        QMetaObject::connectSlotsByName(ChampWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChampWindow)
    {
        ChampWindow->setWindowTitle(QApplication::translate("ChampWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ChampWindow: public Ui_ChampWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAMPWINDOW_H
