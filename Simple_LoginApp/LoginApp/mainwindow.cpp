#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/Image/login.png");
    ui->label_Pic->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if (username == "Arda" && password == "dila") {
        hide();
        user = new User();
        user->show();
    }

    else {
        ui->statusbar->setStyleSheet("color:red");
        ui->statusbar->showMessage("Verification is incorrect!",5000);
    }
}

