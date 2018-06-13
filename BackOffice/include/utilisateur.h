#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QtWidgets>
#include "mainwindow.h"
#include "Database.hpp"
#include "ButtonID.hpp"
#include "ScoreTable.hpp"
#include "md5.hpp"
#include "crypt.h"

namespace Ui {
class Utilisateur;
}

class Utilisateur : public QDialog
{
    Q_OBJECT

public:
    explicit Utilisateur(std::shared_ptr<Database> db, QWidget *parent = 0);
    ~Utilisateur();
    void loadUserNames();
    void updateActivateButtonState();

private slots:
    void on_Question_clicked();
    void onItemClick(QListWidgetItem*);
    void changeName();
    void changePass();
    void removeOneScore(PushButtonID*,int);
    void desactiveUser();
    void activeUser();
    void deleteUser();

private:
    Ui::Utilisateur *ui;
    Ui::Utilisateur *utilisateur;
    std::shared_ptr<Database> database;
    std::string userName;
    ScoreTable scoreTable;
};

#endif // UTILISATEUR_H
