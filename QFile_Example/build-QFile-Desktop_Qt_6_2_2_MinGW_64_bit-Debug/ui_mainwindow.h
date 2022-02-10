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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Create;
    QPushButton *pushButton_Open;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Write;
    QPushButton *pushButton_Read;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(150, -1, 140, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout->setItem(2, QFormLayout::LabelRole, horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        pushButton_Create = new QPushButton(centralwidget);
        pushButton_Create->setObjectName(QString::fromUtf8("pushButton_Create"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Create->sizePolicy().hasHeightForWidth());
        pushButton_Create->setSizePolicy(sizePolicy);
        pushButton_Create->setMinimumSize(QSize(180, 0));
        QFont font1;
        font1.setPointSize(10);
        pushButton_Create->setFont(font1);

        gridLayout->addWidget(pushButton_Create, 0, 1, 1, 1);

        pushButton_Open = new QPushButton(centralwidget);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));
        pushButton_Open->setFont(font1);

        gridLayout->addWidget(pushButton_Open, 0, 0, 1, 1);


        formLayout->setLayout(2, QFormLayout::FieldRole, gridLayout);


        verticalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);
        plainTextEdit->setMinimumSize(QSize(200, 380));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_Write = new QPushButton(centralwidget);
        pushButton_Write->setObjectName(QString::fromUtf8("pushButton_Write"));
        pushButton_Write->setMinimumSize(QSize(0, 30));
        pushButton_Write->setFont(font);

        horizontalLayout->addWidget(pushButton_Write);

        pushButton_Read = new QPushButton(centralwidget);
        pushButton_Read->setObjectName(QString::fromUtf8("pushButton_Read"));
        pushButton_Read->setMinimumSize(QSize(0, 30));
        pushButton_Read->setFont(font);

        horizontalLayout->addWidget(pushButton_Read);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Create File: ", nullptr));
        pushButton_Create->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        pushButton_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_Write->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        pushButton_Read->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
