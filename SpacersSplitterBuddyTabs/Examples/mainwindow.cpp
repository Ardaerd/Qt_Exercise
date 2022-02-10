#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_3->setText(ui->lineEdit->text());
    ui->pushButton_4->setText(ui->lineEdit->text());
    ui->pushButton_5->setText(ui->lineEdit->text());

}

