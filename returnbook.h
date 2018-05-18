#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QDialog>
#include <QList>
#include <QDate>

namespace Ui {
class returnbook;
}

class returnbook : public QDialog
{
    Q_OBJECT

public:
    explicit returnbook(QWidget *parent = 0);
    void add(QString,QString);
    int ReadFromFile();
    void change();
    void check();
     QString account;
    ~returnbook();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::returnbook *ui;
    QList <QString> book_lines;
    QList <QString> record_lines;
    QDate pdate;

};

#endif // RETURNBOOK_H
