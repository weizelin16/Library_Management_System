#ifndef BORROW_H
#define BORROW_H

#include <QDialog>
#include <QList>
#include <QDate>

namespace Ui {
class borrow;
}

class borrow : public QDialog
{
    Q_OBJECT

public:
    explicit borrow(QWidget *parent = 0);
    void add(QString,QString);
    int ReadFromFile();
    void change();
    QString account;
    ~borrow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::borrow *ui;
    QList <QString> *book_lines;
    QDate pdate;
    int flag = 0;
};

#endif // BORROW_H
