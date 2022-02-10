#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Create_clicked();

    void on_pushButton_Write_clicked();

    void on_pushButton_Read_clicked();

    void on_pushButton_Open_clicked();

private:
    Ui::MainWindow *ui;
    QString fileName;
};
#endif // MAINWINDOW_H
