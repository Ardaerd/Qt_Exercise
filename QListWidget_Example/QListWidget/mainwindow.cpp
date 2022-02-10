#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/Image/Image/c-.png"),"C++");
    ui->listWidget->addItem(item_1);

    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/Image/Image/java.png"),"Java");
    ui->listWidget->addItem(item_2);

    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/Image/Image/js.png"),"JavaScript");
    ui->listWidget->addItem(item_3);

    QListWidgetItem *item_4 = new QListWidgetItem(QIcon(":/Image/Image/python.png"),"Python");
    ui->listWidget->addItem(item_4);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setBackground(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}

