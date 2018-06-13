#include "PropositionTable.hpp"
#include "question.h"

PropositionTable::PropositionTable(std::shared_ptr<Database> db, int id, QTableWidget* t):table{t}, database{db}, id_question{id}
{}

void PropositionTable::loadTable(Proposition* th){
  table->setRowCount(0);

  std::string query = "SELECT id_proposition, proposition, est_active FROM Proposition WHERE id_question='"+std::to_string(id_question)+"'";

  for(auto row: database->executeQuery(query)){
    table->insertRow(table->rowCount());

    auto text = new TextEditID(std::stoi(row["id_proposition"]));
    text->setPlainText(row["proposition"].c_str());
    QObject::connect(text, SIGNAL(textChange(TextEditID*, int)), th, SLOT(changeProposition(TextEditID*,int)));
    table->setCellWidget(table->rowCount()-1, 0, text);

    auto butActivate = new PushButtonID(std::stoi(row["id_proposition"]));
    butActivate->setText(std::stoi(row["est_active"])?"Desactiver":"Activer");
    table->setCellWidget(table->rowCount()-1, 1, butActivate);
    QObject::connect(butActivate, SIGNAL(click(PushButtonID*, int)), th, SLOT(changePropositionState(PushButtonID*, int)));

    auto butDelete = new PushButtonID(std::stoi(row["id_proposition"]));
    butDelete->setText("Supprimer");
    table->setCellWidget(table->rowCount()-1, 2, butDelete);
    QObject::connect(butDelete, SIGNAL(click(PushButtonID*, int)), th, SLOT(deleteProposition(PushButtonID*, int)));
    }
}
