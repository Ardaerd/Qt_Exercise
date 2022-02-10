#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/arda/OneDrive/Cs_201_Lesson/Qt_Example/DisplayingImageUsingLabel/Displaying_Image/user-profile.png");
    ui->label_Photo->setPixmap(pix.scaled(250, 150, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if (username == "Arda" && password == "dila") {
        QMessageBox :: information(this,"Login","Verification is successful");
        hide();
        user = new User();
        user->show();
    }

    else {
        QMessageBox :: warning(this,"Login","Verification is not correct!");
    }
}

