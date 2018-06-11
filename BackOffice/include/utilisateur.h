#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"

namespace Ui {
class Utilisateur;
}

class Utilisateur : public QDialog
{
    Q_OBJECT

public:
    explicit Utilisateur(std::shared_ptr<Database> db, QWidget *parent = 0);
    ~Utilisateur();

private slots:
    void on_Question_clicked();


private:
    Ui::Utilisateur *ui;
    Ui::Utilisateur *utilisateur;
    std::shared_ptr<Database> database;
};

#endif // UTILISATEUR_H
