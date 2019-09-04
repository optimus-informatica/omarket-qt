/********************************************************************************
** Form generated from reading UI file 'mainframe.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFRAME_H
#define UI_MAINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFrame
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuProdutos;
    QMenu *menuProdutos_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainFrame)
    {
        if (MainFrame->objectName().isEmpty())
            MainFrame->setObjectName(QString::fromUtf8("MainFrame"));
        MainFrame->resize(710, 405);
        centralWidget = new QWidget(MainFrame);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainFrame->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainFrame);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 710, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuProdutos = new QMenu(menuBar);
        menuProdutos->setObjectName(QString::fromUtf8("menuProdutos"));
        menuProdutos_2 = new QMenu(menuBar);
        menuProdutos_2->setObjectName(QString::fromUtf8("menuProdutos_2"));
        MainFrame->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainFrame);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainFrame->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainFrame);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainFrame->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuProdutos->menuAction());
        menuBar->addAction(menuProdutos_2->menuAction());

        retranslateUi(MainFrame);

        QMetaObject::connectSlotsByName(MainFrame);
    } // setupUi

    void retranslateUi(QMainWindow *MainFrame)
    {
        MainFrame->setWindowTitle(QCoreApplication::translate("MainFrame", "Optimus Makert - 1.0-beta", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainFrame", "Arquivo", nullptr));
        menuProdutos->setTitle(QCoreApplication::translate("MainFrame", "Usuarios", nullptr));
        menuProdutos_2->setTitle(QCoreApplication::translate("MainFrame", "Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainFrame: public Ui_MainFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
