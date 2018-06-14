#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "mysql_connection.h"
#include "Functions.hpp"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>
#include <sstream>
#include <stdexcept>

/**
	*\brief Classe encapsulant l'acces a une base de donnée
	*
	*Cette classe encapsule un acces a une base de donnée. Elle utilise cppconnector pour une connexion a mysql
	*/

class Database{
public:
	/**
	*\brief Constructeur
	*
	*\param url : url de la BDD a utiliser
	*\param user : nom de l'utilisateur pour la connexion a la BDD
	*\param password : mot de passe associe a l'utilisateur
	*\param database : nom de la BDD a utiliser
	*/
  Database(const std::string& url, const std::string& user, const std::string& password, const std::string& database);
  ~Database(){}

  /**
  *\brief Fonction pour executer les requetes SQL
  *
  *Cette fonction execute une requete SQL. 
  *ATTENTION: pour une requete SELECT, l'utilisation de * ne fonctionnera pas correctement pour le retour de la fonction
  *
  *\param query : requete SQL
  *
  *\return Retourne le resultat de la commande SQL sout la forme d'un tableau (lignes de la reponse) de tableau associatif (nom de la collonne, valeur)
  */
  std::vector<std::map<std::string, std::string>> executeQuery(std::string& query);

  /**
  *\brief Verifie si la connection a la BDD est valide
  *
  *\return true si la connection est valide
  */
  bool isAlive();
  
private:
  void errorMessage(sql::SQLException& e);

  std::vector<std::string> getCollumsName(const std::string&);
  std::vector<std::string> removeUselessWords(std::vector<std::string>);
  std::vector<std::string> removeUselessLetters(std::vector<std::string>);
  std::vector<std::string> separateWords(std::vector<std::string>);

  std::shared_ptr<sql::Connection> connection;
  std::shared_ptr<sql::Statement> statement;
};

#endif
