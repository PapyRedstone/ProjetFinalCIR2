#include "ScoreTable.hpp"
#include "utilisateur.h"

void ScoreTable::loadTable(std::string userName, Utilisateur* utili){
  table->setRowCount(0);
  
  std::string query = "SELECT id_palmares, score, seed FROM Palmares WHERE id_user = (SELECT id_user FROM user WHERE name = '"+userName+"')";

  auto resultSql = database->executeQuery(query);

  for(auto row: resultSql){
    table->insertRow(table->rowCount());
    table->setItem(table->rowCount()-1, 0, new QTableWidgetItem(row["score"].c_str()));
    table->setItem(table->rowCount()-1, 1, new QTableWidgetItem(row["seed"].c_str()));
    
    auto but = new PushButtonID(std::stoi(row["id_palmares"]));
    but->setText("Supprimer");
    QObject::connect(but, SIGNAL(click(PushButtonID*,int)), utili, SLOT(removeOneScore(PushButtonID*,int)));
    table->setCellWidget(table->rowCount()-1, 2, but);
  }
}
