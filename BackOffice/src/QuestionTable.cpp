#include "QuestionTable.hpp"
#include "question.h"

QuestionTable::QuestionTable(std::shared_ptr<Database> db, QTableWidget* t):table{t}, database{db}
{
  
}

void QuestionTable::loadTable(Question* th){
  /*table->setRowCount(0);

  std::string query = "SELECT theme, id_theme, est_active FROM Theme";

  for(auto row: database->executeQuery(query)){
    table->insertRow(table->rowCount());

    auto text = new TextEditID(std::stoi(row["id_theme"]));
    text->setPlainText(row["theme"].c_str());
    QObject::connect(text, SIGNAL(textChange(TextEditID*, int)), th, SLOT(changeThemeName(TextEditID*,int)));
    table->setCellWidget(table->rowCount()-1, 0, text);

    auto butActivate = new PushButtonID(std::stoi(row["id_theme"]));
    butActivate->setText(std::stoi(row["est_active"])?"Desactiver":"Activer");
    table->setCellWidget(table->rowCount()-1, 1, butActivate);
    QObject::connect(butActivate, SIGNAL(click(PushButtonID*, int)), th, SLOT(changeThemeState(PushButtonID*, int)));

    auto butModifier = new PushButtonID(std::stoi(row["id_theme"]));
    butModifier->setText("Modifier");
    table->setCellWidget(table->rowCount()-1, 2, butModifier);
    QObject::connect(butModifier, SIGNAL(click(PushButtonID*, int)), th, SLOT(questionPage(PushButtonID*, int)));

    auto butDelete = new PushButtonID(std::stoi(row["id_theme"]));
    butDelete->setText("Supprimer");
    table->setCellWidget(table->rowCount()-1, 3, butDelete);
    QObject::connect(butDelete, SIGNAL(click(PushButtonID*, int)), th, SLOT(deleteTheme(PushButtonID*, int)));
    }*/
}
