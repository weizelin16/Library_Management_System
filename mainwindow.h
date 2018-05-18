#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "librayr_management_system.h"
#include "addaccount.h"
#include "accountsearch.h"
#include "dialog.h"
#include "changepass.h"
#include "showallaccount.h"
#include "showallbook.h"
#include "modify.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_add_book_triggered();

    void on_action_about_triggered();

    void on_action_add_account_triggered();

    void on_action_account_search_triggered();

    void on_action_book_search_triggered();

    void on_action_administrator_change_pass_triggered();

    void on_action_show_account_triggered();

    void on_action_show_book_triggered();

    void on_action_change_book_triggered();

private:
    Ui::MainWindow *ui;
    Librayr_management_system w;
    addAccount aa;
    accountsearch as;
    Dialog book_reaserch;
    changepass CH;
    ShowAllAccount SHA;
    showallbook SHB;
    Modify MD;



};

#endif // MAINWINDOW_H
