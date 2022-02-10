#include "mainwindow.h"
#include "ui_mainwindow.h"


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


void MainWindow::on_pushButton_Create_clicked()
{

    this->fileName = "C:/Users/arda/OneDrive/Cs_201_Lesson/Qt_Example/QFile_Example/QFile/" + ui->lineEdit->text();

    QFile file(this->fileName);

    if (file.exists())
        QMessageBox::information(this,"Exist","File is already exist!");

    else {
        if (!file.open(QIODevice::ReadWrite))
            QMessageBox::warning(this,"Not Open","File is not open");

        QMessageBox::information(this,"File","File is created!");
    }
}


void MainWindow::on_pushButton_Open_clicked()
{
    QString filter = "All File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    this->fileName = QFileDialog :: getOpenFileName(this,"Open a file","C://",filter);
    ui->lineEdit->setText(this->fileName);
}


void MainWindow::on_pushButton_Write_clicked()
{
    QFile file(this->fileName);


    if (!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this,"Not open","File is not open!");

    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

    QMessageBox::information(this,"Write","You write the file!");
}


void MainWindow::on_pushButton_Read_clicked()
{
    QFile file(this->fileName);

    if (!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"Not open","File is not open!");

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();

    QMessageBox::information(this,"Read","You read the file!");
}





