#ifndef PROPOSITION_TABLE_HPP
#define PROPOSITION_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Proposition;

class PropositionTable{
public:
  PropositionTable(std::shared_ptr<Database> db, int id, QTableWidget* t=nullptr);
  ~PropositionTable(){}

  void loadTable(Proposition*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
  int id_question;
};

#endif
