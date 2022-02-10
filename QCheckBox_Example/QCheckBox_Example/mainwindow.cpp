#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->hide();

    if (ui->checkBox->isChecked())
        QMessageBox :: information(this,"You passed!","Welcome to the coding club padawan!");
    else
        QMessageBox :: warning(this,"You are idiot","Go to hell!");

    this->show();
}



void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1)
        QMessageBox :: information(this,"Winner","Push to the button padawan!");
    else
        QMessageBox :: warning(this,"Failed","Push to the button and see what you should do!");
}

