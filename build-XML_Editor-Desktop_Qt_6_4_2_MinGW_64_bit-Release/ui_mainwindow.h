/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpe;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionSave_2;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *ErrorCheck;
    QPushButton *ShowErrors;
    QPushButton *ErrorFix;
    QPushButton *Prettify;
    QPushButton *XMLtoJson;
    QPushButton *Minify;
    QPushButton *Compress;
    QPushButton *Decompress;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_2;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1445, 781);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/icons/new-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/imgs/C:/Users/koko/Downloads/new-document.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon);
        actionOpe = new QAction(MainWindow);
        actionOpe->setObjectName("actionOpe");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpe->setIcon(icon1);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/icons/save-icon-free-12.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/imgs/icons/save-as-512.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSaveAs->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/icons/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/icons/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/icons/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon5);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/icons/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/icons/redo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon7);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imgs/icons/cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon8);
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName("actionSave_2");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imgs/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_2->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 10, 1346, 42));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(false);
        checkBox->setTristate(false);

        horizontalLayout->addWidget(checkBox);

        ErrorCheck = new QPushButton(horizontalLayoutWidget);
        ErrorCheck->setObjectName("ErrorCheck");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/imgs/icons/check.png"), QSize(), QIcon::Normal, QIcon::On);
        ErrorCheck->setIcon(icon10);

        horizontalLayout->addWidget(ErrorCheck);

        ShowErrors = new QPushButton(horizontalLayoutWidget);
        ShowErrors->setObjectName("ShowErrors");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/imgs/icons/bug.png"), QSize(), QIcon::Normal, QIcon::On);
        ShowErrors->setIcon(icon11);

        horizontalLayout->addWidget(ShowErrors);

        ErrorFix = new QPushButton(horizontalLayoutWidget);
        ErrorFix->setObjectName("ErrorFix");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/imgs/icons/repeair.png"), QSize(), QIcon::Normal, QIcon::On);
        ErrorFix->setIcon(icon12);

        horizontalLayout->addWidget(ErrorFix);

        Prettify = new QPushButton(horizontalLayoutWidget);
        Prettify->setObjectName("Prettify");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/imgs/icons/indent.png"), QSize(), QIcon::Normal, QIcon::On);
        Prettify->setIcon(icon13);

        horizontalLayout->addWidget(Prettify);

        XMLtoJson = new QPushButton(horizontalLayoutWidget);
        XMLtoJson->setObjectName("XMLtoJson");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/imgs/icons/json.png"), QSize(), QIcon::Normal, QIcon::On);
        XMLtoJson->setIcon(icon14);

        horizontalLayout->addWidget(XMLtoJson);

        Minify = new QPushButton(horizontalLayoutWidget);
        Minify->setObjectName("Minify");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/imgs/icons/minify.png"), QSize(), QIcon::Normal, QIcon::On);
        Minify->setIcon(icon15);

        horizontalLayout->addWidget(Minify);

        Compress = new QPushButton(horizontalLayoutWidget);
        Compress->setObjectName("Compress");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/imgs/icons/compress.png"), QSize(), QIcon::Normal, QIcon::On);
        Compress->setIcon(icon16);

        horizontalLayout->addWidget(Compress);

        Decompress = new QPushButton(horizontalLayoutWidget);
        Decompress->setObjectName("Decompress");

        horizontalLayout->addWidget(Decompress);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(50, 60, 641, 611));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(false);

        verticalLayout->addWidget(textEdit);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(800, 60, 421, 611));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(738, 60, 661, 609));
        textEdit_2->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(740, 70, 651, 591));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1445, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpe);
        menuFile->addAction(actionSave_2);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpe);
        toolBar->addAction(actionSave_2);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpe->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "SaveAs", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionSave_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        ErrorCheck->setText(QCoreApplication::translate("MainWindow", "Error Check", nullptr));
        ShowErrors->setText(QCoreApplication::translate("MainWindow", "Show Errors", nullptr));
        ErrorFix->setText(QCoreApplication::translate("MainWindow", "Fix Errors", nullptr));
        Prettify->setText(QCoreApplication::translate("MainWindow", "Prettify", nullptr));
        XMLtoJson->setText(QCoreApplication::translate("MainWindow", "XML to JSON", nullptr));
        Minify->setText(QCoreApplication::translate("MainWindow", "Minify", nullptr));
        Compress->setText(QCoreApplication::translate("MainWindow", "Compress", nullptr));
        Decompress->setText(QCoreApplication::translate("MainWindow", "Decompress", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Draw Graph", nullptr));
        label->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
