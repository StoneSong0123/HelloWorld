#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Hello","Hello World");
    QMessageBox::information(this,"Hello","Begin my github");
    QMessageBox::information(this,"Hello",QString::fromLocal8Bit("NiHao"));
}
