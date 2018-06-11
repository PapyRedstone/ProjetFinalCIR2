#include "menu.h"
#include "ui_menu.h"

Menu::Menu(std::shared_ptr<Database> db,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu),
    database{db}
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_Question_clicked()
{
    this->hide();
    Theme *theme = new Theme(database);
    theme->show();

}

void Menu::on_Utilisateur_clicked()
{
    this->hide();
    Utilisateur *utilisateur = new Utilisateur(database);
    utilisateur->show();
}
