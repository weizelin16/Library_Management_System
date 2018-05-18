#ifndef BORROWWINDOW_H
#define BORROWWINDOW_H

#include <QDialog>
#include <dialog.h>
#include "borrow.h"
#include "aboutdetails.h"
#include "returnbook.h"
#include "showallbook.h"

namespace Ui {
class BorrowWindow;
}

class BorrowWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BorrowWindow(QWidget *parent = 0);
      QString account;
    ~BorrowWindow();

private slots:
    void on_btn_find_clicked();

    void on_btn_borrow_clicked();

    void on_btn_return_2_clicked();

    void on_btn_return_clicked();

    void on_btn_showall_clicked();

private:
    Ui::BorrowWindow *ui;
    Dialog bs;
    borrow *bb;
    aboutDetails *AD;
    returnbook *RB;
    showallbook SHB;

};

#endif // BORROWWINDOW_H
