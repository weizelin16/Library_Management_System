#ifndef ABOUTDETAILS_H
#define ABOUTDETAILS_H

#include <QDialog>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QList>

namespace Ui {
class aboutDetails;
}

class aboutDetails : public QDialog
{
    Q_OBJECT

public:
    explicit aboutDetails(QWidget *parent = 0);
    int readformfile();
    void disPlayAll();
    ~aboutDetails();
    void setTableview();
    QString account;
    void disPlay(int,QStringList);

private:
    Ui::aboutDetails *ui;
    QStandardItemModel *model;
    QList<QString> record_lines;
};

#endif // ABOUTDETAILS_H
