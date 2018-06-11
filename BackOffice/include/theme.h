#ifndef THEME_H
#define THEME_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"

namespace Ui {
class Theme;
}

class Theme : public QDialog
{
    Q_OBJECT

public:
    explicit Theme(std::shared_ptr<Database> db, QWidget *parent = 0);
    ~Theme();

private slots:
    void on_Utilisateur_clicked();

private:
    Ui::Theme *ui;
    Ui::Theme *theme;
    std::shared_ptr<Database> database;
};

#endif // THEME_H
