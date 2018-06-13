#include "proposition.h"
#include "ui_proposition.h"

Proposition::Proposition(std::shared_ptr<Database> db, int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Proposition),
    database{db},
    propositionTable{database, id},
    id_question{id}
{
    ui->setupUi(this);

    propositionTable = PropositionTable(database, id, ui->table);

    propositionTable.loadTable(this);

    connect(ui->ajouterProposition, SIGNAL(released()), this, SLOT(addProposition()));

    std::string query = "SELECT choix1, choix2 FROM Question WHERE id_question='" + std::to_string(id_question) + "'";

    auto result = database->executeQuery(query)[0];

    ui->choix1->setText(result["choix1"].c_str());
    ui->choix2->setText(result["choix2"].c_str());
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

void Proposition::changeProposition(TextEditID* txt, int id){
  std::string query = "UPDATE Proposition SET proposition='" + txt->toPlainText().toStdString() + "' WHERE id_proposition="+std::to_string(id);

  database->executeQuery(query);
}

void Proposition::changePropositionState(PushButtonID* but, int id){
  std::string query = "SELECT est_active FROM Proposition WHERE id_proposition='"+std::to_string(id)+"'";
  
  int currentState = !std::stoi(database->executeQuery(query)[0]["est_active"]);

  query = "UPDATE Proposition SET est_active='"+ std::to_string(currentState) +"' WHERE id_proposition='" + std::to_string(id)+"'";
  database->executeQuery(query);

  but->setText(currentState?"Desactiver":"Activer"); 
}

void Proposition::deleteProposition(PushButtonID*, int id){
  std::string query = "DELETE FROM Proposition WHERE id_proposition='"+std::to_string(id)+"'";

  database->executeQuery(query);

  propositionTable.loadTable(this);
}

void Proposition::addProposition(){
  if(ui->proposition->text().toStdString() == ""){
    return;
  }
  
  int bonneRep;

  if(ui->choix1->isChecked()){
    bonneRep = 1;
  }else if(ui->choix2->isChecked()){
    bonneRep = 2;
  }else{
    bonneRep = 3;
  }
  
  std::string query = "INSERT INTO Proposition VALUES (NULL,'" + ui->proposition->text().toStdString() + "','" + std::to_string(bonneRep) + "',1, " + std::to_string(id_question) + ")";

  database->executeQuery(query);

  propositionTable.loadTable(this);
}

