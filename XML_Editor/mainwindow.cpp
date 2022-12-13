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


void MainWindow::on_ErrorCheck_clicked()
{

}


void MainWindow::on_ShowErrors_clicked()
{

}


void MainWindow::on_FixErrors_clicked()
{

}


void MainWindow::on_Prettify_clicked()
{

}


void MainWindow::on_XMLtoJSON_clicked()
{

}


void MainWindow::on_Minify_clicked()
{

}


void MainWindow::on_Compress_clicked()
{

}


void MainWindow::on_Decompress_clicked()
{

}


void MainWindow::on_DrawGraph_clicked()
{

}

