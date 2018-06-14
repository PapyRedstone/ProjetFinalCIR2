#ifndef TABLE_HPP
#define TABLE_HPP

#include <QtWidgets>
#include <memory>
#include "Database.hpp"

class Utilisateur;

/**
*\brief Classe representant un tableau de score
*/
class ScoreTable{
public:
	/**
	*\brief Constructeur
	*
	*\param db : connection a une BDD
	*
	*\param t : pointeur vers la table a gerer
	*
	*/
  ScoreTable(std::shared_ptr<Database> db, QTableWidget* t = nullptr):table{t}, database{db}{}
  ~ScoreTable(){}

  /**
  *\brief Fonction chargant le tableau a partir de la BDD
  *
  *\param userName : nom de l'utilisateur dont il faut recuperer les scores
  *
  *\param utili: Objet Qt contenant les slots necessaires 
  */
  void loadTable(std::string userName, Utilisateur* utili);

private:
  QTableWidget* table;
  std::shared_ptr<Database> database;
};

#endif
