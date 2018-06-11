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

class Database{
public:
  Database(const std::string& url, const std::string& user, const std::string& password, const std::string& database);
  ~Database(){}

  void errorMessage(sql::SQLException& e);
  std::vector<std::map<std::string, std::string>> executeQuery(std::string& query);
  bool isAlive();
  
private:
  std::shared_ptr<sql::Connection> connection;
  std::shared_ptr<sql::Statement> statement;
};

std::vector<std::string> getCollumsName(const std::string&);
std::vector<std::string> removeUselessWords(std::vector<std::string>);
std::vector<std::string> removeUselessLetters(std::vector<std::string>);
std::vector<std::string> separateWords(std::vector<std::string>);

#endif
