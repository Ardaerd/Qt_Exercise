#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked(bool checked)
{
    if (this->checked == false)
        this->checked = true;
    else
        this->checked = false;

    if (this->checked == true) {
        disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
                   ui->progressBar, SLOT(setValue(int)));

        ui->label->setText("You cannot control anymore");
        ui->pushButton->setText("Click Again");
    }
    else {
        connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
                ui->progressBar, SLOT(setValue(int)));

        ui->label->setText("Now, you can control");
        ui->pushButton->setText("Click");
    }
}

