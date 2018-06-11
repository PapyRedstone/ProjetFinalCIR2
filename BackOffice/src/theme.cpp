#include "theme.h"
#include "ui_theme.h"

Theme::Theme(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Theme),
    database{db}
{
    ui->setupUi(this);
}

Theme::~Theme()
{
    delete ui;
}

void Theme::on_Utilisateur_clicked()
{
    this->hide();
    Utilisateur *utilisateur = new Utilisateur(database);
    utilisateur->show();
}
