#ifndef TABLE_HPP
#define TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"

class Utilisateur;

class ScoreTable{
public:
  ScoreTable(std::shared_ptr<Database> db, QTableWidget* t = nullptr):table{t}, database{db}{}
  ~ScoreTable(){}

  void loadTable(std::string, Utilisateur* );

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
};

#endif
