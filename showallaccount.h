#ifndef SHOWALLACCOUNT_H
#define SHOWALLACCOUNT_H

#include <QDialog>
#include <qlist.h>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class ShowAllAccount;
}

class ShowAllAccount : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllAccount(QWidget *parent = 0);
    int readFromFile();
    void showall();
    void setTableview();
    void disPlay(int,QStringList);
    ~ShowAllAccount();

private:
    Ui::ShowAllAccount *ui;
    QList<QString>  account_lines;
     QStandardItemModel *model;
};

#endif // SHOWALLACCOUNT_H
