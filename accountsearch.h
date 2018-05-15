#ifndef ACCOUNTSEARCH_H
#define ACCOUNTSEARCH_H

#include <QDialog>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class accountsearch;
}

class accountsearch : public QDialog
{
    Q_OBJECT

public:
    explicit accountsearch(QWidget *parent = 0);
    ~accountsearch();
    void findaccount(int,QString);
    void disPlay(int,QStringList);
    int readFromFile();
    void setTableview();

private slots:
    void on_pushButton_clicked();


private:
    Ui::accountsearch *ui;
    QList<QString> account_lines;
    QStandardItemModel *model;

};

#endif // ACCOUNTSEARCH_H
