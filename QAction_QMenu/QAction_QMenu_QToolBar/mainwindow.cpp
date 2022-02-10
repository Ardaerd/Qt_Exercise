#include "mainwindow.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_actionC_triggered()
{
    QMessageBox::information(this,"C++","You are a pro");
}


void MainWindow::on_actionJava_triggered()
{
    QMessageBox::information(this,"Java","You are Good with Java");
}


void MainWindow::on_actionPython_triggered()
{
    QMessageBox::information(this,"Python","You are the future of AI");
}


void MainWindow::on_actionJavaScript_triggered()
{
    QMessageBox::warning(this,"JavaScript","Go to hell and make a website!");
}

