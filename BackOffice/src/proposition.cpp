#include "proposition.h"
#include "ui_proposition.h"

Proposition::Proposition(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Proposition),
    database{db}
{
    ui->setupUi(this);
}

Proposition::~Proposition()
{
    delete ui;
}

void Proposition::on_Utilisateur_clicked()
{
    this->hide();
    Utilisateur *utilisateur = new Utilisateur(database);
    utilisateur->show();
}

