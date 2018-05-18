#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>
#include <QList>

namespace Ui {
class Modify;
}

class Modify : public QDialog
{
    Q_OBJECT

public:
    explicit Modify(QWidget *parent = 0);
    int ReadFromFile();
    void check();
    void change();
    ~Modify();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Modify *ui;
    QList<QString> book_lines;
};

#endif // MODIFY_H
