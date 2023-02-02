#include "mainwindow.h"
#include "formating_and_minifying.h"
//#include "ui_mainwindow.h"
#include "consistency.h"
#include <qfile.h>
#include <QMessageBox>
#include <QTextStream>


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
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
    string input = in.toStdString();
    vector<string> s = get_XML_Vector(input);

    if(check_consistency(s)==true){
            QMessageBox::information(this, "Info", "This File is Consistent and contains no Errors");

        }else{
            QMessageBox::information(this, "Info", "This File is inconsistent and contains Errors");

        }
}


void MainWindow::on_ShowErrors_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
    vector <string> s = get_XML_Vector(in.toStdString());
    if(check_consistency(s)==true){
        ui->output->clear();
        QMessageBox::information(this, "Info", "This File has no errors to show");
        return;
    }
    else{
        detect_errors(s);
        writeFile("detected.xml",s);
        QFile x("detected.xml");
        if(!x.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this,"Warning" , "Cannot Open File : " + x.errorString());
        }
        QTextStream out(&x);
        QString text = out.readAll();
        ui->output->setPlainText(text);
        x.close();
    }

}


void MainWindow::on_FixErrors_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
    vector <string> s = get_XML_Vector(in.toStdString());
    if(check_consistency(s)==true){
        ui->output->clear();
        QMessageBox::information(this, "Info", "This File has no errors to show");
        return;
    }
    else{
        fix_errors(s);
        writeFile("fixed.xml",s);
        QFile x("fixed.xml");
        if(!x.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this,"Warning" , "Cannot Open File : " + x.errorString());
        }
        QTextStream out(&x);
        QString text = out.readAll();
        ui->output->setPlainText(text);
        x.close();

    }
}


void MainWindow::on_Prettify_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
    vector <string> s = get_XML_Vector(in.toStdString());
    s = prettifying_func(s);
    writeFile("prettified.txt",s);
    QFile x("prettified.txt");
    if(!x.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Warning" , "Cannot Open File : " + x.errorString());
    }
    QTextStream out(&x);
    QString text = out.readAll();
    ui->output->setPlainText(text);
    x.close();

}


void MainWindow::on_XMLtoJSON_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
}


void MainWindow::on_Minify_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
}


void MainWindow::on_Compress_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
}


void MainWindow::on_Decompress_clicked()
{
    QString in = ui->input->toPlainText();

    if(in == ""){
            QMessageBox::warning(this, "Warning", "No Text To Be Converted");
            return;
        }
}


void MainWindow::on_DrawGraph_clicked()
{

}

