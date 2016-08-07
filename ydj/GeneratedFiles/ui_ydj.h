/********************************************************************************
** Form generated from reading UI file 'ydj.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YDJ_H
#define UI_YDJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ydjClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ydjClass)
    {
        if (ydjClass->objectName().isEmpty())
            ydjClass->setObjectName(QStringLiteral("ydjClass"));
        ydjClass->resize(1024, 768);
        centralWidget = new QWidget(ydjClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ydjClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ydjClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 23));
        ydjClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ydjClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ydjClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ydjClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ydjClass->setStatusBar(statusBar);

        retranslateUi(ydjClass);

        QMetaObject::connectSlotsByName(ydjClass);
    } // setupUi

    void retranslateUi(QMainWindow *ydjClass)
    {
        ydjClass->setWindowTitle(QApplication::translate("ydjClass", "ydj", 0));
    } // retranslateUi

};

namespace Ui {
    class ydjClass: public Ui_ydjClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YDJ_H
