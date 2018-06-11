#ifndef PROPOSITION_H
#define PROPOSITION_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"

namespace Ui {
class Proposition;
}

class Proposition : public QDialog
{
    Q_OBJECT

public:
    explicit Proposition(std::shared_ptr<Database> db, QWidget *parent = 0);
    ~Proposition();

private slots:
    void on_Utilisateur_clicked();

private:
    Ui::Proposition *ui;
    std::shared_ptr<Database> database;
};

#endif // PROPOSITION_H
