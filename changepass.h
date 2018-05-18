#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QDialog>
#include <QList>
#include <QString>

namespace Ui {
class changepass;
}

class changepass : public QDialog
{
    Q_OBJECT

public:
    explicit changepass(QWidget *parent = 0);
    ~changepass();
    int readFromFile();
    void check();
    void change();
    QString str="";
    QString newpass="";

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changepass *ui;
    QList<QString> account_line;

};

#endif // CHANGEPASS_H
