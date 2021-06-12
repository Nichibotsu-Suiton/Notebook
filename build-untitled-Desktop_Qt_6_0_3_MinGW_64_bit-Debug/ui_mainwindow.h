/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *name;
    QTextEdit *output;
    QTextEdit *text;
    QPushButton *add;
    QListWidget *list;
    QPushButton *del;
    QPushButton *openfile;
    QPushButton *savebutton;
    QTextEdit *filelink;
    QTextEdit *link;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *search;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(828, 676);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        name = new QTextEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(20, 30, 201, 31));
        output = new QTextEdit(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(230, 290, 571, 251));
        output->setReadOnly(true);
        text = new QTextEdit(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(230, 30, 571, 251));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(20, 100, 201, 41));
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(20, 290, 201, 251));
        del = new QPushButton(centralwidget);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(20, 180, 201, 41));
        openfile = new QPushButton(centralwidget);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        openfile->setGeometry(QRect(20, 560, 181, 31));
        savebutton = new QPushButton(centralwidget);
        savebutton->setObjectName(QString::fromUtf8("savebutton"));
        savebutton->setGeometry(QRect(20, 600, 181, 31));
        filelink = new QTextEdit(centralwidget);
        filelink->setObjectName(QString::fromUtf8("filelink"));
        filelink->setGeometry(QRect(220, 560, 581, 31));
        link = new QTextEdit(centralwidget);
        link->setObjectName(QString::fromUtf8("link"));
        link->setGeometry(QRect(220, 600, 581, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 201, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 10, 541, 16));
        search = new QLineEdit(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(20, 260, 201, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 240, 201, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 828, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\275\320\260\321\217 \320\272\320\275\320\270\320\263\320\260", nullptr));
        name->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203\n"
"(\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203)", nullptr));
        del->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \321\201 \320\267\320\260\320\274\320\265\321\202\320\272\320\260\320\274\320\270", nullptr));
        savebutton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273 \321\201 \320\267\320\260\320\274\320\265\321\202\320\272\320\260\320\274\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                     \320\230\320\274\321\217 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "                                                                            \320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "                   \320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\267\320\260\320\274\320\265\321\202\320\272\320\260\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
