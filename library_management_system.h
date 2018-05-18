#ifndef LIBRAYR_MANAGEMENT_SYSTEM_H
#define LIBRAYR_MANAGEMENT_SYSTEM_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QPushButton>

namespace Ui {
class Librayr_management_system;
}

class Librayr_management_system : public QDialog
{
    Q_OBJECT

public:
    explicit Librayr_management_system(QWidget *parent = 0);
    ~Librayr_management_system();
    void judge(int);
    void writeToFile(QString cnt);
    QString content;

private slots:
    void on_btn_ok_clicked();
    void on_btn_cancle_clicked();

private:
    Ui::Librayr_management_system *ui;
};

#endif // LIBRAYR_MANAGEMENT_SYSTEM_H
