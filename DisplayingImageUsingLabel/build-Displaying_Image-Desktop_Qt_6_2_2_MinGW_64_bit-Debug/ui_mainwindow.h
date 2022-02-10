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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login;
    QLabel *label_Photo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(692, 299);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 40, 311, 161));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 291, 111));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_Username = new QLabel(widget);
        label_Username->setObjectName(QString::fromUtf8("label_Username"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_Username->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Username);

        lineEdit_Username = new QLineEdit(widget);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Username);

        label_Password = new QLabel(widget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_Password);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Password);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(2, QFormLayout::LabelRole, horizontalSpacer);

        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        pushButton_login->setFont(font2);
        pushButton_login->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_login);

        label_Photo = new QLabel(centralwidget);
        label_Photo->setObjectName(QString::fromUtf8("label_Photo"));
        label_Photo->setGeometry(QRect(70, 30, 201, 171));
        sizePolicy.setHeightForWidth(label_Photo->sizePolicy().hasHeightForWidth());
        label_Photo->setSizePolicy(sizePolicy);
        label_Photo->setMinimumSize(QSize(0, 6));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 692, 25));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Login App", nullptr));
        label_Username->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_Password->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        lineEdit_Password->setText(QString());
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_Photo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
