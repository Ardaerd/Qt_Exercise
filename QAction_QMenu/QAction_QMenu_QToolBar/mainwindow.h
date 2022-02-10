#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_actionC_triggered();

    void on_actionJava_triggered();

    void on_actionPython_triggered();

    void on_actionJavaScript_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
