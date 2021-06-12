#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QFile>
#include <QMap>
#include <QSet>

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

void MainWindow::on_add_clicked()
{
    QString name=ui->name->toPlainText();
    QString text=ui->text->toPlainText();
    if(name=="" || name==" " || text=="" || text==" ")
    {
        return;
    }
    QStringList pr;
    QSet<QString> prov;
    words.append(name);
    for(auto i = words.begin(); i != words.end(); i++)
    {
        prov.insert(*i);
    }
    for(auto i = prov.begin(); i != prov.end(); i++)
    {
        pr.append(*i);
    }
    words=pr;
    ui->list->clear();
    ui->list->addItems(words);
    note.insert(name, text);
    ui->list->clear();
    ui->list->addItems(words);
    ui->name->clear();
    ui->text->clear();
}

void MainWindow::on_list_currentTextChanged(const QString &currentText)
{
    ui->output->setPlainText(note[currentText]);
}

void MainWindow::on_search_textChanged(const QString &arg1)
{
    QRegularExpression rx(arg1);
    ui->list->clear();
    ui->list->addItems(words.filter(rx));
}

void MainWindow::on_del_clicked()
{
    QList<QListWidgetItem*> items = ui->list->selectedItems();
    QString key=ui->list->currentItem()->text();
    foreach(QListWidgetItem * item, items)
    {
        delete ui->list->takeItem(ui->list->row(item));
    }
    if(1)
    {
        for(auto i = 0; i <words.size(); i++)
        {
            if(words[i]==key)words.removeAt(i);
        }
    }
}

void MainWindow::on_savebutton_clicked()
{
    QString link = QCoreApplication::applicationDirPath()+"/" + ui->link->toPlainText()+".txt";
    QFile file(link);
    QTextStream value (&file);
    if (file.open(QIODevice::WriteOnly))
    {
        for(auto i = 0; i <words.size(); i++)
        {
            QString text=words[i];
            value<<text+"\n"+"  ";
            value<<note.value(text)+"\n";
        }
        file.close();
        ui->statusbar->showMessage("Сохранено в каталог "+link);
    }
    else
    {
        ui->statusbar->showMessage("ОШИБКА!");
    }
    ui->link->clear();
}

void MainWindow::on_openfile_clicked()
{
    words.clear();
    ui->list->clear();
    QString link = QCoreApplication::applicationDirPath()+"/" + ui->filelink->toPlainText()+".txt";
    QFile file(link);
    QTextStream value (&file);
    if (file.open(QIODevice::ReadOnly))
    {
        QString line;
        QString non;
        QString mon;
        line = value.readLine();
        while (!value.atEnd())
        {
            non = line.simplified();
            line = value.readLine();

            while(line[0].isSpace())
            {
                mon += line;
                line = value.readLine();

                if(line.isEmpty())
                break;
            }
            words.append(non);
            note.insert(non, mon);
            mon = "";
        }
        ui->list->addItems(words);
        file.close();
        ui->statusbar->showMessage("Открыт файл - "+link);
    }
    else
    {
        ui->statusbar->showMessage("Файл не найден!");
    }
    ui->filelink->clear();
}
