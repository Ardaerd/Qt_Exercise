#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionSave_triggered()
{
    QFile file(filePath);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"Not Opened","File couldn't open!");
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.flush();
    file.close();
}

void MainWindow::on_actionSave_as_triggered()
{
    filePath = QFileDialog::getSaveFileName(this,"Save as");
    QFile file(filePath);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"Not Opened","File couldn't open!");
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.flush();
    file.close();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionInformation_triggered()
{
    QString info = "Auther: Arda Erdoğan\n";
    info += "Date: 2/12/2022\n";
    info += "(C) Notepad (R)";

    QMessageBox::about(this,"About",info);
}


void MainWindow::on_actionNew_triggered()
{
    this->filePath = "";
    ui->textEdit->setText("");
}


void MainWindow::on_actionOpen_triggered()
{
    filePath = QFileDialog::getOpenFileName(this,"Open File");
    QFile file(filePath);

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this,"Not Opened","File couldn't open!");
        return;
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

