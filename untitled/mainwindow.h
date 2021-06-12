#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

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
    void on_add_clicked();

    void on_list_currentTextChanged(const QString &currentText);

    void on_search_textChanged(const QString &arg1);

    void on_del_clicked();

    void on_savebutton_clicked();

    void on_openfile_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, QString> note;
    QStringList words;
};
#endif // MAINWINDOW_H
