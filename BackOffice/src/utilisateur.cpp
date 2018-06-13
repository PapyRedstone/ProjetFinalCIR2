#include "utilisateur.h"
#include "ui_utilisateur.h"

Utilisateur::Utilisateur(std::shared_ptr<Database> db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Utilisateur),
    database{db},
    scoreTable(database)
{
    ui->setupUi(this);

    loadUserNames();

    auto list = ui->listWidget;

    connect(list, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(onItemClick(QListWidgetItem*)));
    connect(ui->deleteButton, SIGNAL(released()), this, SLOT(deleteUser()));

    scoreTable = ScoreTable(database, ui->table);
}

Utilisateur::~Utilisateur()
{
    delete ui;
}

void Utilisateur::loadUserNames(){
  std::string query = "SELECT name FROM user ORDER BY name";

  auto list = ui->listWidget;

  list->clear();
  
  auto resultSql = database->executeQuery(query);
  
  for(auto map: resultSql){
    for(auto pair: map){
      list->addItem(pair.second.c_str());
    }
  }
}

void Utilisateur::on_Question_clicked()
{
    this->hide();
    Theme *theme = new Theme(database);
    theme->show();
}

void Utilisateur::onItemClick(QListWidgetItem* item){
  userName = item->text().toStdString();

  ui->newName->setText(userName.c_str());

  connect(ui->newNameButton, SIGNAL(released()), this, SLOT(changeName()));
  connect(ui->newPassButton, SIGNAL(released()), this, SLOT(changePass()));

  updateActivateButtonState();

  scoreTable.loadTable(userName, this);
}

void Utilisateur::updateActivateButtonState(){
  std::string query = "SELECT est_active FROM user WHERE name='"+userName+"'";

  auto result = database->executeQuery(query);

  ui->desactivateButton->disconnect();

  if(result[0]["est_active"] == "0"){
    ui->desactivateButton->setText("Active l'utilisateur");
    connect(ui->desactivateButton, SIGNAL(released()), this, SLOT(activeUser()));
  }else{
    ui->desactivateButton->setText("Désactive l'utilisateur");
    connect(ui->desactivateButton, SIGNAL(released()), this, SLOT(desactiveUser()));
  }
}

void Utilisateur::removeOneScore(PushButtonID*,int id){
  std::string query = "DELETE FROM Palmares WHERE id_palmares='" + std::to_string(id);

  query += "'";

  database->executeQuery(query);

  scoreTable.loadTable(userName,this);
}

void Utilisateur::changeName(){
  if(ui->newName->text().toStdString() == ""){
    return;
  }
  
  std::string query = "UPDATE user SET name='" + ui->newName->text().toStdString();
  query += "' WHERE name='" + userName;
  query += "'";

  userName = ui->newName->text().toStdString();

  database->executeQuery(query);

  scoreTable.loadTable(userName,this);

  loadUserNames();
}

void Utilisateur::changePass(){
  if(ui->newPass->text().toStdString() == ""){
    return;
  }
  
  std::string pass_hash = crypt(md5(ui->newPass->text().toStdString()).c_str(),md5(userName).c_str());
  std::string query = "UPDATE user SET password_hash='" + pass_hash;
  query += "' WHERE name='" + userName;
  query += "'";

  database->executeQuery(query);
}

void Utilisateur::desactiveUser(){
  std::string query = "UPDATE user SET est_active=0 WHERE name='"+userName+"'";

  database->executeQuery(query);
  
  updateActivateButtonState();
}

void Utilisateur::activeUser(){
  std::string query = "UPDATE user SET est_active=1 WHERE name='"+userName+"'";

  database->executeQuery(query);
  
  updateActivateButtonState();
}

void Utilisateur::deleteUser(){
  std::string query = "DELETE FROM Palmares WHERE id_user=(SELECT id_user FROM user WHERE name='"+userName+"')";

  database->executeQuery(query);

  query = "DELETE FROM user WHERE name='"+userName+"'";

  database->executeQuery(query);

  userName = "";

  loadUserNames();
}
