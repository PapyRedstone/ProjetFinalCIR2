#include "question.h"
#include "ui_question.h"
#include "theme.h"

Question::Question(std::shared_ptr<Database> db, int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question),
    database{db},
    questionTable{database, id},
    id_theme{id}
{
  ui->setupUi(this);

  questionTable = QuestionTable(database, id_theme, ui->table);

  questionTable.loadTable(this);

  connect(ui->ajouterQuestion, SIGNAL(released()), this, SLOT(addQuestion()));
  connect(ui->theme, SIGNAL(released()), this, SLOT(toTheme()));
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

void Question::toTheme(){
    this->hide();
    Theme *theme = new Theme(database);
    theme->show();
}

void Question::changeChoix1(TextEditID* txt, int id){
  std::string query = "UPDATE Question SET choix1='" + txt->toPlainText().toStdString() + "' WHERE id_question="+std::to_string(id);

  database->executeQuery(query);
}

void Question::changeChoix2(TextEditID* txt, int id){
  std::string query = "UPDATE Question SET choix2='" + txt->toPlainText().toStdString() + "' WHERE id_question="+std::to_string(id);

  database->executeQuery(query);
}

void Question::changeQuestionState(PushButtonID* but, int id){
  std::string query = "SELECT est_active FROM Question WHERE id_question='"+std::to_string(id)+"'";
  
  int currentState = !std::stoi(database->executeQuery(query)[0]["est_active"]);

  query = "UPDATE Question SET est_active='"+ std::to_string(currentState) +"' WHERE id_question='" + std::to_string(id)+"'";
  database->executeQuery(query);

  but->setText(currentState?"Desactiver":"Activer"); 
}

void Question::propositionPage(PushButtonID*, int id){
  this->hide();
  Proposition *q = new Proposition(database, id);
  q->show();
}

void Question::deleteQuestion(PushButtonID*, int id){
  std::string query = "DELETE FROM Proposition WHERE id_question='" + std::to_string(id) + "'";

  database->executeQuery(query);
  
  query = "DELETE FROM Question WHERE id_question='"+std::to_string(id)+"'";

  database->executeQuery(query);

  questionTable.loadTable(this);
}

void Question::addQuestion(){
  if(ui->choix2->text().toStdString() == "" || ui->choix1->text().toStdString() == ""){
    return;
  }
  
  std::string query = "INSERT INTO Question VALUES (NULL,'" + ui->choix1->text().toStdString() + "','" + ui->choix2->text().toStdString() + "',1, " + std::to_string(id_theme) + ")";

  database->executeQuery(query);

  questionTable.loadTable(this);
}
