/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJava;
    QAction *actionPython;
    QAction *actionJavaScript;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuLanguages;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QString::fromUtf8("actionC"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Image/c-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionC->setIcon(icon);
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QString::fromUtf8("actionJava"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Image/java.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJava->setIcon(icon1);
        actionPython = new QAction(MainWindow);
        actionPython->setObjectName(QString::fromUtf8("actionPython"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Image/python.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPython->setIcon(icon2);
        actionJavaScript = new QAction(MainWindow);
        actionJavaScript->setObjectName(QString::fromUtf8("actionJavaScript"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Image/js.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJavaScript->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        menubar->setFont(font);
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(false);
        menuLanguages = new QMenu(menubar);
        menuLanguages->setObjectName(QString::fromUtf8("menuLanguages"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuLanguages->menuAction());
        menuLanguages->addAction(actionC);
        menuLanguages->addAction(actionJava);
        menuLanguages->addAction(actionPython);
        menuLanguages->addAction(actionJavaScript);
        menuLanguages->addSeparator();
        menuLanguages->addSeparator();
        toolBar->addAction(actionC);
        toolBar->addAction(actionJava);
        toolBar->addAction(actionPython);
        toolBar->addAction(actionJavaScript);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QCoreApplication::translate("MainWindow", "C++", nullptr));
        actionJava->setText(QCoreApplication::translate("MainWindow", "Java", nullptr));
        actionPython->setText(QCoreApplication::translate("MainWindow", "Python", nullptr));
        actionJavaScript->setText(QCoreApplication::translate("MainWindow", "JavaScript", nullptr));
        menuLanguages->setTitle(QCoreApplication::translate("MainWindow", "Languages", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
