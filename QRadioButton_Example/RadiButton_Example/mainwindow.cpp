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

    if (ui->radioButton->isChecked() && !ui->radioButton_2->isChecked())
        QMessageBox::information(this,"Pro","C++ always gonna be the best one.");

    else
        QMessageBox::information(this,"Wrong","You should work hard padawan!");

    this->show();
}

