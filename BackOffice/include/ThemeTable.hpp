#ifndef THEME_TABLE_HPP
#define THEME_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Theme;

/**
*\brief Classe representant un tableau de themes
*/
class ThemeTable{
public:
	/**
	*\brief Constructeur
	*
	*\param db : connection a une BDD
	*
	*\param t : pointeur vers la table a gerer
	*
	*/
  ThemeTable(std::shared_ptr<Database> db, QTableWidget* t=nullptr);
  ~ThemeTable(){}

  /**
  *\brief Fonction chargant le tableau a partir de la BDD
  *
  *\param utili: Objet Qt contenant les slots necessaires 
  */
  void loadTable(Theme*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database; 
};

#endif
