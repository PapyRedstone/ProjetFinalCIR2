#ifndef QUESTION_TABLE_HPP
#define QUESTION_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Question;

/**
*\brief Classe representant un tableau de questions
*/
class QuestionTable{
public:
	/**
	*\brief Constructeur
	*
	*\param db : connection a une BDD
	*
	*\param id : id du theme lie aux questions affichees
	*
	*\param t : pointeur vers la table a gerer
	*
	*/
  QuestionTable(std::shared_ptr<Database> db, int id, QTableWidget* t=nullptr);
  ~QuestionTable(){}

  /**
  *\brief Fonction chargant le tableau a partir de la BDD
  *
  *\param utili: Objet Qt contenant les slots necessaires 
  */
  void loadTable(Question*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
  int id_theme;
};

#endif
