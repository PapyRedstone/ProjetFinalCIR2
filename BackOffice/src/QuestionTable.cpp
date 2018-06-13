#include "QuestionTable.hpp"
#include "question.h"

QuestionTable::QuestionTable(std::shared_ptr<Database> db, int id, QTableWidget* t):table{t}, database{db}, id_theme{id}
{}

void QuestionTable::loadTable(Question* th){
  table->setRowCount(0);

  std::string query = "SELECT id_question, choix1, choix2, est_active FROM Question WHERE id_theme='"+std::to_string(id_theme)+"'";

  for(auto row: database->executeQuery(query)){
    table->insertRow(table->rowCount());

    auto text = new TextEditID(std::stoi(row["id_question"]));
    text->setPlainText(row["choix1"].c_str());
    QObject::connect(text, SIGNAL(textChange(TextEditID*, int)), th, SLOT(changeChoix1(TextEditID*,int)));
    table->setCellWidget(table->rowCount()-1, 0, text);

    auto text2 = new TextEditID(std::stoi(row["id_question"]));
    text2->setPlainText(row["choix2"].c_str());
    QObject::connect(text2, SIGNAL(textChange(TextEditID*, int)), th, SLOT(changeChoix2(TextEditID*,int)));
    table->setCellWidget(table->rowCount()-1, 1, text2);

    auto butActivate = new PushButtonID(std::stoi(row["id_question"]));
    butActivate->setText(std::stoi(row["est_active"])?"Desactiver":"Activer");
    table->setCellWidget(table->rowCount()-1, 2, butActivate);
    QObject::connect(butActivate, SIGNAL(click(PushButtonID*, int)), th, SLOT(changeQuestionState(PushButtonID*, int)));

    auto butModifier = new PushButtonID(std::stoi(row["id_question"]));
    butModifier->setText("Modifier");
    table->setCellWidget(table->rowCount()-1, 3, butModifier);
    QObject::connect(butModifier, SIGNAL(click(PushButtonID*, int)), th, SLOT(propositionPage(PushButtonID*, int)));

    auto butDelete = new PushButtonID(std::stoi(row["id_question"]));
    butDelete->setText("Supprimer");
    table->setCellWidget(table->rowCount()-1, 4, butDelete);
    QObject::connect(butDelete, SIGNAL(click(PushButtonID*, int)), th, SLOT(deleteQuestion(PushButtonID*, int)));
    }
}
