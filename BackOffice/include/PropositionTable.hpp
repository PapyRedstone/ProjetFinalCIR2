#ifndef PROPOSITION_TABLE_HPP
#define PROPOSITION_TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"

class Proposition;

/**
*\brief Classe representant un tableau de propositions
*/
class PropositionTable{
public:
	/**
	*\brief Constructeur
	*
	*\param db : connection a une BDD
	*
	*\param id : id des questions lie aux propositions affichees
	*
	*\param t : pointeur vers la table a gerer
	*
	*/
  PropositionTable(std::shared_ptr<Database> db, int id, QTableWidget* t=nullptr);
  ~PropositionTable(){}

  /**
  *\brief Fonction chargant le tableau a partir de la BDD
  *
  *\param utili: Objet Qt contenant les slots necessaires 
  */
  void loadTable(Proposition*);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
  int id_question;
};

#endif
