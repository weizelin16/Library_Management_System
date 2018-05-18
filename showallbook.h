#ifndef SHOWALLBOOK_H
#define SHOWALLBOOK_H

#include <QDialog>
#include <qlist.h>
#include <QStandardItem>
#include <QStandardItemModel>


namespace Ui {
class showallbook;
}

class showallbook : public QDialog
{
    Q_OBJECT

public:
    explicit showallbook(QWidget *parent = 0);
    int readFromFile();
    void showall();
    void setTableview();
    void disPlay(int,QStringList);
    ~showallbook();

private:
    Ui::showallbook *ui;
    QList<QString>  book_lines;
     QStandardItemModel *model;
};

#endif // SHOWALLBOOK_H
