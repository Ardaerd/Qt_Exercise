#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(myFunction()));
    time->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");

    if (time.second() % 2 == 0) {
        time_text[3] = ' ';
        time_text[8] = ' ';
    }

    ui->label->setText(time_text);
}

