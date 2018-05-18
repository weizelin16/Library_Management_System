#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <qfile.h>
#include <qlist.h>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    int readFromFile();
    void setTableview();
    void findbook(int,QString);
    void disPlay(int,QStringList);
    void searchbook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QList<QString> books_lines;
    QStandardItemModel *model;

};

#endif // DIALOG_H
