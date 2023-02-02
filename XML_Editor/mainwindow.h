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
    void on_ErrorCheck_clicked();

    void on_ShowErrors_clicked();

    void on_FixErrors_clicked();

    void on_Prettify_clicked();

    void on_XMLtoJSON_clicked();

    void on_Minify_clicked();

    void on_Compress_clicked();

    void on_Decompress_clicked();

    void on_DrawGraph_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
