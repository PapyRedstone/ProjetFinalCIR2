#include "utilisateur.h"
#include "ui_utilisateur.h"

Utilisateur::Utilisateur(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Utilisateur),
    database{db}
{
    ui->setupUi(this);

    //tableWidget->insertRow ( tableWidget->rowCount() );
    //tableWidget->setItem   ( tableWidget->rowCount()-1, 
    //yourColumn, 
    //new QTableWidgetItem(string));

    auto list = ui->listWidget;

    std::string query = "SELECT name FROM user";
    
    auto resultSql = database->executeQuery(query);

    for(auto map: resultSql){
      for(auto pair: map){
	list->addItem(pair.second.c_str());
      }
    }
}

Utilisateur::~Utilisateur()
{
    delete ui;
}

void Utilisateur::on_Question_clicked()
{
    this->hide();
    Theme *theme = new Theme(database);
    theme->show();
}