#ifndef QUESTION_TABLE_HPP
#define QUESTION_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Question;

class QuestionTable{
public:
  QuestionTable(std::shared_ptr<Database> db, int id, QTableWidget* t=nullptr);
  ~QuestionTable(){}

  void loadTable(Question*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
  int id_theme;
};

#endif
