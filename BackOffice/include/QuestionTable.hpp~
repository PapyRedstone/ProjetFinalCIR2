#ifndef THEME_TABLE_HPP
#define THEME_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Theme;

class ThemeTable{
public:
  ThemeTable(std::shared_ptr<Database> db, QTableWidget* t=nullptr);
  ~ThemeTable(){}

  void loadTable(Theme*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database; 
};

#endif
