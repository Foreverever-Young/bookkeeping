#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDateTimeEdit>
#include <QString>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QString inMoney;
    QString inType;
    QDate data;
    struct Bill{
        double money;
        QString type;
        int inOrout=0;
   QString data;
    }bill;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QDialog dlg;

    void getMoney();
    void getType();

private slots:
    void on_book_2_clicked();

    void on_detail_clicked();

    void on_statistics_clicked();

    void on_button_addtype_clicked();

    void on_book_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
