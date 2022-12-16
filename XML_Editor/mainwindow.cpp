#include "mainwindow.h"
#include "formating_and_minifying.h"
#include "ui_mainwindow.h"
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

string remove_spaces(string line){
    int j = 0;
    //remove spaces from the start of the line
    while(line[j] == ' ' || line[j] == '\t' || line[j] == '\n'){
        j ++;
    }
    //remove spaces from the end of theline
    int k = line.length() - 1;
    while(line[k] == ' ' || line[k] == '\t' || line[k] == '\n') {
        k --;
    }
    //creare a string without spaces
    string line_without_pre_or_post_spaces = "";
    //copy only from j where we removed spaces at the start of the line
    //until k the end of the line with no spaces
    for(int q = j ; q <= k; q++){
        line_without_pre_or_post_spaces += line[q];
    }
    // return the string
    return line_without_pre_or_post_spaces;
}
vector<string> get_XML_Vector(string input_line){
    vector<string> xml;
    string str = "";
    unsigned int i = 0;
    while(i < input_line.length()){
        if(input_line[i] == '<'){
            while(i < input_line.length()){
                if(input_line[i] != '>'){
                    str += input_line[i];
                }
                else{
                    break;
                }
                i++;
            }
            str += '>';
            str = remove_spaces(str);
            i++;
            xml.push_back(str);
            str = "";
        }
        else{
            while(i < input_line.length()) {
                if(input_line[i] != '<'){
                    str += input_line[i];
                }
                else{
                    break;
                }
                i++;
            }
            bool add = false;
            for(unsigned int j=0; j<str.length(); j++){
                if(str[j] != ' ' && str[j] != '\n' && str[j] != '\t'){
                    add = true;
                    break;
                }
            }
            if(add == true){
                str = remove_spaces(str);
                xml.push_back(str);
            }
            str = "";
        }
    }
    return xml;
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

