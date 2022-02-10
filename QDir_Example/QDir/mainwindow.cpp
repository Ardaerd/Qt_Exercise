#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
#include "iostream"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir;

    foreach (QFileInfo var, dir.drives())
        ui->comboBox->addItem(var.absoluteFilePath());

    ui->comboBox->addItem("C:/Users/arda/OneDrive/Cs_201_Lesson/Qt_Example/QDir_Example/QDir");

    QDir dir_2(ui->comboBox->currentText());

    foreach (QFileInfo var, dir_2.entryInfoList()) {
        if (var.isDir())
            ui->listWidget->addItem("Dir: " + var.absoluteFilePath());
        if (var.isFile())
            ui->listWidget->addItem("File: " + var.absoluteFilePath());
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    cout << index << endl;
    ui->listWidget->clear();

    QDir dir_2(ui->comboBox->currentText());

    foreach (QFileInfo var, dir_2.entryInfoList()) {
        if (var.isDir())
            ui->listWidget->addItem("Dir: " + var.absoluteFilePath());
        if (var.isFile())
            ui->listWidget->addItem("File: " + var.absoluteFilePath());
    }
}


void MainWindow::on_pushButton_clicked()
{
    QDir dir("C:/Users/arda/OneDrive/Cs_201_Lesson/Qt_Example/QDir_Example/QDir/Image");

    if (dir.exists())
        QMessageBox::information(this,"Directory","Directory is already exist!");
    else
        dir.mkpath("C:/Users/arda/OneDrive/Cs_201_Lesson/Qt_Example/QDir_Example/QDir/Image");
}

