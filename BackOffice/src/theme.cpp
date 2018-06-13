#include "theme.h"
#include "ui_theme.h"

Theme::Theme(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Theme),
    database{db},
    themeTable{database}
{
  ui->setupUi(this);

  themeTable = ThemeTable(database, ui->table);

  themeTable.loadTable(this);

  connect(ui->addTheme, SIGNAL(released()), this, SLOT(addTheme()));
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

void Theme::changeThemeName(TextEditID* txt, int id){
  std::string query = "UPDATE Theme SET theme='" + txt->toPlainText().toStdString() + "' WHERE id_theme="+std::to_string(id);

  database->executeQuery(query);
}

void Theme::changeThemeState(PushButtonID* but, int id){
  std::string query = "SELECT est_active FROM Theme WHERE id_theme='"+std::to_string(id)+"'";
  
  int currentState = !std::stoi(database->executeQuery(query)[0]["est_active"]);

  query = "UPDATE Theme SET est_active='"+ std::to_string(currentState) +"' WHERE id_theme='" + std::to_string(id)+"'";
  database->executeQuery(query);

  but->setText(currentState?"Desactiver":"Activer"); 
}

void Theme::questionPage(PushButtonID*, int id){
  this->hide();
  Question *q = new Question(database, id);
  q->show();
}

void Theme::deleteTheme(PushButtonID*, int id){
  std::string query = "DELETE FROM Proposition WHERE id_question IN (SELECT id_question FROM Question WHERE id_theme='"+std::to_string(id)+"')";

  database->executeQuery(query);

  query = "DELETE FROM Question WHERE id_theme='"+std::to_string(id)+"'";

  database->executeQuery(query);  

  query = "DELETE FROM Theme WHERE id_theme='"+std::to_string(id)+"'";

  database->executeQuery(query);

  themeTable.loadTable(this);
}

void Theme::addTheme(){
  if(ui->newTheme->text().toStdString() == ""){
    return;
  }
  
  std::string query = "INSERT INTO Theme VALUES (NULL,'" + ui->newTheme->text().toStdString() + "',1)";

  database->executeQuery(query);

  themeTable.loadTable(this);
}
