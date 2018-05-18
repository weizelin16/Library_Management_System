#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <mainwindow.h>
#include <borrowwindow.h>
#include <QString>
#include <qlist.h>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void check();
    int readFromFile();

private slots:
    void on_pushButton_clicked();


private:
    Ui::login *ui;
    MainWindow MW;
    BorrowWindow BW;
    QList<QString> account_line;
};

#endif // LOGIN_H
