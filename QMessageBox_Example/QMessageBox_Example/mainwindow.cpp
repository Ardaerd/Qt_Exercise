#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "QDebug"

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
    // void about
    // void aboutQt
    // StandardButton critical
    // StandardButton information
    // StandardButton question
    // StandardButton warning
    QMessageBox :: StandardButton reply = QMessageBox :: question(this,"Option","Do you wanna stay or leave?",
                            QMessageBox::Yes | QMessageBox::No);

    QMessageBox :: warning(this,"Warning","You cannot leave");

    if (reply == QMessageBox::Yes)
        ui->label->setText("Very well");
    else
        QApplication::quit();

    qDebug() << "Everythins is fine";

}

