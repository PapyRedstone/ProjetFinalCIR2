#include "question.h"
#include "ui_question.h"

Question::Question(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question),
    database{db}
{
    ui->setupUi(this);
}

Question::~Question()
{
    delete ui;
}

void Question::on_Utilisateur_clicked()
{
    this->hide();
    Utilisateur *utilisateur = new Utilisateur(database);
    utilisateur->show();
}