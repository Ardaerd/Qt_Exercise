#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/ProgrammingLanguages/Image/c-.png"),"C++");
    ui->comboBox->addItem(QIcon(":/ProgrammingLanguages/Image/java.png"),"Java");
    ui->comboBox->addItem(QIcon(":/ProgrammingLanguages/Image/js.png"),"JavaScript");
    ui->comboBox->addItem(QIcon(":/ProgrammingLanguages/Image/python.png"),"Python");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->comboBox->currentText() == "C++")
        QMessageBox::information(this,"C++","You are the real developer");
    else if (ui->comboBox->currentText() == "Java")
        QMessageBox::information(this,"Java","You can run 3 billion devices");
    if (ui->comboBox->currentText() == "Python")
        QMessageBox::information(this,"C++","You are the future of the AI");
    if (ui->comboBox->currentText() == "JavaScript")
        QMessageBox::information(this,"C++","Go to hell and make a website");
}

